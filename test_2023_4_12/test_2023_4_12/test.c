#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include<stdio.h>
void six(int x)
{
	if (x > 5)
	{
		six(x / 6);
	}
	printf("%d", x % 6);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	six(n);
	return 0;
}


/*
����
����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
��ע�������ж������룩
����������
ÿһ�У�����7��������0~100��������7���ɼ����ÿո�ָ���
���������
ÿһ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С�������2λ��ÿ��������С�
*/
/*int main()
 {
	int arr[7] = { 0 };
	int i = 0;
	int min = 100;
	int max = 0;
	double num = 0;

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 7; i++)
	{
		
		if (arr[i] < min)
		{
			min = arr[i];
		}
		
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (i = 0; i < 7; i++)
	{
		num += arr[i];
	}
	num = num - (max + min);
	num = num / 5.00;

	printf("max = %d\nmin = %d\n", max, min);
	printf("%.2lf", num);
	return 0;
}*/
/*
����
����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�
����1461 ���Բ�ֳɣ�1��461��,��14��61��,��146��1),
������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��

���磺

655 = 6 * 55 + 65 * 5

1461 = 1*461 + 14*61 + 146*1

��� 5λ���е����� Lily Number��


һ�У�5λ���е����� Lily Number��ÿ������֮����һ���ո�
*/
/*int main()
{
	int i = 0;
	int n = 0;
	int sum = 0;
	int num = 0;
	int m = 10;
	for (i = 10000; i <= 99999; i++)
	{
		n = i;
		m = 10;
		num = 0;
		while (n != 0)
		{
			n = i;
			sum = n % m;
			n /= m;
			num += n * sum;
			m *= 10;
		}
		if (num == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/
/*
1461       1     146      146 * 1 + 
*/