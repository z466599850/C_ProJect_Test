#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*

��ѧ���и�ˮ�ɻ������м�����λ��
���ĸ�λ���ֵ� �������� �͵����䱾��
153 = 1��3�η�+5��3�η�+3��3�η�

��һ�¸����ȥʵ��
��Ҫʲôȥʵ�� ˼·һ��Ҫ����
�������õ��Ƕ���ѭ����������Ŀһ��Ҫȥ������Ŀ ��Ҫ��ȥ�� Ūһ��ע��ȥ����

ÿ����Ҫ����Ҫ�ĵ㶼Ҫע��

˼·��Ȼ ����ôȥʵ�֣������ĵ���

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