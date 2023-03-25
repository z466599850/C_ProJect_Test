#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{

    return 0;
}
/*
牛牛口渴了，要喝10升水才能解渴，但现在只有一个深 h 厘米，底面半径是
r 厘米的水杯，牛牛最少要喝多少杯水才能解渴。
*/
/*#include <stdio.h>

int main()
{
    int h, r;
    scanf("%d%d", &h, &r);
    double n = 3.14;
    float num = n * h * r * r;
    int c = 10000;
    int d = 0;
    while (c > 0)
    {
        c -= num;
        d++;
    }
    printf("%d", d);

    return 0;
}*/
/*
    题解 | #牛牛的水杯

    难点：1.C语言中，%两端均需为整数，10000%v无法满足，可以将v进行强制转换为int型，即10000%（int）v
          2.bool类型的使用，为真值（非0）则返回1，为假则返回0，这个可以很好的解决当杯数不是整数的时候的问题
*/

/*#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
    int h, r;
    double n, v, a;
    scanf("%d %d", &h, &r);
    v = 3.14 * h * r * r;
    n = 10000 / v;
    bool s = 10000 % (int)v;//需要引头文件<stdbool.h>; 类似于java中的boolean类型
    printf("%d", ((int)n) + s);
    return 0;

}*/

/*
    BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。
    KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过
    m分钟后还有多少盒未打开的酸奶？

*/
/*#include <stdio.h>
int main()
{
    int n, h, m;
    scanf("%d%d%d", &n, &h, &m);
    int count = 0;
    while (m > 0)
    {
        m = m - h;
        count++;
    }
    printf("%d", n - count);
    return 0;
}*/

/*C语言在中<math.h>中sqrt（）函数的使用：

功 能 : 计算一个非负实数的平方根
函数原型 : 在VC6.0中的math.h头文件的函数原型为double sqrt(double);
说明：sqrt系Square Root Calculations（平方根计算），通过这种运算可以考验CPU的浮点能力。
头文件：math

特别注意！！！
sqrt使用时大多需要要强制类型转化，因为sqrt只支持double和float类型，
可以这样
c = (int)sqrt((double)aa + bb); 或者c = (int)sqrt((float)aa + bb);
*/
/*#include <stdio.h>
#include <math.h>//添加数学函数库

int main()
{
    double a = 9.0;

    printf("%lf\n", sqrt(a)); //3.000000

    printf("%.8lf\n", 1 + 2 * sqrt(3) / (5 - 0.1));//其中sqrt（）为计算平方根的函数

    return  0;
}*/

/*
    描述
    根据给出的三角形3条边a, b, c，计算三角形的周长和面积。

    数据范围：
    0
    <
    �
    ,
    �
    ,
    �
    ≤
    100000

    0<a,b,c≤100000
    输入描述：
    一行，三角形3条边（能构成三角形），中间用一个空格隔开。
    输出描述：
    一行，三角形周长和面积（保留两位小数），中间用一个空格隔开，输出具体格式详见输出样例。

*/

/*#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    float d, e, p;
    d = a + b + c;
    p = d / 2;
    e = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2f area=%.2f", d, e);//sqrt开平
    return 0;
}*/

/*
描述
输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。

数据范围：
1
≤
�
≤
100

1≤n≤100  ， 成绩使用百分制且不可能出现负数
输入描述：
两行，

第1行，正整数n（1≤n≤100）

第2行，n科成绩（范围0.0~100.0），用空格分隔。
输出描述：
输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。
*/


/*int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n >= 1 && n <= 100)
    {
        int i = 0;
        double grade = 0;
        double tmp, max, min, mean = 0;
        min = 100.0;
        for (i = 0; i < n; i++)
        {
            scanf("%lf", &grade);
            tmp += grade;//平均分

            if (grade > max)
            {
                max = grade;
            }

            if (grade < min)
            {
                min = grade;
            }
        }
        printf("%.2lf %.2lf %.2lf", max, min, tmp / n);
    }
    else {
        printf("输入错误");
    }

    return 0;
}*/