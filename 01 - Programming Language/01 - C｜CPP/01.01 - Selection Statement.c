#include <stdio.h>

// 1. C statements

// https://learn.microsoft.com/en-us/cpp/c-language/overview-of-c-statements?view=msvc-170

// 2. Selection statements (if) - 分支语句

// - - - - - - - - - - Example 1 - - - - - - - - - -

// int main(void)
// {
//     int age = 0;

//     scanf("%d", &age);

//     // if statment followed by single statement
//     if (age < 18) // if expresion in () is true -> execute
//         printf("Young man\n");
//     else
//         printf("Old man\n");

//     // if statment followed by multiple statements
//     if (age < 18)
//     {
//         printf("Young man\n");
//         printf("Cannot drink!\n");
//     }
//     else
//     {
//         printf("Old man\n");
//         printf("Can drink\n");
//     }

//     // Multi branches

//     int age = 16;

//     if (age < 18)
//         printf("Young man\n");
//     else if (age >= 18 && age < 28) // Cannot write as 18 <= age < 28, it will be like (0 (18 <= 16, false) < 28)
//         printf("Not Young but not old\n");

//     //    else
//     //        printf("Old man\n");
//     //        printf("Old Old");  // if this not use {}, it will always be printed

//     else
//     {
//         printf("Old man\n");
//         printf("Old Old");
//     }

//     return 0;
// }

// { } Code Block 代码块
// else 与离最近的 if 匹配 (注意格式)

// - - - - - - - - - - Example 2 - - - - - - - - - -

// test() 条件满足 return 1, 不满足 return 0

// int test(void)
// {
//     int i = 1;
//     if (i == 1)
//     {
//         return 1;
//     }
//     return 0; // Hard to read
// }

// int main(void)
// {
//     int ii = test();
//     printf("%d\n", ii);
//     return 0;
// }

// - - - - - - - - - - Example 3 - - - - - - - - - -

// int main(void)
// {
//     int num = 1;
//     if (0 == num)
//         // (num == 0) = (0 == num)
//         // 写成这种格式防止当少打一个 = 时, IDE 不报错
//         printf("Printed");

//     return 0;
// }

// - - - - - - - - - - Example 4 - - - - - - - - - -

// 判断奇数

// int main(void)
// {
//     int num = 0;
//     scanf("%d", &num);
//     if (num % 2 == 0) // num%2 为表达式, 无法赋值
//         printf("Even number\n");
//     else
//         printf("Odd number\n");

//     return 0;
// }

// - - - - - - - - - - Example 5 - - - - - - - - - -

// Print all odd number between 1 and 100

// int main(void)
// {
//     // Method 1
//     int i = 1;
//     while (i < 100)
//     {
//         if (i % 2 != 0)
//             printf("%d ", i);
//         i++;
//     }

//     // Method 2
//     int i = 1;
//     while (i < 100)
//     {
//         printf("%d ", i);
//         i += 2;
//     }

//     return 0;
// }