#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	return 0;
}





/*int main()
{
	int a = 10;//4个字节
	int* p = &a;//取地址
	// p是指针变量 int* 是p的类型 &a 是取a的地址
	//printf("%p\n", &a);
	//printf("%p\n", p);
	*p = 20;//* - 解引用操作符
	printf("a = %d\n", a);

	//有一种变量是用来存放地址的-指针变量
	//printf("%p\n", &a);
	return 0;
}*/





/*int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//宏的定义
#define Max(X,Y) (X>Y?X:Y)

int main()
{
	//int a =MAX;
	int a = 10;
	int b = 20;
	//函数
	int max = Max(a, b);
	printf("max = %d\n", max);
	//宏的方式
	max = Max(a, b);
	printf("max = %d\n", max);
	return 0;
}*/






//static 修饰局部变量
//局部变量的生命周期变长
//static 修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法使用了
//static修饰函数
//也是改变了函数的作用域-不准确
//static 修饰函数改变了函数的链接属性
//外部链接属性 ->内部链接属性

//声明外部函数
/*extern int Add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n",sum);
	return 0;
}*/


/*int main()
{
	//extern - 声明外部符号的
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
}*/


/*void test()
{
	static int a = 1;//a 是一个静态的局部变量
	a++;
	printf("%d\n", a);//2 3 4 5 6 
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}*/




/*int main()
{
	//int float;/err
	//typedef - 类型定义 - 类型重定义
	//张三 - 小三
	typedef unsigned int u_int;
	unsigned int num = 20;
	u_int num2 = -20;
	printf("%d\n", num2);
	return 0;
}*/





/*int main()
{
	register int a = 10;//建议把a定义成寄存器 但是放不放 还是编译器决定的
	return 0;
}*/




/*int main()
{
	auto int a = 10;//局部变量-自动变量 auto一般不写
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
	int arr[10] = { 0 };
	arr[4];// - 下标引用操作符
	int a = 10;
	int b = 20;
	int sum = Add(a,b);// - 函数调用操作符
	printf("sum = %d", sum);
	return 0;
}*/








/*int  main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b ? a : b);
	//三目运算符
	//exp1为真，执行exp2，如果exp1为假则执行exp3
	printf("max = %d\n", max);
	return 0;
}*/







/*int main()
{
	//真 - 非0
	//假 - 0
	//&& - 逻辑与 只要里面有一个0 那就是假 除非里面都不是0 那他就会显示真
	//|| - 逻辑或 只要里面有一个真 那就是真 
	int a = 3;
	int b = 5;
	//int c = a && b;
	int c = a || b;
	printf("c = %d\n", c);
	return 0;
}
*/







/*·关系操作符
> 大于
>= 大于等于
< 小于
<= 小于等于
!= 用于测试"不相等"
== 用于测试"相等"
=  "一个等号叫赋值操作符"
*/








/*int main()
{
	int a = 3.14;
	printf("a = %d\n",a);
	return 0;
}*/








/*int main()
{
	int a = 10;
	//int b = a++//后置++ ，先使用，后++;
	//int b = ++a;//前置++ ，先++，后使用
	//int b = a--;//后置--，先使用，后--;
	//int b = --a;//前置-- ，先--，后使用
	//a++ ++a简单的理解： a++是先赋值然后加1 ++a是先加1后赋值
	
	//a-- --a简单的理解： a--是先减1后赋值，--a是先减1后赋值
	printf("a = %d b = %d\n", a, b);
	return 0;
}*/





/*int main()
{
	int a = 0;//4个字节，32个bit位
	int b = ~a;//b是有符号的整型
	// ~ - 按（2进制）位取反
	//00000000000000000000000000000000
	//11111111111111111111111111111111
	//100000000000000000000000000000000
	//原码——>反码——>补码
	// 原码——>反码就是除了符号位第一位不变 其他的都要倒过来——> +1 补码
	// 
	// 补码-1得到反码 反码按位取反 到原码 这个要  补码-->反码-->原码
	// 
	//负数在内存中存储的时候，存储的是二进制的补码
	//11111111111111111111111111111111
	//11111111111111111111111111111110
	//10000000000000000000000000000001
	//开头的第一位是符号位 0是正数 1是负数  符号位不能动哦！！！！！！！！
	printf("%d\n", b);//所以得到的是-1
	return 0;
	//补充： 只要是整数，内存中存储的都是二进制的补码
	// -2   第一位个是1 是符号位 1是负数 相当于 是负号 倒数第二个等于2 所以是 -2
	// 1000000000000000000000000000000000000010 - 原码
	// 1111111111111111111111111111111111111101 - 反码 原码除了符号位不动 其他全部倒过来得到了反码
	// 1111111111111111111111111111111111111110 - 补码 原码+1 得到了补码 
	//计算机存储的是补码 ！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
	//
	//另加补充：
	//12    符号位取反：数值加1（12+1=13），  正变负，即-13；
	//-12   符号位取反：数值加1（-12+1=-11），负变正，即11； 
}*/






/*int main()
{
	int a = 10; //因为已经给a定义为int 整型 整型就是四个字节  这个代码写的就已经是求整型
	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(a));//4  //整型int的字符是4，所以这里输出是4
	printf("%d\n", sizeof(int));//4 //sizeof可以计算一个类型或者变量的大小
	printf("%d\n", sizeof a);//4  因为已经给a定义为int 整型 整型就是四个字节
	printf("%d\n", sizeof(arr[0]));//4 因为已经给arr定义为int 整型 整型就是四个字节
	printf("%d\n", sizeof(arr));//24 计算数组的大小 单位是字节 因为 1个整型代表4个字节 一共个6个数 4*6=24
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//6  因为默认下标从0开始，也就是说1所在的位置是0
}*/



/*int main()
{
	int num1 = 10;
	int num2 = 20;
	if (num1 > num2)
		printf("较大值是：%d\n", num1);
	else
		printf("较大值是：%d\n",num2);
	return 0;
}*/


//int Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//int main()
//{
//   int num1 = 10;
//   int num2 = 20;
//   int max = 0;
//   max = Max(num1, num2);
//   printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abc\0";
//	printf(" % s\n", sizeof(arr));
//	return;
//}

/*int main()
{
	//字符串的结束标志：'\0'
	//"abcdef"; f后面隐藏了一个\0
	// '\0'- 转义字符 - ASCII码值对应的是 0
	// 0 -> 数字0
	// '0' -> ASCII码值对应的是 48
	// 'a' 'b' 'c' '0' '1' '2' '3'
	// EOF -end of file  - 文件结束标志 他的值是-1  这个东西跟字符串没有半毛钱关系
	return 0;
}*/
