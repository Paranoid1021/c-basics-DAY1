#include <stdio.h>

int main() {
    char a;
    int b = 10;
    printf("请输入一个字母\n");
    scanf(" %c", &a); // 加空格跳过空白字符
    printf("%c\n%d\n", a, b);
    return 0;
}