#include<stdio.h>

int main() {
    int a =5;
    char e = 'A';
    printf("整数 a + 字符 e = %d\n", a + e);
    // e 是 char 类型（在内存里占用1个字节），在进行运算时会被提升为 int 类型，'A' 的 ASCII 码值为 65，所以结果为 5 + 65 = 70
    printf("字符 e (整数)= %d\n", e);
    // 输出字符 e 对应的整数值，即 ASCII 码值 65

    char f = 127;
    printf("字符 f + 1 = %d\n", f + 1);
    printf("sizeof(f + 1) = %zu\n", sizeof(f + 1)); 
    // f 是 char 类型，值为 127，运算 f + 1 时，f 被提升为int（127），所以计算结果是 int 类型的 128
    // 这是表达式中的类型提升
    // sizeof(f + 1) 输出的是表达式 f + 1 的类型大小，即 int 类型的大小，通常为 4 个字节
    char result1 = f + 1;
    // 赋值时的类型截断
    int result2 = f + 1;
    printf("char(f + 1) = %d\n", result1);
    printf("int(f + 1) = %d\n", result2);
    //把结果 128 赋值回 char f 时，超过了 char 类型的最大值 (127)，所以会发生溢出，结果从 128 变为 -128
    //而把结果 128 赋值给 int 类型的 result2 时，结果仍然是 128，因为 int 类型可以表示更大的范围
    printf("sizeof(result1) = %zu\n", sizeof(result1));
    // 输出 result1 的类型大小，即 char 类型的大小，通常为 1 个字节

    return 0;
}