#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Stu//typedef 重新起一个名字吧 
{
	//成员变量
	char name[20];//存放名字
	short age;//年龄
	char tele[12];//电话
	char sex[5];//性别
}Stu;//通过typedef 起了一个叫Stu的类型名字

void Print1(Stu tmp)//结构体传参
{
	printf("name：%s\n", tmp.name);//通过 点 访问
	printf("age：%d\n", tmp.age);
	printf("tele：%s\n", tmp.tele);
	printf("sex：%s\n", tmp.sex);
}

void Pintf2(Stu* ps)//结构体指针传参
{
	printf("naem：%s\n", ps->name);//通过箭头-> 访问 箭头是针对结构体指针的
	printf("age：%d\n", ps->age);
	printf("tele：%s\n", ps->tele);
	printf("sex：%s\n", ps->sex);
}
int main()
{
	Stu s = { "张三",17,"15233253654","男" };//结构体初始化
	//打印结构体数据
	//问：Print1 和Print2 哪个更好？
	//答案：首选Print2。原因：
	//Print1：浪费内存也耗时间 形参是实参的一个临时拷贝 如果实参是200字节的话 还要拷贝过去 那也太浪费内存了
	//Print2：省内存，传的是地址 一个地址无非就是 4 个字节或者8个字节 32平台4个字节 64平台8个字节 无论结构体多大我只传4/8个字节
	//		  这里就是指针的意义----节省空间。
	//	另外：2可以直接操作原本结构体，而1不能完成这项任务
	//如果需要嵌套的话 嵌套：指针-->嵌套的结构体.成员变量
	

	//然后github可以上传代码了吗？  ！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！

	Print1(s);//结构体传参
	Pintf2(&s);//结构体址传参
	return 0;
}

/*struct S
{
	int a;
	char c;//char 是字符 用''   char [] 是字符串 用""  
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;//结构体嵌套使用
	char* pc;
};

int main()
{
	char arr[] = "hello bit\n";
	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};//结构体嵌套初始化
	printf("%s\n", t.ch);//hehe
	printf("%d\n",t.s.a);//100
	printf("%c\n",t.s.c);//w
	printf("%s\n", t.s.arr);//hello world
	printf("%lf\n", t.s.d);//3.14
	printf("%s\n",t.pc);//hello bit
	return 0;
}*/

/*typedef struct Stu
{
	//成员变量
	char name[20];//存放名字
	short age;//年龄
	char tele[12];//电话
	char sex[5];//性别
}Stu;
int main()
{
	Stu s1 = { "张三",17,"15203334789","男" };//结构体变量初始化
	struct Stu s2 = {"李四",30,"15503332589","女"};//结构体变量
	return 0;
}*/

/*//结构体变量的定义和初始化

struct Point
{
	int x;
	int y;
}p1;				//声明类型的同时定义变量p1


int main()
{
	//struct Point p2;	//定义结构体变量p2
	struct Point p3 = { 1,2 }; //初始化：定义变量的时候赋初始值
	return 0;
}*/

//描述一个学生-一些数据
//名字
//年龄
//电话
//性别

////struct 结构体关键字 stu - 结构体标签 可以替换假如要描述一个学生可以用student   struct stu - 结构体类型  要创建结构体变量  要在main中创建结构体变量
//struct Stu//定义一个结构体类型 //定义结构体类型的时候不占用内存的空间 创建结构体变量的时候才去内存中申请了空间
//{
//	//成员变量
//	char name[20];//存放名字
//	short age;//年龄
// 	char tele[12];//电话
//	char sex[5];//性别
//}s1,s2,s3;//s1,s2,s3 是三个全局的结构体变量	称变量列表 //变量列表 //这个分号不能丢 不可少 //因为他是结构体声明 结构体声明是一条语句 所以要加个分号
//		  //尽量少使用全局变量，如果迫不得已的话可以使用

