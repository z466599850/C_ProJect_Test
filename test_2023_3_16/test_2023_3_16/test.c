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
	//���Բ���
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
	int va = 0;//Ҫ���ҵ�ֵ
	for (i = 0; i < NUMBER; i++)
	{
		printf("v[%d]:>", i + 1);
		scanf("%d", &vx[i]);
	}
	printf("������Ҫ���ҵ�ֵ:>");
	scanf("%d", &va);

	int serach = find_va(vx, va);
	if (serach == FILE)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���,ֵ��:>%d,λ����V[%d]", va,serach + 1);
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
	

	printf("������%d��ѧ���ķ���\n",NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("[%d]Ӣ��:>", i + 1);
		scanf("%d", &eng[i]);
		printf("   ��ѧ:>");
		scanf("%d", &mat[i]);
	}

	//��߷�
	int max_e = max_of(eng);
	int max_m = max_of(mat);

	printf("Ӣ�����߷���:>%d\n", max_e);
	printf("��ѧ����߷���:>%d\n", max_m);
	return 0;
}*/