#include <stdio.h>

// 10. struct 结构体

// struct 结构体为一种自定义类型
// 关键字 (keywords) 位 struct
// 结构体把数个单一类型组合在一起

// Example
// - - - - - - - - - -
//struct student  // (描述) 学生
//{
//    // 结构体的成员 (变量)
//    char name[20];
//    int age;
//    char gender[10];
//    char contactNum[12];
//};
//
//void Print(struct student* ss)  // 获取并存入指针变量 ss
//{
//    // 打印指针变量 ss
//
//    // Method 1
//    printf("%s %d %s %s\n", (*ss).name, (*ss).age, (*ss).gender, (*ss).contactNum);
//
//    // Method 2
//    printf("%s %d %s %s\n", ss -> name, ss -> age, ss -> gender, ss -> contactNum);
//    // ss -> name - (ss 所指向的对象的成员 name)
//    // -> 操作符 - (结构体指针变量 -> 成员名)
//};
//
//int main(void)
//{
//    struct student s = {"Zewen", 22, "male", "12138"};  // 初始化
//    printf("%s %d %s %s\n", s.name, s.age, s.gender, s.contactNum);  // . 操作符 - (结构体对象.成员名)
//
//    // 通过指针打印变量
//    Print(&s);  // 获取 s 的地址
//
//    return 0;
//}
// - - - - - - - - - -
