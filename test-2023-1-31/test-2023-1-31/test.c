#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Swap(char* buf1,char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = 0;
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void*e1, const void*e2))
{
	//趟数
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j * width, (char*)base) + (j + 1) * width > 0)
			{
				//交换
				Swap((char*)base + j * width,(char*)base + (j + 1) * width,width);
			}
		}
	}
}
 
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
}

int main()
{
	test1();
	return 0;
}
//指针和数组笔试题解析
//
/*int main()
{
		
	//地址的大小都是4/8个字节

	//数组名是首元素的地址
	//两个意外：
	// 1.sizeof(数组名) - 数组名表示整个数组
	// 2.&数组名 - 数组名表示整个数组
	//一维数组
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节
	printf("%d\n", sizeof(a+0));//4/8 - 数组名这里表示首元素的值，a+0 还是首元素的地址 地址的大小就是4/8个字节
	printf("%d\n", sizeof(*a));//4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4 ！！！
	printf("%d\n", sizeof(a+1));//4/8 - 数组名这里表示首元素的值，a+1是第二个元素的地址 地址的大小就是4/8个字节 
	printf("%d\n", sizeof(a[1]));//4 - 第2个元素的大小  ！！！
	printf("%d\n", sizeof(&a));//4/8 &a取出的是数组的地址，但是数组的地址也是地址，地址的大小就是4/8字节
	printf("%d\n", sizeof(*&a));//16 - &a数组的地址，数组的地址解引用访问的是数组，sizeof计算的就是数组的大小单位是字节
	printf("%d\n", sizeof(&a+1));//4/8 - &a是数组的地址，&a+1虽然跳过整个数组，但还是数组，所以是4/8
	printf("%d\n", sizeof(&a[0]));//4/8 - &a第一个元素的地址
	printf("%d\n", sizeof(&a[0]+1));//4/8 - &a[0]+1 是第二个元素的地址
	return 0;
}/*/


//字符数组
/*int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 - sizeof计算的是数组大小，6*1 = 6字节
	//printf("%d\n", sizeof(arr + 0));//4/8 arr是首元素的地址，arr+0还是地址还是首元素的地址，地址的大小是4/8个字节
	//printf("%d\n", sizeof(*arr));//1 - arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节
	//printf("%d\n", sizeof(arr[1]));//1 - arr[1]指的是第二个元素，元素当然是1个字节
	//printf("%d\n", sizeof(&arr));//4/8 - &arr 虽然是数组的地址，但还是地址，地址大小是4/8个字节
	//printf("%d\n", sizeof(&arr + 1));//4/8 - &arr+1 是跳过整个数组后的地址，那还是地址吗，地址大小是4/8个字节
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址

	//strlen 求字符串长度的
	printf("%d\n", strlen(arr));//随机值 
	printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));//err 会使程序崩溃 因为传过去的是'a' = -97 然后向后数，非法访问了
	//printf("%d\n", strlen(arr[1]));err err错误的意思 以后千万不能写出err的垃圾代码！！！！！！！！！！！！！！！
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值 - 6 跟上面的那个差值是6
	printf("%d\n", strlen(&arr[0] + 1));//随机值 - 1 比上面的少个1 
	return 0;
}*/










//qsort 第一个参数：待排序数组的首元素地址
//		第二个参数：待排序数组的元素个数
//		第三个参数：待排序数组的每个元素的大小-单位是字节
//		第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者实现
//					函数指针的两个参数是：待比较的两个元素的地址
		//int arr[]={1,2,3};
		//int sz = sizeof(arr) / siezoef(arr[0]);//计算元素个数
//例子：qsort(首元素地址，元素个数，每个元素的字节是多少，函数指针);


/*//qsort 的用法qsort(第一个数组起始位置，第二个几个元素，每个元素的大小，创建函数进行比较)
// 
//名字排序的方法
struct Stu
{
	char name[20];
	int age;
};


int cmp_s_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	// 字符串比较不能直接用 > <= 来比较，应该用strcmp函数
	//strcmp比较是通过比较ASCII表 头文件是 string
	//strlen不可以，那个是字符串长度，不一样的，这个是看字母对应的ASCII码的大小
	//就是首字母的ascii码值 z  l  w
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}


int main()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_s_name);
	return 0;
}*/

/*//年龄排序的方法
struct Stu
{
	char name[20];
	int age;
};


int cmp_s_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}


int main()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_s_age);
	return 0;
}*/

/*//浮点数的qsort的写法
int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)//第一种写法
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;

`	//return (int)(*(float*)e1 - *(float*)e2);//第二种写法
}

int main()
{
	float farr[] = { 5.0,4.0,3.0,8.0,2.0,6.0,7.0,1.0 };
	int sz = sizeof(farr) / sizeof(farr[0]);
	qsort(farr, sz, sizeof(farr[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", farr[i]);
	}
	return 0;
}*/

/*//int类型排序 qsort 版
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int main()
{
	int arr[] = { 9,7,8,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);//任意类型排序都可以排序
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/

//补充void的用法：
/*int main()
{
	int a = 10;
	void* p = &a;

	//void* 类型的指针 可以接受任意类型的地址
	//void* 类型的指针 不能进行解引用操作 要用的话要强制类型转换
	//void* 类型的指针 不能进行+-整数的操作
	return 0;
}
*/


/*//回顾上节课的内容
int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//指针数组
	//int* arr[10];
	//数组指针
	//int (*pa)[10] = &arr;
	//函数指针
	int (*pAdd)(int, int) = Add;
	//int sum = (*pAdd)(2, 3);//函数指针调用
	//int sum = pAdd(2, 3);//两种写法
	//printf("sum = %d", sum);
	//函数指针的数组
	int(*pArr[5])(int, int);
	//指向函数指针数组的指针
	int(*(*ppArr)[5])(int, int);
	return 0;
}*/