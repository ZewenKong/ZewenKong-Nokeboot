#include <stdio.h>

// 8. #define 定义常量和宏

// Example
// - - - - - - - - - -
// #define 定义标识常量
#define NUM 100

// #define 定义宏
// 宏是完成替换的 (将 a 和 b 与 x 和 y 替换)
#define Add(x, y) ((x) + (y))
// Add - 宏名称
// x, y - 宏参数 - 参数是无类型的
// (x) + (y) - 宏体

int main(void)
{
    // #define 定义标识常量 Example
    printf("%d\n", NUM);
    
    int n = NUM;
    printf("%d\n", n);
    
    int arr[NUM] = { 0 };
    
    // #define 定义宏 Example
    
    // Similar to a function
    // int Add(int x, int y)
    // {
        // return x + y;
    // }
    
    int a = 10;
    int b = 10;
    int sum = Add(a, b);
    printf("%d\n", sum);
    
    return 0;
}
// - - - - - - - - - -
