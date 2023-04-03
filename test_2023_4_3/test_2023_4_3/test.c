#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d ", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}
/*
    ISBN码包括9位数字 1位识别码和3位分隔符
    格式是 x-xxx-xxxxx-x     1-3-5-1
    其中符号 '-' 是分隔符 最后一位是识别码 例如 0-670-82162-4 就说一个标准的ISBN码

    ISBN的首位数字表示书记的出版语言，
    例如 0 代表 英语;

    第一个分隔符'-'之后的三位数字代表出版社
    例如670代表维京出版社

    第二个分隔之后的五位数字代表该书在出版社的编号;

    最后一位为识别码

计算方法:>
    首位数字乘以1 加上次位数字乘以2    以此类推，所得的结果 mod 11
    所得的余数即为识别码，如果余数为 10 则识别码为大写字母X
        例如ISBN号码 0-670-82162-4 中的识别码 4 是这样得到的：对
        06782162 这9个数字，从左至右，分别乘以1，2，...,9再求和，
        即 0 * 1 + 6 * 2 + ... + 2 * 9 = 158

*/
/*#include<stdio.h>
int main()
{
    char arr[13];
    int i, j;
    scanf("%s", arr);
    int s = 0;
    for (i = 0, j = 1; i < 11; i++)
    {
        if (arr[i] != '-')
        {
            s += (arr[i] - '0') * j;
            j++;
        }
    }
    int m = s % 11;
    if (m == arr[12] - '0' || (m == 10 && arr[12] == 'X'))
    {
        printf("Right\n");
    }
    else
    {
        if (m == 10)
        {
            for (i = 0; i < 12; i++)
            {
                printf("%c", arr[i]);
            }
            printf("X");
        }
        else {
            for (i = 0; i < 12; i++)
            {
                printf("%c", arr[i]);
            }
            printf("%d", m);
        }
    }
}*/


