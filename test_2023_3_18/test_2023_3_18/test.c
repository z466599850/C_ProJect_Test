#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

/*int main()
{
	int i = 0;
	static double arr[5] = {1,2,3,4,5};
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d]=%f\n", i, arr[i]);
	}
	return 0;
}*/
/*#define NUMBER 5

int fx = 0;
void  func()
{
	static int sx = 0;;
	int        ax = 0;
	printf("%3d%3d%3d\n",ax++,sx++,fx++);
	//因为作用域不同 fx 和 sx 是全局变量 ax在自定义函数里有生命下次循环进来还是0 
	//当下次循环进来 因为fx和sx是全局变量 所以 在[ 作用域 ]里面对sx和fx没有用 所以他们会++
	//ax sx fx
	//--------
	//0 0 0
	//0 1 1 
	//0 2 2
	//0 3 3
	//0 4 4
	//0 5 5 
	//0 6 6
	//0 7 7
	//0 8 8
	//0 9 9
	//--------
}

int main()
{
	int i;
	puts("ax sx fx");
	puts("---------------");
	for (i = 0; i < 10; i++)
	{
		func();
	}
	puts("---------------");
	return 0;
}*/

/*void Mat_Product(int a[4][3], int b[3][4], int c[4][4])
{
	int i, j;
	int m = 0;
	for (i = 0; i < 4; i++)
	{
		while (m < 4)
		{
			for (j = 0; j < 3;j++)
			{
				c[i][m] += a[i][j] * b[j][m];
			}
			m++;
		}
		m = 0;
	}
}

int main()
{
	int a[4][3] = { 0 };
	int b[3][4] = { 0 };
	int c[4][4] = { 0 };

	int i, j;
	//矩阵a
	puts("矩阵a:>");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d]:>", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	//矩阵a打印
	puts("");
	puts("矩阵a打印:>");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d]:>%d\n", i, j, a[i][j]);
		}
		printf("\n");
	}
	//矩阵b
	puts("");
	puts("矩阵b:>");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("b[%d][%d]:>", i, j);
			scanf("%d", &b[i][j]);
		}
		printf("\n");
	}
	//打印矩阵b
	puts("");
	puts("矩阵b打印:>");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("b[%d][%d]:>%d\n", i, j, b[i][j]);
		}
		printf("\n");
	}

	//矩阵乘积
	Mat_Product(a, b, c);

	//矩阵c
	puts("");
	puts("矩阵c打印:>");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("a[%d][%d]:>%d\n", i, j, c[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

/*int search(const int v[], int num, int idx[], int n)
{
	int i = 0;
	int x = 0;
	for (i = 0; i < n; i++)
	{
		if (v[i] == num)
		{
			x++;
		}
	}
	return x;
}

int main()
{
	int i = 0;
	int v[NUMBER];
	int num = 0;
	int idx[NUMBER];

	for (i = 0; i < NUMBER; i++)
	{
		printf("v[%d]:>", i);
		scanf("%d", &v[i]);
	}
	printf("请输入要查找的值:>");
	scanf("%d", &num);

	int sr = search(v, num,idx, NUMBER);
	printf("相同的元素有%d", sr);
	return 0;
}*/
