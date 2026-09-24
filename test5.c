#include<stdio.h>
// 这是一个温度转换器，可以将摄氏温度转化为华氏温度

int main() {
    float celsius;
    printf("请输入摄氏温度：");
    scanf("%f", &celsius);
    
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("摄氏温度 %.2f 转换为华氏温度为：%.2f\n", celsius, fahrenheit);

    return 0;
}