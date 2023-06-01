# 1. C# Syntax & Comments

基础结构: 1) 类型, 2) 函数, 类型内套了一个类似 **函数** 的代码结构, 就为 C sharp 的基础结构.

```c#
class Program  // 类型, Program 为类型名称 (可自定义, 开头不能为数字和关键字)
{
    static void Main(string[] args)  // 函数 (Main 为程序入口)
    {
        Console.WriteLine("Hello World");  // 执行代码
    }
}
```

## 1.1 C# Keywords (关键字)

In English: [https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/keywords/]

In Chinese: [https://learn.microsoft.com/zh-cn/dotnet/csharp/language-reference/keywords/]

# 2. Variable

## 2.1 Variable grammar

```c#
VariableType VariableName = InitialValue;
```

变量名称不能为数字开头 (variable name cannot start with num)

-----

## 2.2 Create variables

1.   Set single variable: `int x = 1;`
2.   Set several variables in one line: `int x = 1, y = 2, z = 3;`

-----

## 2.3 Example (e.g. 100 + 200)

```c#
using System;

class calculate100Add200
{
    static void Main()
    {
        int n = 100, m = 200;  // = 赋值
        int sum = n + m;  // 申请变量(不能再申请相同的变量), 但可重复使用变量
        Console.WriteLine(sum);  // .NET 提供 WriteLine() 以输出结果
        Console.ReadKey();  // ReadKey() - 接收(打印) output, 再按下任意键时结束进程
    }
}
```

赋值 `=`

输出 `WriteLine()`

读取输入键 `ReadKey()`

-----

## 2.4 Work on variable

```c#
class workOnVariable
{
    static void Main()
    {
        int m = 200;  // 申请变量
        int n = 30;
        m = 100;  // 使用变量 m (将 m 值更改为 100)
        
        // To switch variable value
        var temp = 0;
        temp = m;  // temp = 200
        m = n;  // m = 0
        n = temp;  // n = 200
        
        Console.WriteLine(m);
        Console.WriteLine(n);
        Console.ReadKey();
    }
}
```

# 3. Data type

## 3.1 Basic types

变量类型 - 用于确定内存以什么方式去处理数据 (int, string, ...)

```c#
class datatype
{
    static void Main()
    {
        int myNum = 9;
        double myDoubleNum = 8.99;
        char myLetter = 'A';
        bool myBoolean = false;
        string myText = "Hello World";
    }
}
```

-----

## 3.2 Default value ?

```c#
int x;  // c# 给出默认值 x = 0
string x;  // c# 给出默认值 x = null
```

-----

## 3.3 Type convertion

```c#
class datatype
{
    static void Main()
    {
        int myInt = 10;
        
        Console.WriteLine(myNum.ToString());
        // OR
        Console.WriteLine(Convert.ToString(myInt));
    }
}
```

```c#
// Convert a value to its equivalent 32-bit signed integer representation
To.Int32();
```

# 4. C# Math

-   Print the max value between two values: `Console.WriteLine(Math.Max(x, y));`
-   Print the square root of x: `Console.WriteLine(Math.Sqrt(x));`
-   Round the number to its nearest integer: `Console.WriteLine(Math.(x));`

# 5. String

## 5.1 Example 1

```c#
class stringdemo
{
    static void Main()
    {
        // Create a 'str' variable of type string and assign it the value 'Hello World'
        string str = "Hello World";
        
        // Concatenate two string
        string firstName = "Zewen";
        string lastName = "Kong";
        string name = firstName + lastName;
        Console.WriteLine(name);
        
        // Concatenate two string using the string interpolation method
        string name = $"My full name is: {firstName} {lastName}";
        Console.WriteLine(name);
        
        // Access the first char in str
        Console.WriteLine(str[0]);
        
        // Print the length of the string
        Console.WriteLine(str.Length);
        
        // To upper case letters
        Console.WriteLine(str.ToUpper());
    }
}
```

-----

## 5.2 Example 2 (读取输入进行计算)

```c#
using System;

namespace examplespace
{
    class calculateEnteredValue
    {
        static void Main()
        {
            Console.WriteLine("Enter a number: ");
            
            // 读取用户输入, 定义为 int 类型变量, 将输入值赋予 integer
            int integer = Console.ReadLine();
            // 打印变量 integer
            Console.WriteLine(integer);
            
            var m = 200;
            sum = integer + m;
            string name = "Result is: ";
            Console.WriteLine(name);  // print string
            Console.WriteLine(sum);
            
            Console.ReadKey();
        }
    }
}
```

-----

## 5.3 Example 3 (enter string)

```c#
using System;

namespace zewenspace
{
    class stringValue
    {
        static void Main()
        {
            Console.WriteLine("Enter a value: ");
            
            // 读取用户输入, 定义为 string 类型变量, 将输入值赋予 str
            string str = Console.ReadLine();
            
            // 将 string 类型变量转化为 int 类型变量, 进行计算
            // 再存储到 int 类型变量 num 内
            int num = int.Parse(str) + 20;
            Console.WriteLine(num);
            
            // 将 20 转化为字符串 (c# 使用 + 号把字符串连接起来)
            string str20 = str + 20.ToString();
            Console.WriteLine(str20);

            Console.ReadKey();
        }
    }
}
```

`ReadKey()` - 锁定(暂停) Terminal 窗口, 用来读取一次按键输入. 当按下某个键, 代码运行完成, 程序关闭.

-----

## 5.4 Example 4 (输入信息并展示)

```c#
using System;

namespace infocollect
{
    class info
    {
        static void Main()
        {
            Console.WriteLine("Enter your name: ");
            string name = Console.ReadLine();
            
            Console.WriteLine("Enter your age: ");
            string age = Console.ReadLine();
            
            Console.WriteLine("Enter your city: ");
            string city = Console.ReadLine();
            
            Console.WriteLine("");
            
            string ninfo = ("Name: ");
            string nameinfo = ninfo + name;
            Console.WriteLine(nameinfo);
            
            Console.WriteLine("Age: " + age + "years old");
            
            Console.WriteLine("City: " + city);
            
            Console.ReadKey();
        }
    }   
}
```

# 6. If...Else

## 6.1 If syntax

```c#
using System;

namespace spaceone
{
    class classone
    {
        static void Main()
        {
            // bool boolean = true;
            // 如果 boolean = true, 执行 if 内代码
            if(boolean)
            {
                // code
            }
        }
    }   
}
```

----

## 6.2 Example 1

```c#
using System;

namespace infocollect
{
    class info
    {
        static void Main()
        {
            Console.WriteLine("Enter your name: ");
            string name = Console.ReadLine();
            
            // test name using 'if'
            // '=' 赋值, '==' 判断是非等于
            // 如果 name 等于 "Ziven", 返回 true, 反之返回 false
            // name == "Ziven" 在 c# 中被称为表达式
            
            bool isCheck = name == "Ziven";
            
            // 不等于表达 !=
            
            // 如果 isCheck 为 true, 执行 if 语句内代码
            if(isCheck)
            {
                Console.WriteLine("Entered name is Ziven.");
                name = "Kong Zewen";
            }
            
            Console.WriteLine("Name: " + name);
            
            Console.ReadKey();
        }
    }   
}
```

-----

## 6.3 Exampel 2 (if 组合式写法)

```c#
using System;

namespace infocollect
{
    class info
    {
        static void Main()
        {
            Console.WriteLine("Enter your name: ");
            string name = Console.ReadLine();
            
            if(name == "Ziven")  // 如果满足(true), 不执行 'else if', 跳出循环
            {
                Console.WriteLine("Entered name is Ziven.");
                name = "Zewen";
            }
            else if(name == "Zewen")  // 如果满足(true), 不执行之后的 'else if', 跳出循环
            {
                Console.WriteLine("Entered name is Zewen.");
                name = "Kong Zewen";
            }
            else if(name == "Dapao")
            {
                Console.WriteLine("Entered name is Dapao.");
                name = "Zhang Dapao";
            }
            // 如果不写 else, 当所有条件都不满足, 跳出循环
            // 有 else, 当所有条件都不满足, 执行else, 再跳出循环
            // else 不需要条件
            else
            {
               Console.WriteLine("PikaPika"); 
            }
             
            Console.WriteLine("Name: " + name);
            Console.ReadKey();
        }
    }   
}
```

----

## 6.4 Example 3 (if 嵌套)

```c#
using System;

namespace infocollect
{
    class info
    {
        static void Main()
        {
            Console.WriteLine("Enter your name: ");
            string name = Console.ReadLine();
            
            Console.WriteLine("Enter your age: ");
            int age = Console.ReadLine();
            
            if(name == "Ziven")  // 如果满足(true), 不执行 'else if', 跳出循环
            {
                Console.WriteLine("Entered name is Ziven.");
                name = "Zewen";
                
                // 嵌套 'if'
                if(age <= 18)
                {
                    name = "Young Zewen";
                }
            }
            
            Console.WriteLine("Name: " + name);
            Console.ReadKey();
        }
    }   
}
```

`else`or `else if` 内也可以嵌套 `if`

-----

## 6.5 Example 4 (判断成绩范围)

```c#
using System;

namespace dataspace
{
    class dataclass
    {
        static void Main()
        {
            int grade = 70;  // the example grade
            
            // && 且
            // false && false => false
            // f && t => f
            // t && f => f
            // t && t => true
            
            // || 或
            // 两个结果只要有一个 true, 则返回 true
            // f || f => f
            // f || t => t
            // t || f => t
            // t || t => t
            
            if(grade >= 0 && grade < 60)
            {
                Console.WriteLine("Pass")
            }
            else if (grade >= 60 && grade < 70)
            {
                Console.WriteLine("Merit")
            }
            else if (grade >= 70 && grade <= 100)  // true && true => true => run code
            {
                Console.WriteLine("Distinction")
            }
            else{
                Console.WriteLine("Out of range")
            }

            Console.ReadKey();
        }
    }   
}
```

-----

## 6.6 Example 5 (ternary operator)

```c#
int time = 20;
// if time < 18, print "Good evening"
string result = (time < 18) ? "Good day." : "Good evening.";
Console.WriteLine(result);
```

# 7. Switch

## 7.1 Switch Sytanx

```c#
switch (expression)
{
    case value1:
        // Code to be executed when expression matches value1 (expression = value1)
        break;
        // Terminates the execution of the switch statement
        // If a break statement is not included, the execution will continue to the next case until a break
        // or the end of the switch statement is encountered.

    case value2:
        // Code to be executed when expression matches value2 (expression = value2)
        break;
    // More case statements
    default:  // Optional case that is used when the expression does not match any of the specified cases
        // Code to be executed when expression does not match any case
        break;
}
```

-----

## 7.2 Example

```c#
class exampleSwitch
{
    static void Main()
    {
        int num = 2;

        switch (num)
        {
            case 1:
                Console.WriteLine("Number is 1");
                break;
            case 2:
                Console.WriteLine("Number is 2");
                break;
            case 3:
                Console.WriteLine("Number is 3");
                break;
            default:
                Console.WriteLine("Number is not 1, 2, or 3");
                break;
        }

        Console.ReadKey();
    }
}
```

# 8. Methods

## 8.1 Genral Syntax

当我们需要重复允许一块相同的代码 (repeated code block), 可以使用 ==方法 method== 减轻代码量.

```c#
// 方法使用范围 ｜ 状态 ｜ 方法返回值类型 ｜ 方法名

public static void GetInfo()
{
    
}

// 方法使用范围 默认为 private
```

-----

## 8.2 Example 1

```c#
using System;

namespace dataspace
{
    class dataclass
    {
        // Main() 方法/函数
        static void Main()
        {
            GetInfo();  // 1st info
            GetInfo();  // 2nd info
            GetInfo();  // 3rd info
            // ...
            
            Console.ReadKey();
        }
        
        // 方法 method
        // method 需定义在 class 内
        
        static void GetInfo()  // method name | void 无返回值
        {
            // 方法体(大括号内 {})
            
            Console.WriteLine("Enter your name: ");
            string name = Console.ReadLine();
            
            Console.WriteLine("Enter your age: ");
            string age = Console.ReadLine();
            
            Console.WriteLine("Enter your city: ");
            string city = Console.ReadLine();
            
            Console.WriteLine("");
            Console.WriteLine("Name: " + name);
            Console.WriteLine("Age: " + age + "years old"); 
            Console.WriteLine("City: " + city); 
        }
        
    }   
}
```

-----

## 8.3 Example 2

**Question:**

在 Main() 函数中 call 方法 GetInfo(), 执行完 GetInfo(), 再返回到 Main(). 但 Main() 函数中 运行了很多次 变量定义 (e.g. string name = Console.ReadLine();).

**Answer:**

再方法内, 变量范围不一样, 方法内的变量只用在当前的方法内, 当方法结束, 变量消失.

-----

## 8.4 Example 3

```c#
using System;

namespace infocollect
{
    class info
    {
        static void Main()
        {
            GetInfo();
            Console.ReadKey();
        }
        
        static void GetInfo()
        {
            Console.WriteLine("Enter your name: ");
            string name = Console.ReadLine();
            
            // 把在 GetInfo() 内定义的 name 传入到 nameVerify() 内
            // nameVerify(name);
            // 从 nameVerify() 内接收 name => 从新赋值到 name 内
            name = nameVerify(name);
            
            Console.WriteLine("Enter your age: ");
            string age = Console.ReadLine();
            
            Console.WriteLine("Enter your city: ");
            string city = Console.ReadLine();

            Console.WriteLine("");
            Console.WriteLine("Name: " + name);
            Console.WriteLine("Age: " + age + "years old"); 
            Console.WriteLine("City: " + city);
        }
        
 
        // 接收参数: string name_1, 约等于 name
        // 传过来的 name 为 string, 所以接收 name 需要定义
        // 可以更改接收过来的 name 的名称, 因为接收的值只会在此方法内使用
        // 返回值 (name_1) 类型为 string, 所以把 void 更改为 string
        static string nameVerify(string name_1)
        {
            if(name_1 == "Ziven")
            {
                Console.WriteLine("Entered name is Ziven."); 
                name_1 = "Zewen";
            }
            else if(name_1 == "Zewen")
            {
                Console.WriteLine("Entered name is Zewen.");
                name_1 = "Kong Zewen";
            }
            else if(name_1 == "Dapao")
            {
                Console.WriteLine("Entered name is Dapao.");
                name_1 = "Zhang Dapao";
            }
            else
            {
               Console.WriteLine("PikaPika"); 
            }
            
            // 处理完值, 返回 name_1 到 GetInfo() 内
            return name_1;
        }
    }   
}
```

# 9. Loops

## 9.1 While Loop

### 9.1.1 While Loop Syntax

The loop will run as long as this condition evaluates to true.

```c#
while (condition)
{
    // Code to be executed while the condition is true
}
```

### 9.1.2 Example

```c#
int count = 0;

while (count < 5)  // condition => count < 5
{
    Console.WriteLine("Count: " + count);
    count++;
}
```

### 9.1.3 Do/While Loop

```c#
int count = 0;

do
{
    Console.WriteLine("Count: " + count);
    count++;
}
while (count < 5);
```

-----

## 9.2 For Loop

### 9.2.1 For Loop Syntax

```c#
for([1]; [2]; [3])
{
    // 大括号内为循环代码
}
```

for loop 小括号内分为三个部分:

1.   初始值定义 (只执行一次)
2.   条件表达式 (对初始值进行判断)
     -   为 boolean value, 返回 true/false, 来表示 for 循环内的代码需不需要执行.
     -   True - 执行, False - 不执行


3.   对初始值进行的修改 (在进入 for 循环后)

### 9.2.2 Example 1 (Infomation Collection)

```c#
using System;

namespace infocollect
{
    class info
    {
        static void Main()
        {
            int i = 0;  // 定义一个数字, 此数字用作 for 循环的初始值
            
            for(; i <= 3; )  // 如果 i 小于等于 3, 执行循环内代码
            {
                // 所循环的代码
                GetInfo();
                
                i = i + 1;  // 调用变量 i, + 1
            }
            
            Console.ReadKey();
        }
        
        static void GetInfo()
        {
            // ...
        }
    }   
}
```

```c#
using System;

namespace infocollect
{
    class info
    {
        static void Main()
        {
            for(int i = 0; i <= 3; i = i + 1; ) 
            {
                GetInfo();
            }
            
            Console.ReadKey();
        }
        
        static void GetInfo()
        {
            // ...
        }
    }   
}
```

### 9.2.3 Example 2 (Print 1 to 10)

```c#
using System;

namespace printnum
{
    class print1to10
    {
        static void Main()
        {
            for(int i = 1; i <= 10; i = i + 1) 
            {
                 Console.WriteLine(i);
            }
            
            Console.ReadKey();
        }
    }   
}
```

### 9.2.4 Example 3 (判断字符串)

```c#
using System;

namespace nameCheck
{
    class nameCheckClass
    {
        static void Main()
        {
            // 判断名字是否为 Ziven, 若为 Ziven 打印 Hi, Ziven, 并请求输入新的字符串
            // 反之结束循环
            for(string name = "Ziven"; name == "Ziven";) 
            {
                Console.WriteLine("Hi, " + name);
                {
                    name = Console.ReadLine();
                }
            }
            
            Console.ReadKey();
        }
    }   
}
```

### 9.2.5 Example 4 (for/if loop)

```c#
// Stop the loop if i is 5

for (int i = 0; i < 10; i++)
{
    if (i == 5)
    {
        break;
    }
    Console.WriteLine(i);
}
```

```c#
// When the value is "4", jump directly to the next value

for (int i = 0; i < 10; i++)
{
    if (i == 4)
    {
        continue;
    }
    Console.WriteLine(i);
}
```

# 10. Arrays

```c#
// Print the value of the second element in the cars array
string[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
Console.WriteLine(cars[1]);

// Change the value from "Volvo" to "Opel", in the cars array
cars[0] = "Opel";
Console.WriteLine(cars[0]);

// Loop through the elements in the cars array using the foreach loop
foreach (string i in cars)
{
    Console.WriteLine(i);
}

// Sort the cars array.
Array.Sort(cars);
foreach (string i in cars)
{
    Console.WriteLine(i);
}
```

# 11. Debug 调试

调试快捷键:

https://learn.microsoft.com/en-us/visualstudio/mac/keyboard-shortcuts?view=vsmac-2022

调试教程:

https://www.bilibili.com/video/BV1NA4y1R7vL/?p=17&spm_id_from=pageDriver&vd_source=81dd83eba262ec52622725a5f0241f6c

# 12. Classes/Objects

## 12.1 Example 1

```c#
// create a class called MyClass
class MyClass

// Create an object of MyClass called myObj   
MyClass myObj = new MyClass ();
```

-----

## 12.2 Example 2

```c#
// Create an object of Car called myObj, and use it to set the value of maxSpeed to 200

class Car
{
    int maxSpeed;
    
    static voide Main(string[] args)
    {
        Car myObj = new Car();
        myObj.maxSpeed = 200;
    }
    
    Console.WriteLine(myObj.color);
    Console.WriteLine(myObj.maxSpeed);
}
```

## 12.3 Example 3

```c#
// Create a constructor of Car, and call it

class Car
{
    public string model;
    
    // to make model NOT accessible
    // private string model;
    
    public Car()
    {
        model = "Mustang";
    }
    
    static void Main(string[] args)
    {
        Car Ford = new Car();
        Console.WriteLine(Ford.model);
    }
}
```

## 12.4 Example 4

```c#
// The Car class should inherit the class members from the Vehicle class
class Car : Vehicle
```

# 13. 泛型集合

Example (计算集合内一个字符的数量)

```c#
using System;
using System.Collections.Generic

namespace nameCheck
{
    class nameCheckClass
    {
        static void Main()
        {
            // 名为 names 的 string 类型集合
            // new List<string>(); 初始化集合
            List<string> names = new List<string>();
            
            // 录入数据, 录入到 names 内
            names.Add("nameone");
            names.Add("nametwo");
            names.Add("namesthree");
            
            int num = 0;
            
            for(int i = 0; i < names.Count; i = i + 1)  // names.Count names内的数据数量
            {
                if(names[i] == "nametwo")
                {
                    num ++;  // num = num + 1 
                }
            }
            Console.WriteLine(num);

            Console.ReadKey();
        }
    }   
}
```

# 14. Error processing (Exceptions)

## 14.1 Example 1

```c#
try
{
    int[] myNumbers = {1, 2, 3};
    Console.WriteLine(myNumbers[10]);
}
catch (Exception e)
{
    Console.WriteLine(e.Message);
}
```

-----

## 14.2 Example 2

```c#
try
{
    int[] myNumbers = {1, 2, 3};
    Console.WriteLine(myNumbers[10]);
}
catch (Exception e)
{
    Console.WriteLine("Something went wrong.");
}
finally  // the finally block is optional
{
    Console.WriteLine("The 'try catch' is finished.");
}
```

The finally block is optional and will always be executed, regardless of whether an exception occurred or not. It is typically used to perform cleanup or release resources. In this example, it writes "The 'try-catch' is finished." to the console.

-----

## 14.3 Example 3

```c#
using System;
using System.Collections.Generic

namespace ageSpace  // print age after 10 years
{
    class agePredict
    {
        static void Main()
        {
            Console.WriteLine("Your current age: ");
            string age = Console.ReadLine();
            int ageInNum = 0;
            
            try  // 将有可能报错的代码放入 try block 内
            {
                ageInNum = int.Parse(age);  // 可能输入字符, 导致报错
            }
            catch  // 处理报错
            {
                Console.WriteLine("Please enter a number.");
                Console.ReadKey();
                return;  // 结束进程, 不执行之后代码
            }
            
            ageInNum = ageInNum + 10;
            Console.WriteLine("Age after 10 years: " + ageInNum.ToString)
            Console.ReadKey();
        }
    }   
}
```

-----

## 14.4 Example 2

```c#
using System;
using System.Collections.Generic;

namespace ageSpace  // print age after 10 years
{
    class agePredict
    {
        static void Main()
        {
            Console.WriteLine("Your name: ");
            string name = Console.ReadLine();

            int ageInNum = 0;
            bool isCheck = true;

            for (; isCheck;)
            {
                Console.WriteLine("Your current age: ");
                string age = Console.ReadLine();
                try
                {
                    ageInNum = int.Parse(age);
                    isCheck = false;
                }
                catch
                {
                    Console.WriteLine("Please enter a number.");
                }
            }

            ageInNum = ageInNum + 10;

            Console.WriteLine(name + ", your age after 10 years is " + ageInNum.ToString());
            Console.ReadKey();
        }
    }
}
```

# 15. 面向对象

## 15.1 Example 1 (逐步录入/显示信息)

```c#
using System;
using System.Collections.Generic;

namespace intro
{
    class introclass
    {
        static void Main()
        {
            Console.WriteLine("Your name: ");
            string name = Console.ReadLine();
            Console.WriteLine("Press any buttom to continue...")
            Console.ReadKey();
            
            Console.WriteLine("Your age: ");
            string age = Console.ReadLine();
            Console.WriteLine("Press any buttom to continue...")
            Console.ReadKey();
            
            Console.WriteLine("Your gender: ");
            string gender = Console.ReadLine();
            Console.WriteLine("Press any buttom to continue...")
            Console.ReadKey();
            
            Console.ReadKey();
        }
    }
}
```

-----

## 15.2 Example 2

```c#
using System;
using System.Collections.Generic;

namespace champion
{
    class championclass
    {
        static void Main()
        {
            Console.WriteLine("Welcome to this world.");
            Console.WriteLine("Press any buttom to continue...");
            Console.ReadKey();

            champion c = new champion();  // 实例化, 创建了变量

            Console.WriteLine("Enter your name: ");
            c.name = Console.ReadLine();  // not comfirm value
            Console.WriteLine("Enter your position: ");
            c.position = Console.ReadLine();

            c.HP = 100;  // confirmed value
            c.mana = 200;
            c.AD = 20;
            c.AP = 0;
            c.armor = 10;
            c.magicResist = 20;
            c.skill1 = "skillone";
            c.skill2 = "skilltwo";
            c.skill3 = "skillthree";

            // Console.WriteLine("Name: " + c.name);
            // Console.WriteLine("Position: " + c.position);
            // Console.WriteLine("HP: " + c.HP);
            // Console.WriteLine("Mana: " + c.mana);
            // Console.WriteLine("AD: " + c.AD);
            // Console.WriteLine("AP: " + c.AP);
            // Console.WriteLine("Armor: " + c.armor);
            // Console.WriteLine("Magic Resist: " + c.magicResist);
            // Console.WriteLine("Skill 1: " + c.skill1);
            // Console.WriteLine("Skill 2: " + c.skill2);
            // Console.WriteLine("Skill 3: " + c.skill3);
            
            c.ShowInfo();  // 打印数据

            Console.ReadKey();

            Console.WriteLine("Next...");

            Console.ReadKey();

            champion c1 = new champion();

            Console.WriteLine("Enter your name: ");
            c1.name = Console.ReadLine();  // not comfirm value
            Console.WriteLine("Enter your position: ");
            c1.position = Console.ReadLine();

            c1.HP = 80;  // confirmed value
            c1.mana = 300;
            c1.AD = 10;
            c1.AP = 100;
            c1.armor = 0;
            c1.magicResist = 20;
            c1.skill1 = "skilloneone";
            c1.skill2 = "skilltwotwo";
            c1.skill3 = "skillthreethree";
            
            c1.ShowInfo();

            Console.ReadKey();
        }
    }

    class champion
    {
        public string name;  // 默认为 private, 更改为 public, 使别的 class 可以访问
        
        // 如果加上 static -> public static string name
        // 就不跟实例化走, 变成跟 class 类走.
        // 非静态方法需要创建一个对象实例才能调用
        // 而静态方法可直接调用
        // static 非模版, 是已经定义好了的变量 (唯一的), 只能通过类型 class 调用
        // 没法用实例化访问 static 变量
        
        public string position = "";  // 如果不设置初始值, 默认为 null
        public int HP;
        public int mana;
        public int AD;
        public int AP;
        public int armor;
        public int magicResist;
        public string skill1;
        public string skill2;
        public string skill3;
        
        public void ShowInfo()  // 如果标识为 static 就无法使用了, 因为 static 不需要实例化
        {
            Console.WriteLine("Name: " + name);
            Console.WriteLine("Position: " + position);
            Console.WriteLine("HP: " + HP);
            Console.WriteLine("Mana: " + mana);
            Console.WriteLine("AD: " + AD);
            Console.WriteLine("AP: " + AP);
            Console.WriteLine("Armor: " + armor);
            Console.WriteLine("Magic Resist: " + magicResist);
            Console.WriteLine("Skill 1: " + skill1);
            Console.WriteLine("Skill 2: " + skill2);
            Console.WriteLine("Skill 3: " + skill3);
        }
    }
}
```

-----

## 15.3 Example 3 (通过创建新的类型来打印信息)

```c#
using System;
using System.Collections.Generic;

namespace champion
{
    class championclass
    {
        static void Main()
        {
            Console.WriteLine("Welcome to this world.");
            Console.WriteLine("Press any buttom to continue...");
            Console.ReadKey();

            champion c = new champion();  // 实例化, 创建了变量

            Console.WriteLine("Enter your name: ");
            c.name = Console.ReadLine();  // not comfirm value
            
            Console.WriteLine("Enter your position: ");
            c.position = Console.ReadLine();

            c.HP = 100;  // confirmed value
            c.mana = 200;
            c.AD = 20;
            c.AP = 0;
            c.armor = 10;
            c.magicResist = 20;
            c.skill1 = "skillone";
            c.skill2 = "skilltwo";
            c.skill3 = "skillthree";

            // c.showInfo1();  // 打印数据
            
            // showInfo sInfo = new showInfo();
            // sInfo.showInfo2(c);  // 把 c 传入到 showInfo2
            
            showInfo.showInfo2(c);  // 直接调用
            

            Console.ReadKey();
        }
    }
    
    class showInfo
    {   
        // 打印代码不需要区别对待 -> 可以用 static
        public static void showInfo2(champion c)  // 接收 c 的值(通过 champion 的类型)
        {
            Console.WriteLine("Name: " + c.name);
            Console.WriteLine("Position: " + c.position);
            Console.WriteLine("HP: " + c.HP);
            Console.WriteLine("Mana: " + c.mana);
            Console.WriteLine("AD: " + c.AD);
            Console.WriteLine("AP: " + c.AP);
            Console.WriteLine("Armor: " + c.armor);
            Console.WriteLine("Magic Resist: " + c.magicResist);
            Console.WriteLine("Skill 1: " + c.skill1);
            Console.WriteLine("Skill 2: " + c.skill2);
            Console.WriteLine("Skill 3: " + c.skill3);
        }
    }

    class champion
    {
        public string name;  // 默认为 private, 更改为 public, 使别的 class 可以访问
        public string position = "";  // 如果不设置初始值, 默认为 null
        public int HP;
        public int mana;
        public int AD;
        public int AP;
        public int armor;
        public int magicResist;
        public string skill1;
        public string skill2;
        public string skill3;
       
        // public void showInfo1()  // 如果标识为 static 就无法使用了, 因为 static 不需要实例化
        // {
        //     Console.WriteLine("Name: " + name);
        //     Console.WriteLine("Position: " + position);
        //     Console.WriteLine("HP: " + HP);
        //     Console.WriteLine("Mana: " + mana);
        //     Console.WriteLine("AD: " + AD);
        //     Console.WriteLine("AP: " + AP);
        //     Console.WriteLine("Armor: " + armor);
        //     Console.WriteLine("Magic Resist: " + magicResist);
        //     Console.WriteLine("Skill 1: " + skill1);
        //     Console.WriteLine("Skill 2: " + skill2);
        //     Console.WriteLine("Skill 3: " + skill3);
        // }
    }
}
```

# 16. 代码抽离

😭
