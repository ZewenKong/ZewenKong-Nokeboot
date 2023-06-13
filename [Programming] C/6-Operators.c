#include <stdio.h>

// 6. Operators & Keywords

// 6.1 C operators
// https://learn.microsoft.com/en-us/cpp/c-language/c-operators?view=msvc-170

// 1) Additive operators (算数操作符)
// + -

// 2) Multiplicative operators ((算数操作符)
// * / %

// Example
// - - - - - - - - - -
//int main(void)
//{
//    float a = 7/2.0;  // 除号两端为整数时, 执行整数除法, 两端只要有一个浮点数才执行浮点数除法
//    printf("%.2f\n", a);  // 3.50
//
//    int b = 7%2;  // 取模 (两端只能为整数)
//    printf("%d\n", b);  // 1 (余数)
//
//    return 0;
//}
// - - - - - - - - - -

// 3) Shift operators 移位操作符 (涉及二进制运算)
// >> 左移操作符
// << 右移操作符

// 4) Bitwise operators 位操作符
// &
// ^
// |

// 5) Assignment operators 赋值运算符
// https://learn.microsoft.com/zh-cn/cpp/cpp/assignment-operators?view=msvc-170

// Example
// - - - - - - - - - -
//int main(void)
//{
//    int a = 0;  // 初始化
//    a = 10;  // 赋值
//    a += 3;  // a = a + 3
//    a -= 3;  // a = a - 3
//    a *= 3;  // a = a * 3
//    a /= 3;  // a = a / 3
//    return 0;
//}
// - - - - - - - - - -

// 6) Unary operators 单目操作符 (只有一个操作数的操作符)

// 6)1) Negation and complement operators
// - 负值
// ~ 对一个数二进制按位去反
// ! 逻辑反操作

// Example
// - - - - - - - - - -
//int main(void)
//{
//    // 0 为 False
//    // non-zero 为 True
//
//    // int a = 1;  // will not print
//    int a = 0;  // will print
//    if (!a)
//    {
//        printf("Printed\n");
//    }
//    return 0;
//}
// - - - - - - - - - -

// 6)2) Indirection and address-of operators
// * 间接访问操作符
// & 取地址

// 6)3) Alignment operator (since C11)
// _Alignof

// 6)4) Size operator
// sizeof 操作数类型长度(以字节为单位)

// Example
// - - - - - - - - - -
//int main(void)
//{
//    int a = 10;
//    int b = 20;
//
//    printf("%lu\n", sizeof(a));  // 4 (unsigned long, %lu)
//    printf("%lu\n", sizeof(int));  // 4
//    printf("%lu\n", sizeof a);  // 4
//    // printf("%d\n", sizeof int);  // error
//
//    int arr[10] = { 0 };  // 整型数组不包括 \0
//    printf("%lu\n", sizeof(arr));  // 40 (计算整个数组的大小)
//    printf("%lu\n", sizeof(arr[0]));  // 4
//    printf("%lu\n", sizeof(arr) / sizeof(arr[0]));  // 10 (数组元素数量
//
//    return 0;
//}
// - - - - - - - - - -

// 6)5) Unary plus operator
// + 正值

// 6)6) Unary increment and decrement operators
// ++ 前置/后置 ++
// -- 前置/后置 --

// Example
// - - - - - - - - - -
//int main(void)
//{
//    int a = 10;
//    int b = a++;  // 后置 ++ (先使用 (int b = a), 后++ (a = a + 1))
//    printf("%d\n", a);  // 11
//    printf("%d\n", b);  // 10
//
//    int c = 10;
//    int d = ++c;  // 前置 ++ (先++后使用)
//    printf("%d\n", c);  // 11
//    printf("%d\n", d);  // 11
//
//    return 0;
//}
// - - - - - - - - - -

// 6)7)
// (type) 强制类型转换

// Example
// - - - - - - - - - -
//int main(void)
//{
//    int a = (int)3.14;  // IDE 默认为 double 类型, (int) 强制转换为整型类型
//    printf("%d\n", a);  // 3
//    return 0;
//}
// - - - - - - - - - -

// 7) Relational operators 关系操作符
// <
// >
// <=
// >=
// == 相等
// != 不相等

// Example
// - - - - - - - - - -
//int main(void)
//{
//    int a = 10;
//    if (a == 3)  // will not print
//    {
//        printf("Printed_2\n");
//    }
//    if (a = 3)  // will print, due to a = 3 is non-zero (True)
//    {
//        printf("Printed_1\n");
//    }
//    return 0;
//}

// 如果把 if (a = 3) 放在前面, a 会被赋值 (a = 3)
// - - - - - - - - - -

// 8) Logical operators 逻辑操作符
// && 逻辑与 (并且)
// || 逻辑或 (或者)

// 9) Conditional-Expression Operators 条件表达式运算符 (三目操作符)
// 9)1)
// exp1 ? exp2 : exp3

// Example
// - - - - - - - - - -
//int main(void)
//{
//    int a = 10;
//    int b = 20;
//
//    int r = (a > b ? a : b);
//    printf("%d\n", r);
//    return 0;
//}

// if exp1 is True, output exp2, vice versa (exp1 is False, output exp3)
// - - - - - - - - - -

// 9)2) 逗号表达式 (被逗号隔开的一串表达式)
// 从左向右依次计算, 整个表达式的结果是做后一个表达式的结果
// exp1, exp2, exp3, ..., expn

// Example
// - - - - - - - - - -
//int main(void)
//{
//    int a = 10;
//    int b = 20;
//    int c = 0;
//    int d = (c = a - 2, a = b + c, c - 3);
//    // int d = (c = 8, a = 28, c = 5)
//    printf("%d\n", d);  // 5
//    return 0;
//}
// - - - - - - - - - -

// 10) Others
// 10)1) [] 下标引用 (访问数组元素)

// Example
// - - - - - - - - - -
//int main(void)
//{
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    arr[3] = 0;  // arr 和 3 是 [] 的操作数
//    return 0;
//}
// - - - - - - - - - -

// 10)2) () 函数调用 ()

// Example
// - - - - - - - - - -
//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int main(void)
//{
//    int sum = Add(2, 3);  // Add, 2 和 3 都是 () 的操作数
//    return 0;
//}
// - - - - - - - - - -

// 10)3) 结构成员操作符
// .
// ->

// 6.2 C key words (general key words)

// 1)
// auto

// Example
// - - - - - - - - - -
//int main(void)
//{
//    int a = 0;  // auto int a = 0; (所有局部变量前都有一个 auto (可省略))
//    return 0;
//}
// - - - - - - - - - -

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
