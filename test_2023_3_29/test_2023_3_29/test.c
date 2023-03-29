#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

#include <stdio.h>

int main()
{
    int arr[4] = { 0 };
    int i = 0;
    int max = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}

/*int main()
{
    float height, weight,BMI;
    scanf("%f%f", &weight, &height);

    BMI = weight / (pow(height,2));

    if (BMI >= 18.5 && BMI <= 23.9)
    {
        printf("Normal\n");
    }
    else {
        printf("Abnormal\n");
    }
    return 0;
}*/

/*
    五个字母 a e i o u 大小写 均为 元音
    其他字母称为辅音
    判断输入的字母是元音还是辅音

*/
/*int main()
{
    int i = 0;
    char c;
    char a[10] = { 'A','a','E','e','I','i','O','o','U','u' };
    while (scanf("%c", &c) != EOF)
    {
        if (c != '\n')
        {
            for (i = 0; i < 10; i++)
            {
                if (c == a[i])
                {
                    printf("Vowel\n");
                    i = 11;
                }
            }
            if (i == 10)
            {
                printf("Consonant\n");
            }
        }

    }

    return 0;
}*/
/*
    键盘上输入一个整数 表示分数
    编程判断 分数 是否在几个范围内
    如果及格，分数大于60
    输出Pass
    否则
    输出Fail
    及格分数
    0 ~ 100
*/
/*int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 60)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    int b;
    scanf("%d", &b);
    if (b >= 60)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail");
    }



    return 0;
}*/