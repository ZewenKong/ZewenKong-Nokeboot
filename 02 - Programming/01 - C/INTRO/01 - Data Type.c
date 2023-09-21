// 0. Hello World

// 引向头文件, 包含一个名为 stdio.h 的头文件
// stdio => standard input output

#include <stdio.h>

// main() 主函数, 程序的入口, main函数有且仅有一个
// int 整型
// main 前面的 int 表示 main 函数调用之后返回一个整型值

// Example
// - - - - - - - - - -
//int main(void)
//{
//    printf("Hello, World!\n");
//    return 0;  // 返回 0
//}
// - - - - - - - - - -

// 1. Data type

// 1.1 Data types in C
// 1) char 字符 (%c)
// 2) int 整型 (%d)
// 3) short 短整型
// 4) long 长整型
// 5) long long 长长整型
// 6) float 单精度浮点数 (%f)
// 7) double 双精度浮点数 (%lf)

// Example
// - - - - - - - - - -
//int main(void)
//{
//    // char
//    char character = 'A';  // 向内存申请一个名为 character 的空间储存 A
//    printf("%c\n", character);  // %c 打印字符格式的数据
//
//    // int
//    int age = 22;
//    printf("%d\n", age);
//
//    // long
//    long num = 100;
//    printf("%d\n", num);  // Format specifies type 'int' but the argument has type 'long'
//
//    // float
//    float f = 3.47;
//    printf("%f\n", f);
//
//    // double
//    double d = 4.43;
//    printf("%lf\n", d);
//
//    return 0;
//}
// - - - - - - - - - -

// 1.2 Print each type

// %d - 打印整型
// %c - 打印字符
// %s - 打印字符串
// %f - 打印 float 类型数据
// %lf - 打印 double 类型数据
// %zu - 打印 sizeof() 的返回值

// 1.3 Size of data types

// Example 1
// - - - - - - - - - -
//int main(void)
//{
//    printf("%lu\n", sizeof(char));  // 计算 char 类型所能申请的计算机空间, 1 个字节
//    printf("%lu\n", sizeof(int));  // 4
//    printf("%lu\n", sizeof(short));  // 2
//    printf("%lu\n", sizeof(long));  // 4 or 8 (C 语言标准规定: sizeof(long) >= sizeof(int))
//    printf("%lu\n", sizeof(long long));  // 8
//    printf("%lu\n", sizeof(float));  // 4
//    printf("%lu\n", sizeof(double));  // 8
//    return 0;
//}
// - - - - - - - - - -

// 用适当的 data type 来节省空间 (e.g. 用 short 来表达年龄)
// C 语言标准规定: sizeof(long) >= sizeof(int)

// Example 2
// - - - - - - - - - -
//int main(void)
//{
//    short age = 20;  // 向内存申请 2 bytes (16 bits) 用来存放 20
//    float weight = 79.4f;  // 向内存申请 4 bytes (f => float), 如果不加 f 系统会认为是 double 类型
//    return 0;
//}
// - - - - - - - - - -

// NO DATE RECORD