// 2. Variable & Constant
#include <stdio.h>

// 2.1 Type of variable

// 1) 局部变量 (定义在 代码块{} 之内的变量)
// 2) 全局变量 (定义在 代码块{} 之外的变量, 全局变量在哪都可以使用)

// - - - - - - - - - - Example 1 - - - - - - - - - -

// int num1 = 1; // 全局变量
// int main()
// {
//     int num2 = 2; // 局部变量
//     return 0;
// }

// - - - - - - - - - - Example 2 - - - - - - - - - -

// int global = 2023;
// int main(void)
// {
//     int local = 2024;
//     int global = 2020;
//     printf("global = %d\n", global); // global = 2020 (当全局变量与局部变量名称相同时, 会优先使用局部变量)
//     return 0;
// }

// 2.2 Use of variables

// - - - - - - - - - - Example 3 - - - - - - - - - -

// int main(void) // 输入并计算两数之和
// {
//     // C 语言语法规定, 变量要定义在当前代码块的最前端
//     int num1 = 0;
//     int num2 = 0;
//     int sum = 0;

//     scanf("%d%d", &num1, &num2);
//     // 输入函数/输入数据  - scanf()
//     // "%d%d" - 输入两个整数
//     // & - 取地址符号
//     // &num1 - 将第一个输入的值放在 num1 的地址

//     sum = num1 + num2;
//     printf("sum = %d\n", sum);
//     return 0;
// }

// 2.3 Name of variable

// 1) 名字必需有字母, 数字, 下划线组成. 不能有特殊符号, 以及不能由数字开头
// 2) 不能包含关键字

// 2.4 Variable scope and lifetime (变量的作用域和生命周期)

// 2.4.1 Scope

// 限定变量名称可用性的范围为该变量名的 Scope 作用域 (变量可用的地方就为他的作用域)

// Scope of local variable (局部变量) -> 变量所在的局部范围
// Scope of global variable (全局变量) -> Whole Project (整个项目)

// - - - - - - - - - - Example 4 - - - - - - - - - -

// To show scope of global variable

// int global = 2020;

// void test(void) // a function
// {
//     printf("test() => %d\n", global);
// }

// int main(void)
// {
//     test(); // Call the function test()
//     printf("%d\n", global);
//     return 0;
// }

// - - - - - - - - - - Example 5 - - - - - - - - - -

// To show scope of global variable (from another source file)

// int main(void)
// {
//     extern int v2; // extern 用于声明外部符号 (From Variable & Constant 2.c)
//     printf("v2 = %d\n", v2);
//     return 0;
// }

// 2.4.2 Lifetime 生命周期

// Variable's lifetime (生命周期) 为变量的创建到变量的销毁之间的时间段
// Life time of local variable -> 进入作用域(生命周期开始), 出作用域(生命周期结束)
// Life time of global variable -> 整个程序的生命周期

// 2.5 Constant

// 2.5.1 Contant types

// 1) Literal constant 字面常量
// 2) const 修饰的常变量
// 3) #define 定义的标识符常量
// 4) Enumeration constant 枚举常量

// - - - - - - - - - - Example 6 - - - - - - - - - -

// int main(void)
// {
//     // 1) Literal constant 字面常量
//     347;  // Literal constant
//     3.47; // Literal float constant

//     // 2) const 修饰的常变量
//     const int num = 347; // const 所修饰的 num 本质为变量, 但不能被修改
//     // num = 443;  // error
//     printf("%d\n", num); // 347

//     // const 修饰的常变量为变量的证明
//     // const int n = 10;
//     // int arr[n] = {0};  // 😅 你妈的怎么不报错了

//     return 0;
// }

// - - - - - - - - - - Example 7 - - - - - - - - - -

// #define 定义的标识符常量 (3)

// #define MAX 100  // 定义一个符号名为 MAX, MAX 内存放的值为 100
// #define STR "BZZB"

// int main(void)
// {
//     printf("%d\n", MAX); // 100

//     int n = MAX;
//     printf("%d\n", n); // 100

//     printf("%s\n", STR); // BZZB

//     // MAX = 200;  // error

//     return 0;
// }

// - - - - - - - - - - Example 8 - - - - - - - - - -

// Enumeration constant 枚举常量 (4)

// enum Color // enum 枚举的关键字 (有点像 Miranda 里的 Algebraic Types)
// {
//     // Color 所可能的取值 (枚举常量)
//     RED,
//     GREEN,
//     BLUE,
// };

// int main(void)
// {
//     // 三原色 RGB
//     enum Color c = RED; // 创建了一个颜色变量 c
//     // RED = 10;  // error (cannot change enumeration constant)
//     return 0;
// }
