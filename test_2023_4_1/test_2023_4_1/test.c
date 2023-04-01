#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
描述
牛牛有一个学习计划，他计划在 y 年 m 月 d 日开始学习，但在之前他是绝不会开始学习的，但是他一旦开始学习就不会停下来，请你判断 y1 年 m1 月 d1 日牛牛应该学习吗。
输入描述：
第一行输入 y ，m ，d ，即牛牛计划开始学习的时间。
第二行输入 y1，m1，d1，即询问的时间。
输出描述：
请你判断牛牛是否开始学习。如果是则输出 yes ，否则输出 no

*/
#include <stdio.h>
/*
    计划在y年m月d日开始学习，但之前肯定不会学习，
    一旦开始学习 就不会停下来 请判断 y m d 应该学习吗

*/
int main()
{
    int y, m, d, y1, m2, d2;
    scanf("%d%d%d", &y, &m, &d);
    scanf("%d%d%d", &y1, &m2, &d2);

    if (y1 >= y && m2 >= m && d2 >= d || d2 < d)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}

/*#include<stdio.h>
int main()
{
    int t;
    while (scanf("%d", &t) != EOF)
    {
        if (t > 0)
            printf("1\n");
        else if (t == 0)
            printf("0.5\n");
        else if (t < 0)
            printf("0\n");
    }
    return 0;
}*/

/*int main()
{
	int i = 0;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}*/