#include <stdio.h>
#include <string.h>

// 3. String & Escape character

// 3.1 String (C 语言不包含字符串类型)
// String literal 字符串字面值, 由双引号 (Double quote) 引起来的一串字符.

// Example
// - - - - - - - - - -
//int main(void)
//{
//    char ch = 'a';  // 将字符常量 a 存入字符变量 ch 内 (char 为字符类型)
//    "abcdefg";  // 字符串
//
//    // 存储字符串 (e.g. "abcdefg")
//
//    // Method 1
//    // [] 内可以指定数字也可以不指定
//    // 字符串的结束标志是一个 \0 的转义字符 (escape character)
//    // 字符串末尾都会隐藏一个 \0
//    char arr1[] = "abcdefg";  // 8 bits (the 8th is the \0)
//
//    // Method 2
//    char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
//
//    // print string (%s)
//    printf("%s\n", arr1);  // abcdefg
//    printf("%s\n", arr2);  // abcdefga
//
//    // Question - Why these two methods give different print output?
//
//    // Proof 1
//    // - - - - - - - - - -
//    // To solve this -> visulise the memory space
//    // Method 1 - ...|a|b|c|d|e|f|g|\0|...
//    // Method 2 - ...|a|b|c|d|e|f|g|...
//    // 计算机打印字符串会在遇到字符串结束的标志(\0)的时候才会停止打印
//    // 因此 Method 2 会一直打印直到在存储内遇到 \0
//    // char arr3[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', '\0'};
//    // printf("%s\n", arr3);  // abcdefg
//    // - - - - - - - - - -
//
//    // Proof 2
//    // - - - - - - - - - -
//    // 引用 strlen() 库函数
//    // strlen();  // string length 求字符串长度
//    // 库函数的使用得包含头文件
//    // strlen() 的头文件为 string.h
//
//    unsigned long length1 = strlen(arr1);
//    printf("%d\n", length1);  // 7 (遇到 \0 停止计数)
//
//    int length2 = strlen(arr2);
//    printf("%d\n", length2);  // 8
//    // - - - - - - - - - -
//
//    return 0;
//}
// - - - - - - - - - -

// 3.2 Escape character 转义字符

// Example (字符串结束标志 \0)
// - - - - - - - - - -
//int main(void)
//{
//    printf("%s\n", "abc0abc");  // abc0abc
//    printf("%s\n", "abc\0abc");  // abc (当遇到 \0 就停止打印)
//}
// - - - - - - - - - -

// 3.2.1 Escape characters in C
// https://en.wikipedia.org/wiki/Escape_sequences_in_C

// 1) \? (avoid trigraphs 三字母词)
// Trigraphs, in early IDE, it will transfer ??) to ] AND ??( --> [

// Example
// - - - - - - - - - -
//int main(void)
//{
//    printf("%s\n", "(are you alright??)");  // (In early IDE) (are you alright]
//    // To avoid trigraphs
//    printf("%s\n", "(are you alright\?\?)");  // (are you alright??)
//    return 0;
//}
// - - - - - - - - - -

// 2) \' (表示字符常量 ')

// Example
// - - - - - - - - - -
//int main(void)
//{
//    printf("%c\n", '\'');  // ' (只打印一个单引号)
//    return 0;
//}
// - - - - - - - - - -

// 3) \" (表示字符常量 ")

// Example
// - - - - - - - - - -
//int main(void)
//{
//    // 字符串的两种打印方式
//    printf("\"");
//    printf("%s\n", "\"");
//}
// - - - - - - - - - -

// 4) \\ (表示字符常量 \)
// Backslash
// 可以用于打印路径

// Example
// - - - - - - - - - -
//int main(void)
//{
//    printf("c:\desktop\text.c");
//    // c:desktop    ext.c
//    // \d --> unknown escape sequence, will be ignored
//    // \t (also an escape sequence) --> 表示 Horizental Tab
//    printf("\n");
//    printf("c:\\desktop\\text.c");  // c:\desktop\text.c
//    printf("\n");
//}
// - - - - - - - - - -

// 5) \a (Beep 电脑叫一下)

// 6）\b (Backspace)

// 7) \f (Formfeed Page Break)

// 8) \n (Newline 换行)

// Example
// - - - - - - - - - -
//int main(void)
//{
//    printf("%s\n", "abcn");  // abcn
//    printf("%s\n", "abc\n");  // abc
//}
// - - - - - - - - - -

// 9) \r (Carriage Return 回车)

// 10) \t (Horizental Tab 水平制表符)

// 11) \v (Vertical Tab 垂直制表符)

// 12) \ddd (ddd 表示 1-3 个八进制数字)
// 将斜杠(\)后的八进制数转化为十进制并且通过 ASCII 表打印出来

// Example (e.g., \130 --> X)
// - - - - - - - - - -
//int main(void)
//{
//    printf("%c\n", '\130');  // X
//    // \130 为一个字符
//    // 130(8) = 88(10) (八进制到十进制转化)
//    // X 的 ASCII 值为 88 (http://c.biancheng.net/c/ascii/)
//    // ASCII 范围 0 - 127
//    return 0;
//}
// - - - - - - - - - -

// 13) \xdd (dd 表示 2 个十六进制数字)
// 将斜杠(\)后的十六进制数转化为十进制并且通过 ASCII 表打印出来

// Example (e.g., \x30 --> 0)
// - - - - - - - - - -
//int main(void)
//{
//    printf("%c\n", '\x30');  // 0
//    // \x30 为一个字符
//    // 30(16) = 48(10) (十六进制到十进制转化)
//    // 48 的 ASCII 值为 0
//    return 0;
//}
// - - - - - - - - - -

// 3.3 Annotation 注释

/* C 语言注释风格 (不支持嵌套注释)
int main(void)
{
    return 0;
}
*/

// C++ 语言注释风格
//int main(void)
//{
//    return 0;
//}

// NO DATE RECORD