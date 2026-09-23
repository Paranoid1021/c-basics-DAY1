#include <stdio.h>

int main() {
    char name[100];//字符数组，100个字节足够存30多个汉字

    printf("请输入你的中文名：\n");
    // scanf(" %s", name); 
    // 数组名 name 本身代表地址，scanf 里无需添加取地址符 &

    // 更安全的写法：使用 fgets 
    // （用 fgets() 代替 scanf("%s")，因为 scanf 遇到空格就会停止读取，而 fgets 可以读取一整行（包括空格））
    fgets(name, sizeof(name), stdin);
    // 但是 fgets 会读进换行，只能读完后用 name[strcspn(name, "\n")] = '\0'; 把换行符替换成字符串结束符删掉

    printf("你的中文名是：%s\n", name);

    return 0;
}