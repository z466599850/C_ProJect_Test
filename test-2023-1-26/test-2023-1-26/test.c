#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int (*p[10])[5];
	return 0;
}

/*//数组指针的使用：
//参数是数组的形式
void print1(int arr[3][5], int x,int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//参数是指针的形式
void print2(int(*p)[5],int x,int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);//这几种写法也是一样的
			//printf("%d ", *(p[i] + j));
			//printf("%d ", ( * (p + i))[j]);
			//printf("%d ", *(*(p + i) + j));//好像懂了，这里p是第一行整个数组的地址，*p是第一行首元素地址，
											//p+i每次地址加一行，*（p+i）是该行首元素地址，+j是该行第几个元素
											//第二种解释方法 *（p+1）是行地址，(*(p+i)+j)是行列地址，*(*(p+i)+j)是解引用的数组元素值
									//p是指第一行整个地址，*p是指第一行第一个元素地址
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr,3,5);//arr - 数组名 - 数组名就是首元素地址
	print2(arr, 3,5);//arr 数组传参传的是首元素的地址，然后在二维数组里面每一行代表一个元素，所以arr有3个元素。
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	//printf("%d ", p[i]);//这几种写法都是等价的
	//	//printf("%d ", *(p + i));
	//	printf("%d ", *(arr + i));
	//	printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
	//}
	return 0;
}*/

/*int main()
{
	char* arr[5];
	char* (*pa)[5] = &arr;

	int arr2[5] = { 0 };
	int (*pa2)[5] = &arr2;
	return 0;
}*/

/*//数组指针 - 指针
int main()
{
	//int* p = NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形的地址
	//char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
	//					//数组指针 - 指向数组的指针 - 可以存放数组的地址
	//int arr[10] = { 0 };
	//arr - 首元素地址
	//&arr[0] - 首元素的地址
	//&arr - 数组的地址
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;//数组的地址要存起来
	//上面p就是数组指针
	printf("%d ", (*p));
	return 0;
}*/

/*//指针数组的用法
int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 2,3,4,5,6,7 };
	int arr3[] = { 3,4,5,6,7,8 };

	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 6; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}*/

/*//指针数组 是数组，用来存放指针的
int main()
{
	int arr[10] = { 0 };//整型数组
	char ch[5] = { 0 };//字符数组
	int* parr[4];//存放整型指针的数组 - 指针数组
	char* pch[5];//存放字符指针的数组 - 指针数组
	return 0;
}*/

/*//曾经的一道笔试题 出自于一本书 《剑指offer》
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	const char* p1 = "abcdef";//加上const就是这个不能被更改
	const char* p2 = "abcdef";//加上const就是这个不能被更改
	if (p1 = p2)//这里p1和p2字符相同为了节省空间存储的是一个位置 //hehe，这是因为*p内存的首地址，p指向的是abcdef 
											//两个指针都没有指向数组，他们指向的是abcdef这个字符串常量
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	/*if (arr1 == arr2)//虽然arr1和arr2一样但是存储的地址不一样 所以他就不能够相等
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}*/

/*int main()
{
	const char* p = "abcdef";//"abcdef" 是一个常量字符串 不能被改变
	//*p = 'w';
	printf("%s\n", p);//这种写法是错误的不知道为什么能编译出来，
	//printf("%c\n", *p);//打印的是a 因为放的是首元素的地址 //指针P里放的不是字符串  是指针执行字符串首地址
						//%c是打印一个字符，p是首地址，所以要解引用。%s是打印字符串，字符串打印的时候从首地址开始一直到‘\0’结束
	//printf("%s\n", p);//abcdef //这里不用是因为*p从首地址取出指针指向的’a’，打印出a，p作为首地址打印字符串，直接打印一串，p是指针，*p是字符a
	return 0;
}*/
//网站:  www.stackoverflow.com
//		 Segmentation fault	- 段错误 内存访问或非法访问
//		 segmenfault.com 技术提问的网站 叫段错误

/*int main()
{
	char arr[10] = "abcdef";
	char* pc = arr;//放的是首元素的地址，然后pc通过这个首元素地址依次打印abcdef 直到\0才结束
	printf("%s\n", arr);//abcdef
	printf("%s\n", pc);//abcdef
	return 0;
}*/