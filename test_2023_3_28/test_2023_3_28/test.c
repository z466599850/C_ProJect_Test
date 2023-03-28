#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

/*
描述

    问题：KiKi今年5岁了，已经能够认识100以内的非负整数，并且并且能够
    进行 100 以内的非负整数的加法计算。不过，BoBo老师发现KiKi在进行
    大于等于100的正整数的计算时，规则如下：

    1.只保留该数的最后两位，例如：对KiKi来说1234等价于34；

    2.如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，如果此两位中十位为0，则只保留个位。

例如：45 + 80 = 25

要求给定非负整数 a和 b，模拟KiKi的运算规则计算出 a + b 的值。


输入描述：
    一行，输入两个非负整数a和b，用一个空格分隔。
输出描述：
    针对每组输入，输出按照KiKi的运算规则计算出 a + b 的值。
示例1
    输入：45 80
    输出：25
*/

#include <stdio.h>


int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", (a + b) % 100);
    return 0;

}



/*int main()
{
    float a = 2.6;
    float b = 2.8;
    float sum = pow(a, 2) + pow(b, 2);
    float num = sqrt(sum);
    printf("%f", num);
    return 0;
}*/


/*
* 
描述
	KiKi这学期努力学习程序设计基础，要期末考试了，BoBo老师告诉他，总成绩包括四个部分，如下：
	总成绩 = 实验成绩 * 20% + 课堂表现成绩 * 10% + 过程考核成绩 * 20% + 期末上机考试成绩 * 50%，现在输入KiKi的各项成绩，请计算KiKi的总成绩。

输入描述：
	一行，包括四个整数（百分制），用空格分隔，分别表示实验成绩，课堂表现成绩，过程考核成绩，期末上机考试成绩。

*/


/*

sum = test * 20% + class * 10% + course * 20% + term * 50%

一行 包括四个整数(百分制)

*/


/*int main()
{
    int test, class, course, term;
    scanf("%d%d%d%d", &test, &class, &course, &term);

    printf("%.1f", ((float)test * 0.2 + class * 0.1 + course * 0.2 + term * 0.5));
    return 0;
}*/
