#include <stdio.h>

int main() {
    char a;
    int b = 10;

    printf("请输入一个字母\n");
    scanf(" %c", &a); // 加空格跳过空白字符

    printf("你输入的字符是：%c\n", a);
    printf("变量 b 的值是：%d\n", b);
    
    return 0;
}