#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	*p = 20;
	return 0;
	//这个代码不行的哦
	//这个房子已经还给卖房的人了，已经不能再住进去了
}

/*int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		//当指针指向的范围超出数组arr的范围时，p就是野指针
		p++;
	}
	return 0;
}*/

/*int main()
{
	int a;//局部变量不初始化，默认是随机值
	int* p;//局部的指针变量，就被初始化随机值
	*p= 20;//就是在系统中随机找一个地址把他的值改成20; 称为 野指针
	return 0;
}*/

/*int main()
{
	int arr[10] = { 0 };
	//int* p = arr;//数组名-首元素的地址//这个是以4个字节4个字节的去改
	char* p = arr;//这个时候是一个字节一个字节的去改
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}*/

/*int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);//地址加了4

	printf("%p\n", pc);
	printf("%p\n", pc+1);//地址加了1
	return 0;
	//指针类型决定了:指针走一步走多远(指针的步长)
		//int* p; p + 1 -- > 4
		//char* p; p + 1-- > 1
		//double* p; p + 1-- > 8
}*/

/*int main()
{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));
	//因为我的是64位电脑所以打印出来的是8
	//如果是32位的电脑打印出来的就是4

	int a = 0x11223344;
	//int* pa = &a;
	//*pa = 0;
	char* pc = &a;
	*pc = 0;
	//printf("%p\n", pa);
	printf("%p\n", pc);
	return 0;
	//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
	//int* p; p能够访问4个字节
	//char* p; "p 能够访问1个字节
	//double* p;*p能够访问8个字节
}*/


/*int main()
{
	int a = 10;//在内存中开辟一块空间
	 int* p = &a;//指针变量 指针：是存放变量地址的变量。如int* p =&a; 变量p的类型是int*，p的值是&a,也就是变量a的地址。
	 //这里我们对变量a，取出它的地址，可以使用&操作符
	 //将a的地址存放在p变量中，p就是一个指针变量
	return 0;
}*/

/*int main()
{
	char a = 3;
	//00000000000000000000000000000011
	//00000011 - a  为什么取8位呢 因为char类型是1个字节 1个字节等于8个比特位 所以要截断
	char b = 127;
	//00000000000000000000000001111111
	//01111111 - b 同上

	//a和b如何相加
	//00000000000000000000000000000011 - a
	//00000000000000000000000001111111 - b
	// +3
	//00000000000000000000000010000010 - c
	char c = a + b;
	//10000010 - c
	//11111111111111111111111110000010 - 补码
	//11111111111111111111111110000011 - 反码
	//10000000000000000000000001111100 - 原码
	//-126 存储的是原码
	printf("%d", c);
	return 0;
}*/


/*
//struct 与 typedef 分开定义，如下面的代码所示：
typedef struct tagNode* pNode;//pNode是结构体别名
struct tagNode
{
	char* pItem;
	pNode pNext;
};*/

/*//实例2
typedef struct stu //typedef 来修饰结构体加了这个然后定义一个别名就可以像 int 和 double 那样直接使用 Stu 定义变量
{
	char* name;
	int num;
	int age;
	char group;
	float score;
}Stu;//这里的Stu是结构体别名

int main() {
	//实例1的声明 
	//struct stu stu1;
	//实例2的声明 
	Stu stu1;
	Stu stu2;
	stu1.name = "elephant111";
	stu1.num = 12;
	stu1.age = 18;
	stu1.group = 'A';
	stu1.score = 137.0;
	printf("%s的学号是%d,年龄是%d,在%c组,今年的成绩是%.lf!\n",
		stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);
	stu2.name = "elephant222";
	stu2.num = 13;
	stu2.age = 19;
	stu2.group = 'B';
	stu2.score = 136.0;
	printf("%s的学号是%d,年龄是%d,在%c组,今年的成绩是%.lf!\n",
		stu2.name, stu2.num, stu2.age, stu2.group, stu2.score);
	return 0;
}*/
/*/实例1
struct stu {
	char* name;
	int num;
	int age;
	char group;
	float score;
};

int main() {
	//实例1
	struct stu stu1;
	stu1.name = "王令";
	stu1.num = 12;
	stu1.age = 18;
	stu1.group = 'A';
	stu1.score = 137.0;
	printf("%s的学号是%d,年龄是%d,在%c组,今年的成绩是%.lf!\n",
		stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);
	return 0;
}*/

