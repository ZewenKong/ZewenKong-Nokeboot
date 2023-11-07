#include <stdio.h>

// 3. Jump statement (switch) - 分支语句

// https://learn.microsoft.com/en-us/cpp/c-language/switch-statement-c?view=msvc-170

// switch statement 通过 case 后的表达式的值来决定进入哪个 case 语句
// 通过 break 来停止终止

// - - - - - - - - - -  Example 6 - - - - - - - - - -

// int main(void)
// {
//     int day = 0;
//     scanf("%d\n", &day);

//     switch (day) // switch statement 一定要跟大括号 {}, 表达式 expression 必须包含整型
//     {
//     case 1: // case 决定了入口, case 后跟随整型常量表达式
//         printf("Day 1\n");
//         break;
//     case 2:
//         printf("Day 2\n");
//         break; // 如果不添加 break, 当输入 2 时, 会同时打印 case 2 和 case 3
//     case 3:
//         printf("Day 3\n");
//         break;
//     }

//     return 0;
// }

// - - - - - - - - - - Example 7 - - - - - - - - - -

// 输入 1 - 5 打印 weekday, 输入 6 - 7 打印 weekend)

// int main(void)
// {
//     int day = 0;
//     scanf("%d", &day);

//     switch (day)
//     {
//     // 实现多个 case 匹配同一执行语句
//     case 1:
//     case 2:
//     case 3:
//     case 4:
//     case 5:
//     case 'a': // case 之后可以使用字符, 将字符通过 ASCII 来转化为数字 (a 97) 来进行匹配
//         printf("Weekday\n");
//         break;
//     case 6:
//     case 7:
//         printf("Weekend\n");
//         break;
//     default: // 执行 default 的执行语句, 当所有 case 都不匹配时
//         printf("😅\n");
//         break;
//     }

//     return 0;
// }

// - - - - - - - - - -  Example 8 - - - - - - - - - -

// int main(void)
// {
//     int m = 2;
//     int n = 1;

//     switch (n)
//     {
//     case 1:
//         m++;
//     case 2:
//         n++;
//     case 3:
//         switch (n) // switch 内可以再次嵌套 switch
//         {
//         case 1:
//             n++;
//         case 2:
//             m++;
//             n++;
//             break;
//         }
//     case 4:
//         m++;
//         break; // break 只能跳出自身所在的 case 语句
//     default:
//         break;
//     }

//     printf("m = %d, n = %d\n", m, n); // m = 5, n = 3
//     return 0;
// }