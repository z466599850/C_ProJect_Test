#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <windows.h>
#include <errno.h>

#define CAT(X,Y) X##Y

int main()
{
	int Class84 = 2019;
	//printf("%d\n",Class84);
	printf("%d\n", CAT(Class, 84));
	//printf("%d\n",Class##84);
	//printf("%d\n",Class84);//������2019
	//���������ϲ���
	return 0;
}

/*#define PRINT(X) printf("the value of "#X" is %d\n",X)//#�� ��һ���������ɶ�Ӧ���ַ���

int main()
{
	//printf("hello world\n");
	//printf("hello" "wrold\n");
	//printf("hel""lo""world\n");

	int a = 10;
	int b = 20;
	PRINT(a);
	//printf("the value of ""a""is %d\n");
	PRINT(b);
	//printf("the value of ""b""is %d\n");
	return 0;
}*/

/*#define MAX 100
#define DOUBLE(X) ((X)*(X))

int main()
{
	int a = 5;
	int ret = 10 * DOUBLE(MAX+MAX);//���滻��һ�� ���滻�ڶ���MAX
	//int ret = 10* ((a)+(a));
	printf("%d\n", ret);
	return 0;
}*/

/*#define DOUBLE(X) ((X)*(X))

int main()
{
	int a = 5;
	int ret = 10 * DOUBLE(a);
	//int ret = 10* ((a)+(a));
	printf("%d\n", ret);
	return 0;
}*/

/*#define SQUARE(X) (X)*(X)//���ʱ�����36�� �������ŵ�ʱ����11

int main()
{
	//int ret = SQUARE(5);//��������滻��
	//int ret = 5 * 5;
	int ret = SQUARE(5 + 1);//5 + 1 5+1*5+1 = 11 �����滻
	printf("%d\n", ret);
	return 0;
}*/

/*define MAX 100;

int main()
{
	int a = MAX;
	printf("%d\n", MAX;);//�ͻ������ ���Բ��ܼӷֺ�
	return 0;
}*/

/*#define MAX 100//#��ͷ�Ķ���Ԥ����ָ��
#define STR "hehe"//#define ���� ����
#define reg register
#define do_forever for(;;)
int main()
{
	do_forever;
	//reg int a;
	//register int a;
	//int max = MAX;//��Ԥ����/Ԥ�����ʱ��Ͱ����max������100
	//printf("%d\n", max);
	//printf("%s\n", STR);
	return 0;
}*/
//95% - VS
//99% - gcc

/*int main()
{
	printf("%d\n", __STDC__);//��VS������ ��LINUX gcc�������¿���
	return 0;
}*/

/*int main()
{
	//printf("%s\n", __FILE__);//�������ڵ�ԭ���ƺ�·��
	//printf("%d\n", __LINE__);//�������ڵ��к�
	//printf("%s\n", __DATE__);//��ǰ�������е�����
	//printf("%s\n", __TIME__);//��ǰ�������е�ʱ��

	//д��־�ļ�
	int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("log.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s lin:%d date:%s time:%s i:%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
		printf("%s\n", __FUNCTION__);//���ڵĺ���������
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*extern int Add(int x, int y);//extern ����һ�������ⲿ�ļ��ĺ�����������ʹ��������һ��

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("c = %d\n", c);
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/