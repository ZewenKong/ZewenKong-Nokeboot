#include <stdio.h>

// 4. Loop statement

// 4.1 while loop

// https://learn.microsoft.com/en-us/cpp/c-language/while-statement-c?view=msvc-170

// - - - - - - - - - - Example 1 - - - - - - - - - -

// Print 1 to 10

// int main(void)
// {
//     int num = 0;
//     while (num <= 10)
//     {
//         printf("%d\n", num);
//         num++;
//     }
//     return 0;
// }

// - - - - - - - - - - Example 2 - - - - - - - - - -

// int main(void)
// {
//     int num = 0;
//     while (num <= 10)
//     {
//         if (5 == num)
//             break; // 当 while 循环内遇到 break, 直接终止整个循环

//         printf("%d ", num); // 1 2 3 4
//         num++;
//     }
//     return 0;
// }

// - - - - - - - - - - Example 3 - - - - - - - - - -

// int main(void)
// {
//     int num = 0;
//     while (num <= 10)
//     {
//         if (5 == num)
//             continue;

//         // continue 跳过本次循环 (continue 之后的代码), 直接去判断部分 (while 循环开头) 来判断要不要进行下一次循环
//         // continue 直接跳过 continue 后续的代码, 重新执行 while 循环
//         // -> 死循环

//         printf("%d ", num); // 0 1 2 3 4
//         num++;
//     }
//     return 0;
// }

// while 循环中的
// break 用于永久的终止循环 (当有 break 出现是, 循环终止)
// continue 跳过本次循环 continue 之后的代码, 直接去判断部分进行下一次循环的判断

// - - - - - - - - - - Example 4 - - - - - - - - - -

// P30, half

// int main(void)
// {
//     // getchar() 能够获取一个字符, getchar() 函数的返回值类型为 int
//     // 因为当 getchar() 报错时会返回 EOF (-1), char 类型只有一个字节, 无法包含 -1, 所以 getchar() 函数的返回值类型为 int
//     // getchar() 函数从输入缓冲区来获取数据 (输入缓冲区从键盘获取)
//     // 当将输入字符输入到缓冲区时, 会同时输入一个 \n 在末尾

//     int ch = getchar();

//     putchar(ch); // 与 (printf("%c", ch)) 相同, 打印字符
//     return 0;
// }

// - - - - - - - - - - Example 5 - - - - - - - - - -

// int main(void)
// {
//     // 清理数据缓冲区
//     int ch = 0;
//     while ((ch = getchar()) != EOF)
//     {
//         // putchar(ch);  // 输入 control + D 输入 EOF 来终止
//     }

//     // Example (Password confirm)
//     char password[20] = {};
//     printf("Password: ");
//     scanf("%s", password);

//     // getchar() 清理缓冲区, 防止打印出错
//     int ch = 0;
//     while ((ch = getchar()) != '\n')
//     {
//         ;
//     }

//     printf("Confirm your password (Y/N): ");
//     int confirm = getchar();
//     if ('Y' == confirm)
//         printf("Yes\n");
//     else
//         printf("No\n");

//     return 0;
// }

// - - - - - - - - - - Example 6 - - - - - - - - - -

// 只打印数字字符

// int main(void)
// {
//     char ch = '\0';
//     while ((ch = getchar()) != EOF)
//     {
//         if (ch < '0' || ch > '9')
//             continue;
//         putchar(ch);
//     }
//     return 0;
// }
