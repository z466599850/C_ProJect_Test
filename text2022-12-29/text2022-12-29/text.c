#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


int main()
{
	int arr[3][4] = { {1,2,3,},{4,5} };
	int i = 0;//二维数组依然是通过下标访问的
	for (i = 0; i < 3; i++)//打印二维数组，两个for循环，外层控制行，内层控制列
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]= %p\n",i,j ,&arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*int main()
{
	int arr[3][4] = { {1,2,3,4},{4,5} };
	int i = 0;//二维数组依然是通过下标访问的
	for (i = 0; i <3; i++)//打印二维数组，两个for循环，外层控制行，内层控制列
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	//char ch[5][6];
	//int arr[] = { 1,2,3,4 };
	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };
	return 0;
}*/



//二维数组的初始化

/*int main()
{
	int arr[3][4] = { 1,2,3,4 }; //在第一行显示1234
	int arr[3][4] = { {1,2},{4,5} };//在第一行显示1，2 第二行显示 4，5
	int arr[][4] = { {2,3},{4,5} };//行可以省略但列一定不能省略
	return 0;
}*/



//二维数组的创建

/*int main()
{
	int arr[3][4];//3行4列
	char ch[5][6];//3行4列
	double arr[2][4];//3行4列
}*/



//一维数组的使用


/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
	int i = 0;//定义一个数组下标
	for (i = 0; i <= sz; i++)
	{
		printf("arr[%d]= %p\n" ,i,&arr[i]);//打印出来的数组在内存中是连续存放的 由低地址到高地址
	}
}*/
//回答问strlen的那个：strlen只能计算字符串的长度，这里元素是整形数，所以不行


/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
	//对数组内容赋值，数组是使用下标来访问的，下标从0开始。所以：
	int i = 0;//做下标
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);//引用下标哦
	}
	return 0;
}*/

/*int main()
{
	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
	//printf("%c ", arr[3]);
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}*/





// -----------分割线------------
/*int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));//4 //空间的大小 a b c \0
	printf("%d\n", sizeof(arr2));//3 空间的大小 a b c
	printf("%d\n", strlen(arr1));//3 abc \0 他遇到\0了 就结束了 但不包含\0哦！ 
	printf("%d\n", strlen(arr2));//随机值 stlen 只看到了avc没有看到 \0 所以他不知道怎么结束
	 //strlen 只求\0之前的数
	return 0;
}*/



/*int main()
{
	//创建一个数组- 存放整型 - 10个
	//int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
	//char arr2[5] = { 'a',98 };//显示的是b  因为b的ASCII 码值对应的是98 //不完全初始化，剩下的元素默认初始化为0
	//char arr3[5] = "ab";//这样的写法也是ok的 这样的写法后面有个\0 所以后面没有0 看的时候有但跟上面的不一样
	char arr4[] = "abcdef";//这样的写法也是OK的 不输入存放多少 会自动存放
	printf("%d", sizeof(arr4));//7个
	//sizeof 计算 arr4所占空间的大小
	//7个元素 - char 7*1 = 7

	printf("%d", strlen(arr4));//6个
	//stlen 求字符串的长度- '\0'之前的字符个数
	//[a b c d e f \0]
	//6

	//总结 sizeof(arr4));//包括字符零 strlen(arr4));//不包括字符0
	//     sizeof 是求数组长度，strlen是求字符串长度的


	//int n = 5;
	//cahr ch=[n];//NO 不能这样写 中括号里面要放常量 不能放变量
	return 0;
}*/

//1.strlen 和sizeof 没有什么关联
//2.strlen 是求字符串长度的-只能针对字符串长度- 库函数 - 使用引头文件
//3.sizeof 计算变量、数组、类型的大小- 单位是字节- 操作符






// 1 1 2 3 5 8 13 21 34 55 ....
//描述第n个斐波那契的数
/*int count = 0;
int Fib(int n)
{
	if (n == 3)//测试第3个斐波那契数的使用次数
	{
		count++;
	}
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}

}*/

/*int Fib(int n)//利用循环方式才正确
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD - 测试驱动开发
	ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
}*/

/*int jc1(int n)//循环的方法
{
	//1*2*3*4*5
	int ou = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		ou *= i;
	}
	return ou;
}*/


/*int jc2(int n)//递归的方法
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
	    return n * jc2(n - 1);
	}
}

int main()
{
	int a = 0;
	int ret = 0;
	scanf("%d", &a);
	ret = jc2(a);
	printf("%d\n", ret);
	return 0;
}*/



/*int mad_strlen(char* str)
{
	int count = 0;
	while ((*str)!='\0')
	{
		count++;
		str++;
	}
	return count;
}*/

/*int mad_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + mad_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "but";
	//int len = strlen(arr);//求字符串长度
	//printf("%d\n",len);

	//模拟实现了一个strlen函数
	int len = mad_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("len = %d ", len);
	return 0;
}*/

/*void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}*/


/*#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d ", sum);
	return 0;
}*/