#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdio.h>
/*
C语言学习建议
学习基础知识：学习任何一门语言，都需要首先掌握其基础知识。对于C语言来说，要从变量、数据类型、运算符、控制语句、函数等方面入手，掌握语言的基本概念和语法规则。

刷题练习：通过练习编写各种不同难度的程序，可以加深对C语言的理解和记忆。可以选择一些编程练习网站或者在线教育平台，比如LeetCode、CodeWars等，挑战自己的编程能力。

阅读源代码：阅读一些经典的开源C语言项目的源代码，可以帮助学习者更好地理解和运用C语言。比如，Linux内核、ffmpeg多媒体框架、curl网络库等。

编写小项目：在掌握了基本的C语言知识之后，可以考虑编写一些小型的项目，例如文件管理器、游戏小程序、计算器等，锻炼自己的编程能力和实践经验。

总之，C语言是一个强大而广泛应用的编程语言，学习它并不容易，需要投入较多的时间和精力。但只要坚持学习和练习，相信你肯定会取得进步和成功的！

*/

int main()
{
    int n = 0;
    scanf("%d", &n);
    int num = 0;
    int i = 0;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;

}



/*int main()
{
    int n = 0;
    scanf("%d", &n);
    int tmp = 0;
    int sum = 0;
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        tmp += i;
        sum += tmp;
    }
    printf("%d", sum);
    /*
    i = 2
       i * 2 - 1 拿到三
    i = 3
        i * 2 = 6 拿到6
    i = 4
        i * 2 + 2 拿到10
    i = 5
        i * 2 + 5 拿到15
    i = 6
        i * 2 +  9 拿到 16
    
    return 0;
}*/

/*
输入一个整数n,计算 1+1/（1-3）+1/（1-3+5）+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))的值

	1 + 
*/

/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i, s = 1;
    int tmp = 0;
    double sum = 0;

    for (i = 1; i <= n; i++)
    {
        tmp += s * (2 * i - 1);
        sum += 1.0 / tmp;
        s = -s;
    }
    printf("%.3lf\n", sum);
}*/


