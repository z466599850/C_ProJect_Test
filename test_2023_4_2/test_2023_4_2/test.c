#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

#include <stdio.h>

/*
    kiki想获得 某年某月有多少天 计算这一年这个月有多少天
*/
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        switch (b)
        {
            // 1 3 5 7 8 10 12 都是固定的 31
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
            // 4 6 9 11 都是固定的 30
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
        case 2://2月 平年28天 闰年 29天
            if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
            {
                printf("29\n");
            }
            else {
                printf("28\n");
            }
            break;
        }
    }
    return 0;
}
/*int main() {
    float a = 0;
    float b = 0;
    float c = 0;
    while (scanf("%f %f %f", &a, &b, &c) != EOF) {
        if (a == 0) {
            printf("Not quadratic equation\n");
        }
        else {
            float t = b * b - 4 * a * c;
            if (t == 0) {
                //两个实根相等
                float mp = -b + sqrt(t);
                if (mp == 0) {
                    printf("x1=x2=%.2f\n", mp);
                }
                else {
                    printf("x1=x2=%.2f\n", (-b + sqrt(t)) / 2.0 / a);
                }
            }
            else if (t > 0) {
                //两个实根不等
                printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(t)) / 2.0 / a, (-b + sqrt(t)) / 2.0 / a);
            }
            else {
                //虚根
                float xu = sqrt(-t) / 2.0 / a;
                if (xu < 0) {
                    //如果是负数，取反作为绝对值,abs取绝对值会丢失精度
                    xu = -xu;
                }
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / 2 / a, xu, -b / 2 / a, xu);
            }
        }
    }
    return 0;
}*/

