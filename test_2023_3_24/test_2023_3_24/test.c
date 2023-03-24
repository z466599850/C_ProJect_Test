#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

//问题：一年约有 3.156×107 s，要求输入您的年龄，显示该年龄合多少秒。

int main()
{
	int age;
	scanf("%d", &age);
	long long  b = 31560000;
	b = b * age;

	printf("%lld\n", b);
	return 0;
}
/*int main()
{
	//向内存申请10个整形的空间
	int* p = (int*)malloc(10 * sizeof(int));//需要强制类型转换 
	//引用头文件#include <stdlib.h> malloc(开辟多少空间 * sizeof(类型))
											//prt = (int*)malloc(num*sizeof(int));
	if (p == NULL)//判断ptr指针是否为空
	{
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));//可以把对应的错误码显示出来
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//当动态申请的空间不再使用的时候
	//就应该还给操作系统

	free(p);//free(内存块的名)释放空间 虽然释放了但还是会找到这块空间
	p = NULL;//加上这个就可以彻底断开他的联系

	//注：malloc 和 free 一定要成对使用 

	return 0;
}*/

//计算2的阶乘
/*int main()
{
	//scanf()是一个有返回值的函数，用scanf读取几个数，则scanf的返回值为几。
	int n = 0;

	//没有输入的时候就会停止循环
	while (scanf("%d\n", &n) != EOF)
	{
		//记住不要写成n<<1,这样就意味着输入的二进制左移一位了并且*n
		printf("%d\n", 1 << n);

	}
	return 0;
}*/

//计算2的阶乘
/*
	语法/原型：
	double pow(double x,double y);
	头文件#include <math.h>
*/
/*#include <stdio.h>
#include <math.h>

int main() {
	double x = 4, y = 6;  //为变量赋初值
	double result = pow(x, y);  //求a的b次方
	printf("%lf\n", result);

	return 0;
}*/
/*
时间转换基础
1h=60min
1min=60s
1h=60*60s=3600s
*/

/* 使用的是C语言 */
/*#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	printf("%d %d %d", a / 3600, a % 3600 / 60, a % 3600 % 60);
	return 0;
}*/
/*描述
给定一个浮点数，要求得到该浮点数的个位数。

数据范围：

	0 < n ≤ 200
	输入描述：
	一行，包括一个浮点数。
	输出描述：
	一行，包含一个整数，为输入浮点数对应的个位数。
	示例1
	输入：
	13.141
	输出：
	3
*/
#/*include <stdio.h>

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = (a + b) % 7;
	if (c == 0)
		c = 7;
	printf("%d\n", c);
	return 0;
}*/