/*/学生
//int float 是类型
//
//创建一个结构体类型 - struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	//使用struct stu这个类型创建了一个学生对象s1，并初始化
	struct Stu s1  = { "张三",17,"2022070111" };//s1 是变量
	struct Stu* ps = &s1;
	printf("%s\n", (ps->name));
	printf("%d\n", (ps->age));
	printf("%s\n", (ps->id));

	//printf("%s\n", (*ps).name);
	//printf("%d\n", (*ps).age);
	 
	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);
	//结构体变量.成员名
	return 0;
}*/

/*int get_max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int a = 10;
	int b = 20;
	//调用函数的时候的()就是函数调用操作符
	int max = get_max(a, b);
	printf("%d", max);
	return 0;
}*/

/*int main()
{
	//操作数：一个数组名 + 一个索引值 a是数组名 [索引值]
	int a[10] = { 0 };//创建一个数组
	a[4] = 10;//a访问第五个元素 [他的下标是4] 然后赋值10
	return 0;
}*/


/*int main()
{
	
	int a = 10;
	int b = 2;
	int c = (a > b, a = a + b, a, b = a + 1);//13 逗号表达式从左往右依次计算，结果是最后一个表达式
	printf("c = %d", c);
	return 0;
	//请问输出的结果是什么？
}*/


/*int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;

	max = (a > b ? a : b);//a如果大于b 条件为真执行a 条件为假执行b 
}*/

/*int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//逻辑与&& 结果为什么是1234呢 因为a++是 后置++ 先使用后加加，先使用是 = 0的，
						 //逻辑与只要有一个为假，那后面的都不执行，再回来a++那就是a=1；
							//如果左边为假，右边的就不要算了
	i = a++ || ++b || d++;
							//逻辑|| 结果为什么是 1 3 3 4呢 因为||只要有一个是真 那么后面就不执行了 
							//左边如果为真，右边的那就不要算了
	printf("a = %d b = %d c = %d d = %d ", a, b, c, d);//逻辑与&&是1 2 3 4 逻辑或是||是1 3 3 4
	return 0;
	//程序的输出结果是什么？
}*/

/*int main()
{
	int a = (int)3.14;//强制类型转换
	printf("%d", a);
	return 0;
}*/

/*int main()
{

	int a = 10;
	//printf("%d\n",++a);//前置++，先++，后使用 意思是 先加上 在去打印
	printf("%d\n", a++);//后置++，先使用，再++ 意思是 先打印 在加++
	return 0;
}*/

/*int main()
{
	int a = 11;
	a = a | (1 << 2);
	printf("%d\n", a);//15
	a = a & (~(1 << 2));
	printf("%d\n", a);//11
	//00000000000000000000000000000001
	//11111111111111111111111111111011
	//00000000000000000000000000001111
	//00000000000000000000000000001011
	// 
	//00000000000000000000000000001011
	//00000000000000000000000000000100
	//1<<2;
	//00000000000000000000000000000001
	// 
	//00000000000000000000000000001011
	//int a = 0;
	//printf("%d\n", a);
	//  // ~ 按(2进制)位取反
	// //00000000000000000000000000000000
	////11111111111111111111111111111111 - 补码
	////11111111111111111111111111111110 - 反码
	////10000000000000000000000000000001 - 源码
	////-1
	//printf("%d\n", ~a);// -1

}*/



/*int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));//这里面的a+5是一个摆设 他是不会去算的 2
	printf("%d\n", s);//0
	//char b = 'w';
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof a);//变量的括号可以去掉 类型不行
	//printf("%d\n", sizeof(int));

	//printf("%d\n", sizeof(b));
	//printf("%d\n", sizeof(char));

	//printf("%d\n", sizeof(arr));//10*4 = 40
	//printf("%d\n", sizeof(int [10]));


	return 0;
}*/