#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

//题目：调整奇数偶数顺序
//要求：调整数组使奇数全部都位于偶数前面。
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	//判断奇数
	while (left < right && arr[left] % 2 == 1)
	{
		left++;
	}

	//判断偶数
	while (left < right && arr[right] % 2 == 0)
	{
		right--;
	}
	//交换
	if (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = arr[tmp];
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}

/*//题目：喝汽水问题
//要求：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水(编程实现)
//1瓶 = 1元  2空瓶 = 一瓶 20元可以买多少汽水
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	printf("花多少钱买汽水;>");
	scanf("%d", &money);
	//第二种写法
	if (money == 0)
	{
		total = 0;
	}
	else
	{
		total = money * 2 - 1;
	}
	printf("%d\n", total);
	//第一种写法
	////买回来的汽水喝掉
	//total = money;
	//empty = money;
	////换回来的汽水
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	return 0;
}*/

/*//打印菱形
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	for (i = 0; i <line ; i++)
	{
		//打印上半部分
		//打印空格
		int j = 0;
		for (j = 0; j < line -1-i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <=i;j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j <2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

/*//水仙花
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为水仙花数(自幂数)
		//1.计算i的位数 - n位数
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		//2.计算i的每一位n次方之和 sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);//判断次方用的函数 头文件 math.h
			tmp /= 10;
		}
		//3.比较i ==sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}*/


/*//题目：计算求和
//要求：求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int ret = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);// 2 5
	for (i = 0; i < b;i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}*/


/*//题目：字符串逆序
//要求：写一个函数，可以逆序一个字符串，还有空格

void Reverse(char* str)
{
	int sl = strlen(str);

	char* left = str;
	char* right = str + sl - 1;
	//交换
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}

int main()
{
	char s[100] = { 0 };
	scanf("%s", &s);
	//逆序函数
	Reverse(s);
	//打印
	printf("%s", s);
	return 0;
}*/


/*//面试题8 相对复杂一点
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//第一个影响后面的 意思是 下一个算的时候不会重置
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n",cpp[-1][-1] + 1);
	return 0;
	// 结构图：
	//		     c*			   cp*	==>	cpp**			结果
	//		char*	E			c+3 = F						printf = POINT
	//		char*	N			c+2 = P						printf = ER
	//		char*	P			c+1 = N						printf = ST
	//		char*	F			 c  = E						printf = EW

	//补充：前置++，先++，后使用 意思是 先加上 在去打印
	//		后置++，先使用，再++ 意思是 先打印 在加++
	//注意：
	// int a= 10;			*cpp[-2]+3				cpp[-1][-1]+1
	// ++a;//a == 11		* *(cpp+(-2))+3			*(  *(cpp-1)-1  )+1
	// ++a;//a == 12		* *(cpp-1)+3
	// a-2 == 10
}*/

/*//阿里巴巴的面试题7
int main()
{
	char* a[] = { "work","at","alibaba" };
	char* * pa = a;

	pa++;
	printf("%s\n", *pa);
	return 0;
}*/


/*//笔试题6
int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 }; 
	int* ptr1 = (int*)(&aa + 1);//&aa 代表的整个数组
	int* ptr2 = (int*)(*(aa + 1));//*(aa + 1) = aa[1]第二行首元素的地址

	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
	return 0;

	//		   aa					[ptr1 - 1]得到的是10
	//   [1][2][3][4][5]   [6][7][8][9][10][&aa + 1]
	// 补充：
	//为什么*(aa + 1 )等价 aa[1] 呢
	int arr[10] = { 1,2,3,4,5 };
	int* p = arr;
	//*(p+2) ==> p[2] ==> *(arr + 2) ==> arr[2]
	arr[2];// ==>*(arr+2)
}*/