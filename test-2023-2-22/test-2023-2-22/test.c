#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#include <stddef.h>

struct S
{
	char c1;
	int a;
	char c2;
};

#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)

int main()
{
	//struct S s;	//ģ��ʵ��offsetof
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	//offsetof ��Ҫ��ͷ�ļ�#include <stddef.h>
	return 0;
}

//#include "add.h"

/*//#include <>
//#include ""

int main()
{
	int ret = Add(2,3);
	printf("ret = %d\n", ret);
	return 0;
}*/

/*#define DEBUG 0

int main()
{
	//����1��
//#if defined(DEBUG)//�����˾�ִ��������� û�����û��
//	printf("hehe\n");
//#endif
	//����2�� ����2�ȼ��ڴ���1
#ifdef DEBUG
	printf("hehe\n");
#endif
	//����3�� �෴���߼�
#if !defined(DEBUG)//�����˾Ͳ�ִ�� û�����ִ��
	printf("hehe\n");
#endif
	//����4��
#ifndef DEBUG//#if not def ��Ӹ�n
	printf("hehe\n");
#endif
	return 0;
}*/

/*int main()
{
#if 1==1
	printf("haha\n");
#elif 2==1
	printf("hehe\n");
#else
	printf("�ٺ�\n");
#endif
	return 0;
}*/

/*#define DEBUG

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#if 1//if ���ʽ��������� ���Ϊ���ִ������Ĵ��� Ϊ�پͲ�ִ��
		printf("%d ", arr[i]);
#endif//����һ��
	}

	return 0;
}*/

/*#define DEBUG

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#ifdef DEBUG//���������Ͳ������ û�ж�����Ͳ��������
		printf("%d ", arr[i]);
#endif//����һ��
	}

	return 0;
}*/

/*#define MAX 100

int main()
{
	printf("MAX = %d\n", MAX);
#undef MAX
	printf("MAX = %d\n", MAX);
	return 0;
}*/

/*#define MALLOC(num,type) (type*)malloc(num*sizeof(type))

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));

	int* p = MALLOC(10, int);
	//Ҳ�ᱻ�滻��
	//int* p = (int*)malloc(10 * sizeof(int));
	return 0;
}*/
/*#define SIZEOF(TYPE) sizeof(TYPE)

int main()
{
	int ret = SIZEOF(int);
	//int ret = sizeof(int);
	printf("%d\n", ret);
	return 0;
}*/

/*//����
int Max(int x, int y)
{
	return x > y ? x : y;
}

//��
#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;
	float c = 3.0f;
	float d = 4.0f;
	//�����ڵ��õ�ʱ��
	//��ͷ������Ŷ�úͷ��صĿ���
	//
	float max = MAX2(c, d);
	printf("max = %d\n", max);
	//Ԥ����׶ξ�������滻
	//û�к����ĵ��úͷ��صĿ���
	max = MAX(c, d);
	max = (c) > (d) ? (c) : (d);
	printf("max = %d\n", max);

	//int max = Max(a, b);
	//printf("Max = %d\n",max);
	//max = MAX(a, b);
	//printf("MAX = %d\n", max);

	//int max = MAX(a++, b++);
	//��ֱ���滻��ȥ
	//int max = ((a++)>(b++)?(a++):(b++));
	//printf("%d\n", max);//12
	//printf("%d\n", a);//11
	//printf("%d\n", b);//13

	return 0;
}*/