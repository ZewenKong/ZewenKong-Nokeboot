#include <stdio.h>

// 7. Keywords

// 7.1 General keywords

// 1)
// auto

// - - - - - - - - - - Example 1 - - - - - - - - - -

// int main(void)
// {
//     int a = 0; // auto int a = 0; (所有局部变量前都有一个 auto (可省略))
//     return 0;
// }

// 2) 循环语句有关
// for
// while
// do...while
// break - 跳出循环(经常与循环一起使用)
// continue

// 3) 分支语句有关
// if...else
// case - 经常与 switch 一起使用
// switch
// default
// goto

// 4)
// char
// short
// int
// long
// float
// double
// signed
// unsigned

// 5)
// const

// 6) (自定义)类型有关
// enum - 枚举
// struct - 结构体
// union - 联合体(共用体)
// sizeof - 与类型有关
// typedef - 类型重命名
// void - 无(经常用于函数的返回类型, 函数参数)

// 7)
// extern - 声明外部符号

// 8)
// register - 寄存器
// static - 静态

// 9)
// return - 返回值

// 10)
// volatile

// All key words
// https://learn.microsoft.com/zh-cn/cpp/c-language/c-keywords?view=msvc-170

// 7.2 Keyword "typedef"

// typedef - 类型定义 / 类型重命名
// typedef 只能对类型进行重命名

// - - - - - - - - - - Example 2 - - - - - - - - - -

// typedef unsigned int unint;  // typedef 将 unsigned int 重命名为 unint

// C 结构体
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// typedef struct Node // use typedef to rename the struct
// {
//     int data;
//     struct Node *next;
// } Node;

// int main(void)
// {
//     unsigned int unnum_1 = 0;
//     unint unnum_2 = 1; // unint = unsigned int

//     struct Node n; // 创建节点 n
//     Node n2;       // Node = struct Node

//     return 0;
// }

// 7.3 Keyword "static"

// static 用来修饰函数和变量

// 1) 修饰局部变量 - 称为静态局部变量

// static 修饰局部变量时, 当局部变量离开作用域时, 局部变量不会被销毁
// static 修饰局部变量时, 改变了变量的存储位置

// 局部变量一开始是存储于栈区 (栈区内数据进入作用域创建, 离开作用域时销毁)
// 当用使用 static 修饰局部变量时, 该被修饰的局部变量 (静态变量) 会被存储于静态区
// 当静态区里的数据离开作用域时不会被销毁 (只有程序被销毁时才会被销毁)
// static 更改了数据的存储位置 - 影响了数据的生命周期

// - - - - - - - - - - Example 3 - - - - - - - - - -

// Without "static"  // 2 2 2 2 2 2 2 2 2 2

// void test()
// {
//     int a = 1;
//     a++;
//     printf("%d ", a);
// }

// With "static"  // 2 3 4 5 6 7 8 9 10 11

// void test() // 不希望函数返回值 - void
// {
//     static int a = 1; // 只执行了一次, 不会参与后续代码执行
//     a++;
//     printf("%d ", a);
// }

// int main(void)
// {
//     int i = 0;
//     while (i < 10)
//     {
//         test();
//         i++;
//     }
//     return 0;
// }

// 2) 修饰全局变量 - 称为静态全局变量

// - - - - - - - - - - Example 4 - - - - - - - - - -

// in (07.02-[Intro]-Keywords)

// extern int g_val; // 当全局变量在另一文件时, 声明外部符号

// int main(void)
// {
//     printf("%d\n", g_val);
//     return 0;
// }

// 3) 修饰函数 - 称为静态函数

// - - - - - - - - - - Example 5 - - - - - - - - - -

// in (07.02-[Intro]-Keywords)

// extern int Add(int x, int y);

// int main(void)
// {
//     int a = 10;
//     int b = 20;
//     int sum = Add(a, b);
//     printf("%d\n", sum);
//     return 0;
// }

// 7.4 Keyword "register"

// - - - - - - - - - - Example 6 - - - - - - - - - -

// int main(void)
// {
//     register int num = 2; // 寄存器变量 (建议将 num 存放在寄存器 (更快的读写))
//     return 0;
// }
