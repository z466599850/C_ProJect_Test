#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <windows.h>

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(sizeof(5 * sizeof(int)));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}

/*//struct S
//{
//	int n;
//	int arr[10];
//};

//struct S
//{
//	int n;
//	int arr[];//未知大小的-柔性数组
//};

struct S
{
	int n;
	int arr[]; //未知大小的 - 柔性数组成员-数组的大小是可以调整的
};

int main()
{
	//struct S s;
	//printf("%d\n", sizeof(s));//计算的时候不包含结构体成员
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//对柔性数组开辟空间
	//使用
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;//0 1 2 3 4
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	//打印
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//释放
	free(ps);
	ps = NULL;
	return 0;
}*/

/*Test()
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free释放str指向的空间后，并不会把str置为NULL;
	//改
	str = NULL;
	//上面这句话是改的
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}*/

/*void GetMomery(char** p, int num)
{
	*p = (char*)malloc(num);
}
Test()
{
	char* str = NULL;
	GetMomery(&str, 100);
	strcpy(str, "hello");
	printf(str);
	//忘记释放动态开辟内存，导致内存泄露
	//改
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}*/

/*int* Test()
{
	int* ptr = malloc(100);//堆区 堆区free才能回收
	return ptr;
}

int main()
{
	int* Test();
	return 0;
}

int* Test()
{
	//static int a = 10;//静态区
	int a = 10;//栈区err
	return &a;
}

int main()
{
	int* p =Test()
	return 0;
}

//返回栈空间地址的问题
char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(&str);
	printf(str);
}

int main()
{
	Tset();
	return 0;
}*/

/*//改正2
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello word");
	printf(str);

	free(str);
	str = NULL;
}

int main()
{
	//问 结果是什么
	//1.运行代码程序会出现程序崩溃的现象
	//2.程序存在内存泄露
	//为什么会存在内存泄漏呢：str以值传递的形式给p
	//p是GetMemory函数的形参，只能函数内部有效
	//等GetMemory函数返回之后，动态开辟内存尚未释放
	//并且无法找到，所以会造成内存泄漏
	Test();

	//char* str = "abcdef";
	//printf("%s\n", str);
	//printf(str);
	//printf("abcdef");
	return 0;
}
//改正1
void GetMemory(char** p)
{
	*p = (char*)malloc(100);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	strcpy(str, "hello word");
	printf(str);

	free(str);
	str = NULL;
}

int main()
{
	//问 结果是什么
	//1.运行代码程序会出现程序崩溃的现象
	//2.程序存在内存泄露
	//为什么会存在内存泄漏呢：str以值传递的形式给p
	//p是GetMemory函数的形参，只能函数内部有效
	//等GetMemory函数返回之后，动态开辟内存尚未释放
	//并且无法找到，所以会造成内存泄漏
	Test();

	//char* str = "abcdef";
	//printf("%s\n", str);
	//printf(str);
	//printf("abcdef");
	return 0;
}

void GetMemory(char* p)
{
	p = (char*)malloc(100);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(str);
	strcpy(str, "hello word");
	printf(str);
}

int main()
{
	//问 结果是什么
	//1.运行代码程序会出现程序崩溃的现象
	//2.程序存在内存泄露
	//为什么会存在内存泄漏呢：str以值传递的形式给p
	//p是GetMemory函数的形参，只能函数内部有效
	//等GetMemory函数返回之后，动态开辟内存尚未释放
	//并且无法找到，所以会造成内存泄漏
	Test();

	//char* str = "abcdef";
	//printf("%s\n", str);
	//printf(str);
	//printf("abcdef");
	return 0;
}*/

/*int main()
{
	//1.对NULL指针解引用操作
	//int* p = malloc(40);
	////怎么破解这把办法呢 ：对p进行相关的判断
	//*p = 10;//malloc开辟空间失败 - 对NULL指针解引用

	//2.对动态开辟内存的越界访问
	//int* p = malloc(40);//10个int
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i <= 10; i++)
	//	{
	//		*(p + i) = i;
	//	}
	//}
	//free(p);
	//p = NULL;

	//3.对非动态开辟内存使用free释放内存空间
	//int a = 10;
	//int* p = &a;
	//p = 10;
	////...
	// 对非动态开辟内存使用free释放内存空间
	//free(p);
	//p = NULL;
	//

	//4. 使用free释放动态开辟内存的一部分
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	*p++ = i;
	//}
	////回收空间
	////使用free释放动态开辟内存的一部分
	////为什么呢 因为p++的起始位置已经被改变了 p不变让free释放是可以的
	//free(p);
	//p = NULL;

	//5.对同一块动态内存多次释放
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////假设使用完了
	////释放
	//free(p);
	//p = NULL;//加上这句话后面的free就没有意义了
	////....
	//free(p);

	//6.动态开辟内存忘记释放(内存泄露)

	while (1)
	{
		malloc(1);//这就会疯狂开辟内存 很可怕的一件事 会把内存耗干

	}
	return 0;
}*/

/*int main()
{
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////使用
	//int* p2 = realloc(p, 80);
	//if (p != NULL)
	//{
	//	p = p2;
	//}

	//int* p = realloc(NULL, 40);//malloc(40)


	return 0;
}*/