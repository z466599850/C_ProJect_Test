#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stddef.h>
struct S
{
	char c;
	int i;
	double d;

};

int main()
{
	//offsetof();//offset 偏移量 of谁的偏移量//用来计算结构体成员相对于结构体起始位置的偏移量是几
				//它不是一个函数，是一个宏！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
				//用法：size_t offsetof(结构体名，结构体成员变量的名字) 返回的是偏移量
	printf("%d\n", offsetof(struct S, c));//注：传的是结构体类型名，不是结构体变量名
	printf("%d\n", offsetof(struct S, i));//要引用头文件 #include <stddef.h>
	printf("%d\n", offsetof(struct S, d));
	//偏移量是 0 4 8
	//它不是一个函数，是一个宏！
	//offsetof 可以求出偏移量的
	return 0;
}

/*//一般情况下都设置2的次方数例如：2 4 8 16 这样的数字 不建议设置奇数
//#pragma pack(4)//设置默认对齐数为4 结果是 12 
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//取消设置的默认对齐数

#pragma pack(1)//设置默认对齐数为1 结果是9
struct S
{
	char c1;
	double d;
};
#pragma pack()//取消设置的默认对齐数


int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
	return 0;
}*/



/*//假如我们要算 s1
//假如行是我们的内存
//这是s1的位置 c1 假如也在这里 .第一个成员在与结构体变量偏移量为0的地址处  也就是c1 要在0的位置 从0开始算 
// 
//
//
// 1 a的位置从这开辟4个字节 a的字节和对齐数比较一下 然后放在 整数倍上 假如int 的字节是4 在内存中要放在 4的倍数上面
// 2
// 3
// 4
// 1 c2 的位置 VS默认对齐数是8 
//  然后一看是9个字节 然后这个成员变量里的最大的字节也要和9字节对齐一看最大的字节是4 那9是不是4的倍数吗 不是所以就往后补
//
// 12 是4的倍数 OK 结果是12

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char s2;
	int a;
};
struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c;
	struct S3 s3;
	double d;
};
int main()
{
	struct S1 s1 = { 0 };
	printf("s1 = %d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("s2 = %d\n", sizeof(s2));
	struct S3 s3 = { 0 };
	printf("s3 = %d\n", sizeof(s3));
	struct S4 s4 = { 0 };
	printf("s4 = %d\n", sizeof(s4));
	return 0;
}*/

/*struct T
{
	double weight;
	short age;
};

struct S
{
	char c;
	struct T st;//结构体嵌套
	int a;
	double d;
	char arr[20];
};


int main()
{
	struct S s = { 'c',{55.4,17},100,3.14,"hello bit" };//结构体初始化 + 结构体嵌套初始化
	printf("%c %lf %d %d %lf %s\n", s.c, s.st.weight, s.st.age, s.a, s.d, s.arr);//结构体打印
	return 0;
}*/

/*typedef struct Node //如果去掉Node 那下面的就不能用了自引用的话不建议省略掉Node 注：结构体要想找到同类型结构体的话要用指针
{
	int data;
	struct Node n;//节点存放的不是数字，而是存放下一个节点的地址 err
	struct Node* next;//correct
}Node;//类型名

int main()
{
	struct Node n1;
	Node n2;//只要加了typedef对结构体重命名 然后在分号前面输入名字 就可以用了 这两种写法都可以
	return 0;
}*/





/*//结构体的自引用
//数据结构：数据在内存中存储的结构
//链表
//随意存放1 2 3 4 5 但是他们像一个链子连着起来
struct Node
{
	int data;
	struct Node n;//节点存放的不是数字，而是存放下一个节点的地址 err
	struct Node* next;//correct
};

int main()
{
	sizeof(struct Node);
	return 0;
}*/

/*struct
{
	int a;
	char c;

}sa;//用一次就不能再用了 在用一次结构体的时候可以用到匿名结构体声明

struct
{
	int a;
	char c;

}*psa;
int main()
{
	psa = &sa;
	return 0;
}*/

/*//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量(对象)
//描述学生：属性 - 名字 - 电话- 性别 - 年龄
struct Stu // 结构体声明 结构体名字
{
	char name[20];//名字
	char tele[12];//电话
	char sex[10];
	int age;
	//大括号里的是成员变量
}s4,s5,s6;//全局变量 分号不能丢

struct Stu s3;//全局变量

int main()
{
	//创建的结构体变量
	struct Stu s1;
	struct Stu s2;
	return 0;
}*/

/*//memset - 内存设置
int main()
{
	//char arr[] = "";
	//memset(arr, '#', 10);
	int arr[10] = { 0 };//err
	//40个字节
	//01 01 01 01 01 01 01 01 01 01  00 00 00 00 00 00...
	// 01 01 01 01     01 01 01 01   01 01 00 00
	//16进制的哦
	memset(arr, 1, 10);//错了改的是10个字节
	return 0;
}*/

/*int main()
{
	//01 00 00 00 02 00 00 00 03 00 00 00
	//01 00 00 00 02 00 00 00 05 00 00 00  比较9的话是-1 因为是比较的是字节 9个字节刚好到了03 05
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,5,4,3 };

	int ret = memcmp(arr1, arr2, 9);//memcmp(比较谁，比较谁，比较的字节的个数)
	printf("%d\n", ret);
	return 0;
}*/

/*
//注意：不要用错了哦
//模拟实现memmove
//memcpy不重叠拷贝
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//模拟实现memmove
//memmove重叠拷贝
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//if (dest < src)
	//{
	//	//前->后
	//	while (count--)
	//	{
	//		*(char*)dest = *(char*)src;
	//			++(char*)dest;
	//			++(char*)src;
	//	}
	//}
	//else
	//{
	//	//后->前
	//	while (count--)
	//	{
	//		*((char*)dest + count) = *((char*)src + count);
	//	}
	//}

	//其他的判断方式
	//库里面采用的是这种方式
	if (dest<src||dest>(char*)src+count)
	{
		//前->后
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//后->前
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}

int main()
{
	//不重叠拷贝
	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[10] = { 0 };
	//arr1的数字拷贝到arr2中
	//my_memcpy(arr2, arr1, sizeof(arr1));

	//重叠拷贝
	//             1 2 1 2 3 4 5 8 9 10
	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
	//my_memcpy不能胜任重叠拷贝的
	//my_memcpy(arr3 + 2, arr3, 20);
	// 
	//memmove可以胜任内存的重叠拷贝
	//memmove(arr3 + 2, arr3, 20);
	//C语言标准说：memcpy函数可以拷贝不重叠的就可以了
	//当下发现：vs2022环境下的memcpy可以处理重叠拷贝
	//memcpy(arr3 + 2, arr3, 20);//虽然这个也可以但是并不保证其他编译器下可以使用

	//模拟实现memmove 重叠拷贝
	my_memmove(arr3 + 2, arr3, 20);
	//打印
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}*/