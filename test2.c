#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;
    float c = 10.5;
    double d = 20.12345;
    char e = 'A';

    printf("整数 a + 整数 b = %d\n", a + b);
    printf("整数 a + 浮点数 c = %f\n", a + c);
    printf("整数 a + 双精度数 d = %lf\n", a + d);
    printf("整数 a + 字符 e = %d\n", a + e);

    printf("浮点数 c + 双精度数 d = %lf\n", c + d);
    printf("浮点数 c + 字符 e = %f\n", c + e);

    printf("整数 a - 整数 b = %d\n", a - b);
    printf("整数 a - 浮点数 c = %f\n", a - c);
    printf("整数 a - 双精度数 d = %lf\n", a - d);
    printf("整数 a - 字符 e = %d\n", a - e);

    printf("浮点数 c - 双精度数 d = %lf\n", c - d);
    printf("浮点数 c - 字符 e = %f\n", c - e);

    printf("整数 a * 整数 b = %d\n", a * b);
    printf("整数 a * 浮点数 c = %f\n", a * c);
    printf("整数 a * 双精度数 d = %lf\n", a * d);
    printf("整数 a * 字符 e = %d\n", a * e);

    printf("浮点数 c * 双精度数 d = %lf\n", c * d);
    printf("浮点数 c * 字符 e = %f\n", c * e);

    printf("整数 a / 整数 b = %d\n", a / b);
    printf("整数 a / 浮点数 c = %f\n", a / c);
    printf("整数 a / 双精度数 d = %lf\n", a / d);
    printf("整数 a / 字符 e = %d\n", a / e);

    printf("浮点数 c / 双精度数 d = %lf\n", c / d);
    printf("浮点数 c / 字符 e = %f\n", c / e);

    printf("整数 a %% 整数 b = %d\n", a % b);
    printf("整数 a %% 字符 e = %d\n", a % e);
    //取余数只能用于整数

    return 0;
}