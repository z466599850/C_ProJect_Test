#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
����
ţţ��һ��ѧϰ�ƻ������ƻ��� y �� m �� d �տ�ʼѧϰ������֮ǰ���Ǿ����Ὺʼѧϰ�ģ�������һ����ʼѧϰ�Ͳ���ͣ�����������ж� y1 �� m1 �� d1 ��ţţӦ��ѧϰ��
����������
��һ������ y ��m ��d ����ţţ�ƻ���ʼѧϰ��ʱ�䡣
�ڶ������� y1��m1��d1����ѯ�ʵ�ʱ�䡣
���������
�����ж�ţţ�Ƿ�ʼѧϰ������������ yes ��������� no

*/
#include <stdio.h>
/*
    �ƻ���y��m��d�տ�ʼѧϰ����֮ǰ�϶�����ѧϰ��
    һ����ʼѧϰ �Ͳ���ͣ���� ���ж� y m d Ӧ��ѧϰ��

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