//struct 结构体关键字 stu - 结构体标签 可以替换假如要描述一个学生可以用student   struct stu - 结构体类型  要创建结构体变量  要在main中创建结构体变量
// 
//---------------------------------------------------------分割线---------------------------------------------------------

//总结：上面分号前面 是s1,s2,s3 是直接创建的结构体变量
//		下面分号前面 是Stu 是直接把结构体类型struct Stu 改了一下名字 改成了 Stu  对类型进行重命名 
//---------------------------------------------------------分割线---------------------------------------------------------

//加强一点结构体的知识：以后并用以下的知识 上面那个 和下面这个有很大的区别 用下面这个的哦
/*typedef struct Stu//typedef 重新给这个结构体类型起一个名字写到大括号的分号前面 //简单的理解就算把struct Stu改成了Stu
{
	//成员变量
	char name[20];//存放名字
	short age;//年龄
	char tele[12];//电话
	char sex[5];//性别
}Stu;//现在可以通过stu去创建变量了 
	//也就是相当于把结构体类型重新起了一个名字 并用这个名字创建变量 不重新起名字的话就得 struct Stu s创建结构体变量。 重新起名字就可以用 Stu s1 创建结构体变量
	//简单的理解就算把struct Stu改成了Stu
int main()
{
	struct Stu s1;//s 是创建出来的结构体变量 也是局部变量 //定义结构体类型的时候不占用内存的空间 创建结构体变量的时候才去内存中申请了空间
				  //简单的理解就算把struct Stu改成了Stu
	Stu s2;//通过typedef重新起了一个名字叫Stu，就可以通过这个名字起一个变量
	return 0;
}*/

/*//递归实现n的k次方
double Pow(int n, int k)
{
	if (k < 0)
	{
		return 1.0 / (Pow(n, -k));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}
int main()
{

	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;
}*/

/*int  DigitSum(unsigned int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main()
{
	unsigned int n = 0;
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("ret = %d\n", ret);
}*/

/*//题目：打印乘法口诀表
//要求：实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9*9扣具表，输出12，输出12*12的乘法口诀表
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d", i, j, i * j);//负号是左对齐，3是打印三位，不足三位的用空格代替
		}
		printf("\n");
	}	
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}*/
/*//题目：使用指针打印数组内容
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
}*/

/*//题目：获取一个整数序列中所有的偶数维和奇数位，分别打印出二进制序列
void print(int m)
{
	int i = 0;
	printf("奇数位:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);//每次调用m就会重置
	}
	printf("\n");
	printf("偶数位:\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
	return 0;
}*/
/*//求二进制中不同位的个数
int get_diff_bit(int m, int n)
{
	int count = 0;
	 int tmp = m ^ n; 
	 while (tmp)
	 {
		tmp = tmp & (tmp - 1);
		count++;
	 }
	return count;

}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = get_diff_bit(m,n);
	printf("count = %d\n", count);
	return 0;
}*/
/*////统计二进制中1的个数
////第一种算法
//int count_bit_one(unsigned int n)//加入unsigned 是因为如果填 -1的话就会程序错误，这个时候改成无符号就行
//{
//	int count = 0;
//	while (n)//进入循环
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int count_bit_one(int n)//第二种算法
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//谷歌的一道面试题
int count_bit_one(int n)//第三种算法 这种写法是最经典的写法
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
//n = n&(n-1)
//n
//13
//1101 n
//1100 n-1
//1100 n
//1011 n-1
//0111 n-1
//0000 n    每次减一都会消失一个0
int main()
{
	//统计二进制中1的个数
	//一个数真正在内存中存储的是补码
	int a = 0;
	scanf("%d", &a);
	//写一个函数求a的二进制(补码)表示中有几个1
	int count = count_bit_one(a);
	//13
	//00000000000000000000000000001101
	printf("count = %d\n", count);
	//system("pause");//system库函数- 执行系统命令 - pause(暂停)
	return 0;
}*/