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
	//struct S s;	//模拟实现offsetof
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	//offsetof 需要引头文件#include <stddef.h>
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
	//代码1：
//#if defined(DEBUG)//定义了就执行下面代码 没定义就没有
//	printf("hehe\n");
//#endif
	//代码2： 代码2等价于代码1
#ifdef DEBUG
	printf("hehe\n");
#endif
	//代码3： 相反的逻辑
#if !defined(DEBUG)//定义了就不执行 没定义就执行
	printf("hehe\n");
#endif
	//代码4：
#ifndef DEBUG//#if not def 多加个n
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
	printf("嘿嘿\n");
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
#if 1//if 表达式后面的数字 如果为真就执行下面的代码 为假就不执行
		printf("%d ", arr[i]);
#endif//这是一对
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
#ifdef DEBUG//如果定义过就参与编译 没有定义过就不参与编译
		printf("%d ", arr[i]);
#endif//这是一对
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
	//也会被替换成
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

/*//函数
int Max(int x, int y)
{
	return x > y ? x : y;
}

//宏
#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;
	float c = 3.0f;
	float d = 4.0f;
	//函数在调用的时候
	//回头函数带哦用和返回的开销
	//
	float max = MAX2(c, d);
	printf("max = %d\n", max);
	//预处理阶段就完成了替换
	//没有函数的调用和返回的开销
	max = MAX(c, d);
	max = (c) > (d) ? (c) : (d);
	printf("max = %d\n", max);

	//int max = Max(a, b);
	//printf("Max = %d\n",max);
	//max = MAX(a, b);
	//printf("MAX = %d\n", max);

	//int max = MAX(a++, b++);
	//是直接替换过去
	//int max = ((a++)>(b++)?(a++):(b++));
	//printf("%d\n", max);//12
	//printf("%d\n", a);//11
	//printf("%d\n", b);//13

	return 0;
}*/