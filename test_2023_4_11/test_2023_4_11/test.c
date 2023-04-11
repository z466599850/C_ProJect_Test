#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*

数学上有个水仙花数，有几个三位数
他的各位数字的 ‘立方’ 和等于其本身
153 = 1的3次方+5的3次方+3的3次方

想一下该如何去实现
需要什么去实现 思路一定要清晰
我这里用的是多重循环，看到题目一定要去分析题目 不要光去看 弄一个注释去分析

每个需要的重要的点都要注意

思路了然 想怎么去实现，慢慢的调试

*/

int main()
{
    int m = 0;
    int n = 0;
    int sum = 0;
    int num = 0;
    int tmp = 0;
    int i = 0;
    int count = 0;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        if (m >= 100 && m <= n && n <= 999)
        {
            for (i = m; i <= n; i++)
            {
                tmp = i;
                num = 0;
                while (tmp != 0)
                {
                    sum = tmp % 10;
                    num += sum * sum * sum;
                    tmp /= 10;
                }
                if (num == i)
                {
                    printf("%d ", num);
                    count++;
                }
            }
            if (count == 0)
            {
                printf("no\n");
            }
            else
            {
                printf("\n");
            }

        } 
    }
    return 0;
}