-----

# 1. React

-----

There are two React 核心包:

1.   **React** (the core functions of React => 不包含任何宿主 (e.g., 浏览器) 环境代码)
     -   React 将对宿主环境提供能力处理放在宿主包里 (核心代码不会变动)

2.   **React DOM**



**JSX**

=> JSX allows to use **html** method to write **React**

=> **babel 用来语法转换**

1.   当引入 `type = "text/babel"`, babel 将接管 script 内所有代码语法

2.   **Mechanism** of Babel:
     -   当页面所有 script 标签生成完毕，babel 会监听全局的 `document.contentLoad`
     -   babel 直接拿走所有的 script 标签 (`document.getElementByTagName`)
     -   babel 读取 script 标签 (type) 属性 (`getAttributes ("type")`)
     -   如果发现 `type = "text/babel"`, babel 直接抓取所有代码并通过自身 transform 方法进行转换
     -   转换后, 新建一个 `script` 标签插入到 `head` 标签内

-----

# 2. React Scaffold

-----

## 2.1. Introduction of React Scaffold

In Programming, scaffold (脚手架) 提供预设，以方便开发者只考虑代码问题

**Functions** of scaffold:

1.   集成 webpack
2.   组件化 (生成项目目录)
3.   网络跨域
4.   ...

## 2.2. Start a standlone React project

To start a standlone React project => `npx create-react-app my-app`



Explaination of this code:

1.   `npx` (`npm` 的附带产物)

-   当用 npx 执行命令, npx 会看第一个参数的对应工具是否被安装

-   如果没有被安装, npx 则会告知 npm 进行临时安装 (进内存), 安装好之后则再次进行指令

2.   `create-react-app` => React 官方脚手架

3.   code after `create-react-app` => 项目名称



运行 `npx create-react-app my-app` 之后, 包含 package.json 文件的目录自动创建

-   package.json 帮助维护当前项目，以及和 npm 进行交互的

-----

# 3. React Components

-----

React components -- 组建允许将 UI 划分为独立的, 可重复使用的部分 (组件可以重复使用), 并且可以对每个组件进行单独思考.

在 React 中, 一个组件大多数情况下为一个函数 (React 也有类组件).

## 3.1. Require of React components

1.   **组件名称必须大写** (React components starts in Capital, React element (React 元素) starts in lower case)

2.   React 组件必须要返回可以渲染的 React Element (可渲染的对象)

     可被渲染的 React Element:

     -   null
     -   React 元素
     -   组件
     -   可以被迭代的对象 (数组，set，map...), 只需对象拥有一个迭代借口就可以被渲染 (可以追加迭代接口)

## 3.2. Components state (组件状态)

In React, 每一次对组件的使用 `<Component />` 都是在直接调用对应的组件函数.

React 组件本质上为一个函数.



**当需要通过点击让页面产生变化的时候**

=> 需要让组件重新渲染

=> 使函数组件重新渲染 (重新执行):

1.   组件状态发生变化 => Use `useState` (This part)
2.   组件属性发生变化 (现象)



Reason for using `useState` (使用 `useState` 函数构建状态):

-   使用 `useState` 构建的状态会返回一个更新状态的函数
-   当调用这个函数修改状态时, React 会通知组件进行重新渲染

=> `useState` 返回的修改数据的函数 `setState` 会在被调用时数据产生变动

=> React 组件重新渲染该组件 (重新执行)

=> Pseudocode example:

```javascript
function setCount (newValue) {
    count = newValue;
    reRenderThisComponent(); // 重新渲染
}
```



However `useState` 组件更新状态是异步的 (当更改状态的函数执行以后, 无法同步更新函数的值)

=> To 获取最新的状态: use `useEffect` or `useLayoutEffect`



Way to use `useState`:

1.   `useState` 在被调用的时候可以传递函数, 也可以传递具体的值
     -   如果传递的是函数, 则会直接执行函数并将函数的返回值作为初始化的状态 (e.g., 函数所计算出来的值)
     -   But 传递具体的值更好, 因为对函数的初始化的操作不会再运行
     -   In details, for example `const [count, setCount] = useState(() => 0)`
         -   当 Counter 组件重新渲染时, 意味着整个 Counter 函数将重新执行
         -   Counter 函数重新执行意味着内部代码将重新运行
         -   意味着 `useState` 将被重新执行, 并且 `useState` 内的函数 (`() => 0`) 将重新计算
         -   But `useState` 对初始化操作有区分, 如果不是在函数内进行第一次调用的函数, 就不会进行初始化操作
         -   初始化操作: 将传递给 `useState` 的值重新赋值
         -   这也意味着如果传递给 `useState` 的是一个函数, 则此函数的计算没有任何意义 (将会重复给出函数计算值, e.g., 0)

2.    `useState` 在被调用时, 会产生一对数组, 数组内包含两个值:
     -   以初始化为值的变量
     -   修改该变量的函数, 函数的调用会造成函数组件的重新运行:
         -   调用该函数的时候, 可以传递一个值, 也可以传递一个函数
         -   如果传递一个函数, 则 React 会将上一次的状态传递以帮助计算 (React 会将这个函数放在一个队列里等待执行)
3.   状态的更新是批量进行的 => for high performance

## 3.3. Components props (组件属性)

传递属性到组件内 <=> 传递参数到对应的组件函数内



React 中属性分为:

1.   标签属性
     -   传递给 JSX 的标签元素的属性
     -   标签元素 => 在 html 内有明确对标的元素 (e.g., <div>, <span>, <button>, ...)
     -   标签属性会被 React 自行处理, 已对应到底层的事件或者属性
         -   JSX 最终都会被 babel 转换为 React.createElement
         -   如果是标签元素, 则会将对应的标签属性全部传递给 React.createElement, React 内部会自行处理
         -   如果是组件元素, babel 也会将其编译, ta 的组件属性会被作为参数传递给对应的组件函数
2.   组件属性 (传递给组件的属性)



使函数组件重新渲染 (重新执行):

1.   组件状态发生变化 => Use `useState` (This part)

2.   组件属性发生变化 (现象)

     => 有些场景无法实现

     => parent component 重新渲染, 自身就一定会重新渲染

## 3.4. React 事件

React 事件 约等于 原生事件:

-   原生事件 => document.addEventListener

-   React =>

    -   on + 事件类型 (e.g., onClick, onMouseEneter, onMouseLeave, ...)

    -   ...



