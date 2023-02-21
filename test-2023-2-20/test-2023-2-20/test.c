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
	//printf("%d\n",Class84);//所以是2019
	//把他们俩合并了
	return 0;
}

/*#define PRINT(X) printf("the value of "#X" is %d\n",X)//#号 把一个宏参数变成对应的字符串

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
	int ret = 10 * DOUBLE(MAX+MAX);//先替换第一个 在替换第二个MAX
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

/*#define SQUARE(X) (X)*(X)//这个时候就是36了 不加括号的时候是11

int main()
{
	//int ret = SQUARE(5);//宏是完成替换的
	//int ret = 5 * 5;
	int ret = SQUARE(5 + 1);//5 + 1 5+1*5+1 = 11 他是替换
	printf("%d\n", ret);
	return 0;
}*/

/*define MAX 100;

int main()
{
	int a = MAX;
	printf("%d\n", MAX;);//就会出错误 所以不能加分号
	return 0;
}*/

/*#define MAX 100//#开头的都是预处理指令
#define STR "hehe"//#define 名字 内容
#define reg register
#define do_forever for(;;)
int main()
{
	do_forever;
	//reg int a;
	//register int a;
	//int max = MAX;//在预编译/预处理的时候就把这个max换成了100
	//printf("%d\n", max);
	//printf("%s\n", STR);
	return 0;
}*/
//95% - VS
//99% - gcc

/*int main()
{
	printf("%d\n", __STDC__);//在VS不可以 在LINUX gcc编译器下可以
	return 0;
}*/

/*int main()
{
	//printf("%s\n", __FILE__);//代码所在的原名称和路径
	//printf("%d\n", __LINE__);//代码所在的行号
	//printf("%s\n", __DATE__);//当前代码运行的日期
	//printf("%s\n", __TIME__);//当前代码运行的时间

	//写日志文件
	int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("log.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s lin:%d date:%s time:%s i:%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
		printf("%s\n", __FUNCTION__);//所在的函数的名字
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*extern int Add(int x, int y);//extern 声明一下来自外部文件的函数想在这里使用先声明一下

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