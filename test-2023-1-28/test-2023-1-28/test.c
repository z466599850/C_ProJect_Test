#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//设计 计算器
void menu()
{
	printf("*****************************\n");
	printf("****** 1.Add 	2.Sub *******\n");
	printf("*******3.Mul	4.Div *******\n");
	printf("*******	    0.quit    *******\n");
}

int Add(int x,int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}



/*//函数指针数组写法
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			int ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
			break;
		}
		else
		{
			printf("选择错误\n");
			break;
		}
	} while (input);


	return 0;
}*/


//switch 简化版的写法
void Calc(int(*pca)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请选择两个操作数:>");
	scanf_s("%d%d", &x, &y);
	printf("ret = %d\n", pca(x,y));
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1://选择哪个进入哪个 例如：1 进入Calc Add
			Calc(Add);
		case 2:
			Calc(Sub);
		case 3:
			Calc(Mul);
		case 4:
			Calc(Div);
		case 0:
			printf("退出\n");
		default:
			printf("输入错误\n");
		}
	} while (input);
	return 0;
}


/*//switch 语句的写法
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		printf("请选择两个操作数:>");
		scanf("%d%d", &x, &y);
		switch (input)
		{
		case 1:
			printf("%d\n", Add(x, y));
			break;
		case 2:
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("退出\n");
		default:
			printf("输入错误\n");

		}
	} while (input);
	return 0;
}*/


/*void BubbleSort(int arr[], int sz)
{
	//...
}

//预习以下qsort - 可以排序任意类型的数据

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}*/

/*//指向函数指针数组的指针
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10] = { 0 };
	int (* p)[10] = &arr;//取出数组的地址

	int(*pf)(int, int);//函数指针
	int(*pfArr[4])(int, int);//函数指针数组 pfArr是一个数组-函数指针的数组
	//ppfArr是一个指向 [函数指针数组的] 指针
	int(*(*ppfArr)[4])(int, int) = &pfArr;// 指向函数指针数组的指针 注：一般情况下去掉数组名 或变量名就是他的类型
	//
	//ppfArr 是一个数组指针，指针指向的数组有4个元素
	//指向的数组的每个元素的类型是一个函数指针 类型是 int(*)(int,int)
	// 未来能够用到还是两回事
	return 0;
}*/

/*//练习
char* my_strcpy(char* dest, const char* src);


int main()
{
	//根据以上的形参写出以下题目：
	//1.写一个函数指针pf，能够指向my_strcpy
	char* (*pf)(char*,const char*) = my_strcpy;//函数指针,指向的是my_strcpy
	//2.写一个函数指针数组，能够存放4个my_strcpy函数的地址
	char* (*pff[4])(char*, const char*) = {0,0,0,0,};//函数指针数组
	return 0;
}*/

/*//函数指针数组
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int a = 0;
	int b = 0;
	//int(*p)(int, int) = Add;//如果要调用4个函数类型，你该怎么调用呢
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
	int i = 0;
	for (i = 0; i < 4; i++)//使用循环去算出函数指针数组的值
	{
		printf("%d\n", parr[i](2,3));//(x,y)输入值去算出 得出 5  -1  6  0
	}
	return 0;
}*/

/*//补充
int Add(int x, int y)
{
	int z = 0 ;
	return z = x+y;
}

int main()
{
	int a = 0;
	int b = 0;
	int(*pa)(int, int) = Add;
	printf("%d\n", pa(2, 3));
	printf("%d\n", Add(2, 3));
	printf("%d\n", (*pa)(2, 3));//这里的*号 多此一举
	//这三种的写法都一样 等价的
	return 0;
}*/

/*//signal;是一个函数声明，
// signal函数的参数有2个，第一个是int类型，第二个是函数指针，该函数指针指向的函数int 返回类型是void
// signal函数返回类型也是一个函数指针。该函数指针指向的是int，返回类型是void
void(*signal(int, void(*)(int)))(int);

//简化
typedef void(*pfun_t)(int);//typedef 修改函数名 用typedef函数指针是这样修改的哦
pfun_t signal(int, pfun_t);

//其他的是这样修改的
typedef unsigned int unit;
*/


/*//函数指针
//数组指针 - 是指向数组的指针
//函数指针 - 是指向函数的指针 - 存放函数地址的一个指针
void Print(char*str)
{
	printf("%s\n", str);
}
int main()
{
	void (*pa)(char*) = Print;
	(*pa)("hello bit");
	return 0;
}*/

/*int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	//int arr[10] = { 0 };
	//int(*pa)[10] = &arr;	
	//printf("%d\n", Add(a, b));

	//&函数名 和 函数名 都是函数的地址
	//printf("%p\n", &Add);//函数邮有地址
	//printf("%p\n", Add);//跟上面的并没有太大的区别

	int(*pa)(int, int) = Add;//函数指针
	printf("%d ", (*pa)(2, 3));
	return 0;
}*/

/*//思考:当函数的参数为二级指针的时候，可以接收什么参数?
void test(char** p)
{
}

int main()
{
	char c = 'w';
	char* pc = &c;
	char** pcc = &pc;
	char arr[10];
	test(&pc);//ok
	test(pcc);//ok
	test(arr);//指针数组也可以
	return 0;
}*/
/*//二级指针传参
void test(int** p)
{}

int main()
{
	int n = 10;
	int* p = &n;
	int** pp = &p;
	test(pp);//ok
	test(&p);//ok
	return 0;
}*/

/*//思考:当一个函数的参数部分为一级指针的时候，函数能接收什么参数?
void test1(int *p)
{}
void test2(char *p)
{}
int main()
{
	int a = 10;
	int* pa = &a;
	test1(&a);//ok
	test1(pa);//ok

	char  ch = 'w';
	char* pc = &ch;
	test2(&ch);
	test2(pc);
	return 0;
}*/

/*//一级数组传参
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", i);
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//一级指针p，传给函数
	print(p, sz);//传参
	return 0;
}*/

/*//二维数组传参

void test(int arr[3][5])
{}
void test1(int arr[][5])
{}
//void test2(int arr[3][])//err 错误的
//{}
//void test3(int *arr)//err
//{}
//void test4(int* arr[5])//err
//{}
void test5(int (*arr)[5])
{}
//void test6(int **arr)//err
//{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);
	test1(arr);
	//test2(arr);
	//test3(arr);
	//test4(arr);
	test5(arr);
	//test6(arr);
	return 0;
}*/

/*//一维数组传参
void test(int arr[])
{}
void test1(int arr[10])
{}
void test2(int *arr)
{}
void test3(int *arr[2])
{}
void test5(int *arr)
{}
int main()
{
	int arr[10] = { 0 };
	int* arr1[2] = { 0 };
	test(arr);
	test1(arr);
	test2(arr);
	test3(arr1);
	test5(arr1);
	return 0;
}*/

/*int main()
{
	char* ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";//要知道指针是4个字节怎么能存放这么多呢 当然存的是首元素的地址 通过首元素的地址就能找到abcdef
							//abcdef是个常量字符串，当然不允许被修改 加个const 就是不被修改了
	//指针数组 - 存放指针的数组
	int* arr[10];
	char* ch[5];
	//数组指针 - 指向数组
	//int* p3;//整形指针 - 指向整形的指针
	//char* p4;//字符指针 - 指向字符的
	int arr2[5];//数组
	int(*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针 //一般情况下是去掉变量名 就是他的类型
	return 0;
}*/