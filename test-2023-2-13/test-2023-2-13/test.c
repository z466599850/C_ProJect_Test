#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

union Un
{
	int a;//4 8 4 
	char arr[5];//5 1 8 1 写的是arr[5] 但还是拿char类型来算 就跟写了5个cahr一样
				// 然后5是不是4的倍数 不是 所以加3 他们的字节是 8个字节
				//当算数组的时候算的是他元素的对齐数不是总共有几个元素
	//总结：
	//结构体存在对齐
	//位段为了节省空间不存在对齐
	//枚举也不存在对齐 枚举的大小都是4个字节
	//联合体是存在对齐的
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));//8个字节
	return 0;
}

/*//第一种写法
//int check_sys()
//{
//	int a = 1;
// //返回1，表示校端
// //返回0，表示大端
//	return *(char*)&a;
//}

//第二种写法
int check_sys()
{
	union //匿名结构体 用一次就不用了
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//返回1，表示校端
    //返回0，表示大端
	return u.c;
}
int main()
{
	int a = 1;
	int ret = check_sys();

	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	//int a = 0x11223344;
	//低地址------------------>高地址
	//....[][][][][11][22][33][44][][][][][][][]][][][]...  大端字节序存储模式
	//....[][][][][44][33][22][11][][][][][][][]][][][]...  小端字节序存储模式
	//讨论一个数据，放在内存中的存放的字节顺序
	//大小端字节问题
	//

	return 0;
}*/

/*//联合-联合体-共用体
union Un//联合体的类型 union
{
	char c;
	int i;
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));//猜猜几个字节 答：4个字节 因为他们共用一个地址

	printf("%p\n", &(u));

	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));

	return 0;
}*/


/*//enum Sex//枚举类型
//{
//	//枚举的可能取值-常量
//	MALE = 2,//这不是改 这是给他一个值 他是一个常量他得有一个值吧 就跟 const int num = 100;//一样
//	FEMALE = 4,
//	SECRET = 8
//};

//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};

//我们也可以这样定义，但是不如枚举enum
//c语言的源代码---预编译----编译-----链接------>可执行程序
#define RED 0
#define GREEN 1
#define BLUE 2

int main()
{
	//enum Sex s=MALE;
	//s = FEMALE; //其他的值不能放 规定了可能取值就只能放可能取值

	//enum Color c = 2;//int err 虽然没报错是因为编译器不够严格 如果改成后缀名cpp cpp c++的意思 他就会报错 c++更严格一点
	//enum Color c = BLUE;

	int color = RED;//我们也可以通过#define定义，但是不如枚举enum

	//printf("%d %d %d\n", RED, GREEN, BLUE);//从第一个默认往下依次递增
	//printf("%d %d %d\n", MALE,FEMALE,SECRET);//从第一个默认往下依次递增
	return 0;
}*/


/*struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
	//它是怎么开辟空间的呢 char类型一次只开辟一个字节 一个字节等于8个比特位
	//00000000
	// 放 8-a-b= 1 所以能放下 然后剩下一个 一个不要了
	//00000000
	//开辟一块新的空间 放c  8-5=3 放得下 剩下3个不够放d了
	//00000000
	// 在开辟一块新的空间 放d 8-4=4 剩下4个空间 不要了
	//然后把主函数里的值转换成二进制放到内存里
	// a = 10 = 1010
	// b = 20 = 10100
	// c = 3  = 11
	// d = 4  = 100
	//然后开始放
	//0b0100a010 a b的位置 a只能放3个 所以只能从右向左取3个 所以a 010 b也只能取4个 b 0100
	//000c00011   c的位置 c可以全放 00011 然后自动补齐到够5个
	//0000d0100    d的位置 d可以全放 0100 然后自动补齐到4个
	//然后在内存里是16进制 每四位为一组
	//0010 0010 0000 0011 0000 0100
	// 2     2   0    3     0    4
	//220304 在内存种是220304 nice居然对了！！！！ every good
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	return 0;
}*/


/*//位段 - 二进制位
//位段是为了节省空间用的
struct S
{
	int a : 2;//abcd后面的：数字 指的是你要占几个比特位
	int b : 5;
	int c : 10;
	int d : 30;//位段后面的数字不能大于32
	// 2 + 5 + 10 + 30 = 47个比特位 
	//怎么开辟的呢
	//先开辟4个字节的空间 32个比特位 然后 32 - 2 -5 -10=15 然后后面是30发现不够了 
	//那么上一个开辟的空间剩下的15个字节 不要了 直接去开辟一个新的空间 32 -30 = 2  然后这2字节也不要了 因为已经开辟完了 所以结果是8个字节
};

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));//8
	return 0;
}*/

/*struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}

void Print1(struct S tmp)//传值
{
	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}

void Print2(struct S* ps)//传址 这种传法更好一些 如果怕被改变可以加const
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}
int main()
{
	struct S s = { 0 };

	//传参
	//Init(s);//err
	Init(&s);
	Print1(s);//不好 这种方法不好 如果传的字节过大，会导致性能下降
	Print2(&s);//这种方法好点 因为传的地址不管三七二十一都是4/8

	//在主函数里实现
	//s.a = 100;
	//s.c = 'w';
	//s.d = 3.14;
	//printf("%d\n", s.a);
	return 0;
}*/