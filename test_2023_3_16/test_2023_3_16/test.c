#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER 5
#define FILE -1
int find_va(const int vx[], int va)
{
	int conut = 0;
	int i = 0;
	//线性查找
	while (1)
	{
		if (i == NUMBER)
		{
			return FILE;
		}
		if (vx[i] == va)
		{
			return i;
		}
		i++;
	}
}

int main()
{
	int i = 0;
	int vx[NUMBER];
	int va = 0;//要查找的值
	for (i = 0; i < NUMBER; i++)
	{
		printf("v[%d]:>", i + 1);
		scanf("%d", &vx[i]);
	}
	printf("请输入要查找的值:>");
	scanf("%d", &va);

	int serach = find_va(vx, va);
	if (serach == FILE)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,值是:>%d,位置在V[%d]", va,serach + 1);
	}
	return 0;
}

/*#define NUMBER 5

int max_of(int arr[])
{
	int i = 0;
	int max = arr[0];
	for (i = 0; i < NUMBER; i++)
	{
		if (arr[0] > max)
		{
			max = arr[0];
		}
	}
	return max;
}

int main()
{
	int i = 0;
	int eng[NUMBER];
	int mat[NUMBER];
	

	printf("请输入%d名学生的分数\n",NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("[%d]英语:>", i + 1);
		scanf("%d", &eng[i]);
		printf("   数学:>");
		scanf("%d", &mat[i]);
	}

	//最高分
	int max_e = max_of(eng);
	int max_m = max_of(mat);

	printf("英语的最高分是:>%d\n", max_e);
	printf("数学的最高分是:>%d\n", max_m);
	return 0;
}*/