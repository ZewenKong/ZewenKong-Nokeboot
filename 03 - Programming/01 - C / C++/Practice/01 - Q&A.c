#include <stdio.h>
#include <string.h>

// - - - - - - - - - -
// 0 - number 0
// '0' - character 0 - ASCII value is 48
// \0 - char - ASCII value is 0
// EOF - end of file
// - - - - - - - - - -

// - - - - - - - - - -
// int main(void)
//{
//    char arr_1[] = {'b', 'i', 't'};
//    printf("%d\n", strlen(arr_1));  // random value
//
//    char arr_2[6] = {'b', 'i', 't'};  // 不完全初始化
//    printf("%d\n", strlen(arr_2));  // 3
//
//    // 当不完全初始化时系统会默认剩余的部分初始化为 \0 or 0, 所以 arr_2 长度为 3
//    // ASCII value of 0 is 0
//    // ASCII value of \0 is 0
//
//    return 0;
//}
// - - - - - - - - - -

// - - - - - - - - - -
// int main(void)
//{
//    // 在 C99 标准前, 数组大小都是有常量或常量表达式来指定
//    int arr1[3] = {1, 2, 3};  // okay
//    int arr2[1+2] = {1, 2, 3};  // okay
//
//    // 在 C99 标准后, 支持变长数组, 允许通过变量来表达数组大小, 但是不能用来初始化
//    // int n = 10;
//    // int arr3[n];  // okay
//    // int arr3[n] = {1, 2, 3, 4, 5};  // error
//
//    return 0;
//}
// - - - - - - - - - -

// Compare two numbers
// - - - - - - - - - -
// int main(void)
//{
//    int n1 = 0;
//    int n2 = 0;
//
//    scanf("%d%d", &n1, &n2);
//    if (n1 > n2)
//    {
//        printf("%d\n", n1);
//    }
//    else if (n2 > n1)
//    {
//        printf("%d\n", n2);
//    }
//    else
//    {
//        printf("Equal");
//    }
//}
// - - - - - - - - - -

// Calculate y
// - - - - - - - - - -
// int xvalue(int xx)
//{
//    if (xx < 0)
//    {
//        return 1;
//    }
//    else if (xx == 0)
//    {
//        return 0;
//    }
//    else
//    {
//        return -1;
//    }
//}
//
//
// int main(void)
//{
//    int x = 0;
//    scanf("%d", &x);
//
//    int y = xvalue(x);
//    printf("%d\n", y);
//    return 0;
//}
// - - - - - - - - - -
