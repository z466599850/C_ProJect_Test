#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
    char c[] = "ABCDEF";
    printf("%d", c);
    return 0;
}

/*int main()
{
    int year, month, date;
    scanf("%4d%2d%2d", &year, &month, &date);
    
        通过scanf函数的%m格式控制可以指定输入域宽，输入数据域宽（列数），按此宽度截取所需数据；通
        过printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。

    

    printf("year=%d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", date);

    return 0;
}*/

/*
    先说一下我用的是c语言
        因为题目要求输入一串数字，为了存放数字我需要建立变量，打印的时候这数字打印到三个地方，所以我建三个变量
        这里备注：通过scanf函数的% m格式控制可以指定输入域宽，输入数据域宽（列数），按此宽度截取所需数据。

    scanf("%4d%2d%2d", &i, &j, &c);
    第一个四个数字，第二 三都是两个数字，所以是 % 4和 % 2 % 2

    输入完成我把他们放到i j c的地址
    现在可能你觉得直接打印就完了，其实不是
    打印的时候你会发现如果他输入的是20130225
    你前面打印2013的时候没问题
    但打印02的时候它会自己把前面那个0省去，就打印2，这显然不满足题意。
    于是后面又说通过printf函数的 % 0格式控制符，输出数值时指定左面不使用的空位置自动填0。
    这时你就应该意识到你需要这打印的时候做点什么
    printf("month=%02d\n", j);
    我在% d中加了一个02来打印这个0，你可能会想为什么是02，一个0就01嘛，不是这样的，你打01会跟没有加一样。
    我代码写完后：
*/
/*#include<stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    int c = 0;
    scanf("%4d%2d%2d", &i, &j, &c);
    printf("year=%d\n", i);
    printf("month=%02d\n", j);
    printf("date=%02d", c);
    return 0;
}*/


/*int main()
{
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    printf("The each subject score of NO.%.f is %.2f, %.2f, %.2f", a, b, c, d);
    return 0;
}*/