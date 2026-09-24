#include<stdio.h>
// 这是一个温度转换器，可以将摄氏温度转化为华氏温度

int main() {
    float celsius;
    printf("请输入摄氏温度：");
    scanf("%f", &celsius);
    
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("摄氏温度 %.2f 转换为华氏温度为：%.2f\n", celsius, fahrenheit);
    // 如果在 写成 (9 / 5) * celsius + 32，那么 9 / 5 因为是整数除法，会变成 1，结果就会错成 1 * 36.5 + 32 = 68.5
    // 所以要写成 (celsius * 9 / 5) + 32，先将 celsius 转换为浮点数，再进行运算，结果才会正确
    return 0;
}