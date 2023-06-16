#include <stdio.h>

// 9. Pointer

// 9.1 Pointer vaiable

// 内存会被划分为单元(byte), 每个内存单元都拥有一个编号

// Example
// - - - - - - - - - -
//int main(void)
//{
//    int a = 10;
//    // 向内存申请 4 个字节, 存储 10 (int take up 4 bits)
//    // a 的地址为申请的 4 个字节地址的第一个地址
//    // &a;  // 取 a 的地址 (& 取地址操作符)
//
//    // %p 以地址格式打印数据
//    // printf("%p\n", &a);
//
//    // 将 a 的地址存储 (int*)
//    int* p = &a;
//    // 变量 p 就为指针变量
//    // p 的类型为 int*
//    // int - (说明) p 指向的对象 (a) 是 int 类型
//    // * - (说明) p 是指针变量
//
//    // * 解引用操作符(通过 p 中存放的地址找到 p 所指向的对象)
//    // * 为单目操作符
//    // *p 就是 p 所指向的对象
//    *p = 20;
//    // a = 20
//
//    printf("%d\n", a);
//
//    return 0;
//}
// - - - - - - - - - -

// 内存单元拥有编号 -> (被称为) 地址 -> (也被称为) 指针
// 存放地址 (指针) 的变量就被称为指针变量

// 9.2 Pointer variable's value

// Example
// - - - - - - - - - -
//int main(void)
//{
//    // int* v;
//    printf("%zu\n", sizeof(int*));  // 8
//
//    // char* v2;
//    printf("%zu\n", sizeof(char*));  // 8
//
//    printf("%zu\n", sizeof(short*));  // 8
//    printf("%zu\n", sizeof(long*));  // 8
//    printf("%zu\n", sizeof(float*));  // 8
//
//    return 0;
//}
// - - - - - - - - - -

// 不管是什么类型的指针, 都是在创建指针变量
// 指针变量是用来存放地址的
// 指针变量的大小取决于一个地址存放所需要的空间
// x64 - 64 位 - 64 bit - 8 byte (地址存放所需要的空间) - 指针变量的大小
// x32 - 32 位 - 32 bit - 4 byte - 指针变量的大小

