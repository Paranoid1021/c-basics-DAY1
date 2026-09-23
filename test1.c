#include <stdio.h>

int main() {
    char name[100];//字符数组，100个字节足够存30多个汉字

    printf("请输入你的中文名：\n");
    scanf(" %s", name); 
    // 数组名 name 本身代表地址，scanf 里无需添加取地址符 &

    printf("你的中文名是：%s\n", name);

    return 0;
}