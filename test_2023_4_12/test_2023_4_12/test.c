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
描述
公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
（注：本题有多组输入）
输入描述：
每一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
输出描述：
每一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。
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
描述
变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
比如1461 可以拆分成（1和461）,（14和61）,（146和1),
如果所有拆分后的乘积之和等于自身，则是一个Lily Number。

例如：

655 = 6 * 55 + 65 * 5

1461 = 1*461 + 14*61 + 146*1

求出 5位数中的所有 Lily Number。


一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格
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