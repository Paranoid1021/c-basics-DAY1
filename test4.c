#include<stdio.h>
#define PI 3.14159
// 宏定义，在编译阶段会将所有的 PI 替换为 3.14159

int main() {

    printf("这是一个圆的周长、面积计算器，请输入圆的半径：");
    float radius;
    scanf("%f", &radius);
    
    printf("圆的半径是：%8.3f\n", radius);

    float circumference = 2 * PI * radius;
    printf("圆的周长是：%8.3f\n", circumference);

    const float pi = 3.14;
    float area = pi * radius * radius;
    printf("圆的面积是：%8.3f\n", area);
    // pi = 3.14159; 错误，const 定义的变量是只读的，不能被修改
    // PI = 3.14; 错误，宏定义的值不能被修改

    // %8.3f 表示输出的浮点数总宽度为 8 位，其中小数部分占 3 位，如果整数部分不足 5 位，则在前面补空格
}