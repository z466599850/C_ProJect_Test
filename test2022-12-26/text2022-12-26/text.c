#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//函数声明
/*int Add(int x, int y);*/

#include "add.h"//库函数<>，自己函数“” 
//.c是你写的代码，.h是你的函数声明

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	//函数调用
	printf("%d", sum);
	return 0;
}

//函数的定义
/*int Add(int x, int y)
{
	int z = x + y;
	return z;
}*/



/*int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
		//请问他的结果是什么 43  2  1
	//为什么呢 因为printf返回的是他字符的个数
	//先从43这边打印 然后43有两个数字 第二个printf打印2 然后第一个printf打印1
	return 0;
}*/



//.写一个函数，每调用一次这个函数，就会将num的值增加1。
/*void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	return 0;
}*/


//3.写一个函数，实现一个整形有序数组的二分查找。
                     //arr是一个指针 他传过来的是首个元素 他不可能把所有的数都传过来，所以只能在下面计算好了在传过来
/*int binary_serch(int arr[], int k, int sz) //数组传递的时候是首元素地址，但是数组的地址是连续的。
{

	int min = 0;
	int max = sz - 1;
	while (min <= max)
	{
		int mid = (min + max)/2;
		if (arr[mid]< k )
		{
			min = mid + 1;
		}
		else if (arr[mid] > k)
		{
			max = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_serch(arr, k,sz);
	if (ret == -1)
	{
		printf("找不到指定的数字");
	}
	else
	{
		printf("找到了，下标是%d",ret);
	}
	return 0;
}*/



//.写一个函数判断一年是不是闺年。
/*int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)//is_leap_year 是不是闰年的意思
		{
			printf("%d ", year);
		}
	}
	return 0;
}*/



//写一个函数可以判断一个数是不是素数
/*int is_prime(int a)
{
	int j = 0;
	for (j = 2; j <=sqrt(a); j++)//sqrt 开根号的意思 头文件是math.h
	{
		if (a % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)//is_prime 判断是不是素数
			printf("%d ", i);
	}
	return 0;
}*/





//利用函数将两个数进行交换
//总结：这种写法只是表面交换了实际并没有交换因为 x，y和a，b不在一个地址
//
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
//
/*void Swap1(int x, int y)//int x ,int y,放的是形式参数
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}


int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	//调用函数- 传值调用
	Swap1(a, b);
	printf("a = %d b = %d\n", a, b);
}*/





//利用函数将两个数进行交换
//通过地址传递过去了，通过地址渐渐的找回来
/*void Swap2(int* pa, int* pb)//指针变量 
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


int main()
{
	int a = 10;
	int b = 20;
	printf("a= %d b = %d\n", a, b);
	//调用函数- 传址调用
	Swap2(&a, &b);//Swap是交换的意思 自定义函数()  // &a 的值给到了 int* pa // &b 的值给到了 int* pb
	printf("a = %d b = %d", a, b);
	return 0;
}*/



//利用三目运算符判断两个数的最大值
/*int get_max(int x, int y)//形参 - 形式参数- 形式上参数
{
	return (x > y) ? (x) : (y);
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max = %d", max);
	return 0;
}*/


//判断两个数的最大值
/*int get_max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a = 10;
	int b = 20;
	//函数的使用
	int max = get_max(a, b);
	printf("max = %d\n",max);
	max = get_max(100,300+1);//300+1是表达式
	max = get_max(100,get_max(3,7));//函数
	printf("max = %d", max);
	return 0;
}*/




//memset memory - 内存 set -设置
/*int main()
{
	char arr[] = "hello word";//"里面的是字符串"
	memset(arr, 'z', 5);//指定存入字符串的内存，改变前num个值 字符单引号，字符串双引号 'z'是字符 "hello"是字符串
	printf("arr:%s", arr);//覆盖的是前面的数
	return 0;
}*/







/*int main()
{
	char str1[] = "Sample string"; //字符型（char）用于储存字符（character），如英文字母、数字或标点。 //另外后面隐藏了一个\0
	                               //需要注意的是char定义的字符要用单引号‘’将其包围。（另外字符串需要用双引号“”包围，在此不多加阐述）
	char str2[40];
	char str3[40];
	strcpy(str2, str1);//strcmp (目的地，源头) 就是把源头复制到目的地
                      //strcmp (目的地，文字) 也可以把文字复制到目的地 
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return 0;
}*/



/*int main()
{
	char arr1[] = "bit";//后面隐藏了一个\0 是结束标志
	char arr2[20] = "###############";
	strcpy(arr2, arr1);
	printf("arr1:%s\narr2:%s\n", arr1, arr2); //"################"
	                                         //bit\0########## 把他覆盖了 后面有个\0代表结束标志 不管后面有多少内容都不显示了
	                                        //因为\0是结束标志 拷贝过去证明\0处结束 所以不包含后面的井号s
	//strcpy - string copy - 字符串拷贝
	//strlen - string length - 字符串长度有关
	return 0;
}*/




/*int Add(int x, int y)
{
	int z = 0;
	z = x+y;
	return z;
}

int main()
{
	int a = 20;
	int b = 10;
	int sum = Add(a, b);//Add是自定义函数 可以是任何字 随便输入就行
	printf("%d\n", sum);
	//strlen 用来计算字符串的长度他可以用来操作字符串
	return 0;
}*/