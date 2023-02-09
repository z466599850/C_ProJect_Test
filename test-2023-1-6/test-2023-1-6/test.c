#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof 计算的变量所占内存空间的大小
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));//4

	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));//1

	printf("%d\n", sizeof(p));//8 因为我是64位的电脑 所以是8  要是改成32位 就是 4了
	printf("%d\n", sizeof(char*));//8 因为我是64位的电脑 所以是8  要是改成32位 就是 4了

	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int [10]));//40 可以通过类型算大小 也可以通过变量算大小
}



/*int main()
{
	int a = 10;
	int* p = &a;//取地址操作符 一般和指针配合使用
	// p的指针变量
	*p = 20;//解引用操作符 找到他的位置 可以改他的值 用他的值 
	return 0;
}*/


/*int main()
{
	int a = -5; // - 负值
	a = -a;
	int b = 5;
	b= 5;

	return 0;
}*/

/*int main()
{
	int a = 0;
	if (a)
	{
		printf("呵呵\n");
	}
	if (!a)
	{
		printf("呵呵\n");
	}
	//printf("%d\n", !a);//把真变成假，假变成真
	return 0;
}*/

/*int main()
{
	int a = 10;
	a = a + 2;
	a += 2;//复合赋值符

	a = a >> 1;
	a >>= 1;

	a = a & 1;
	a &= 1;
	//都是等价的
	return 0;
}*/

/*int main()
{
	int i = 0;
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	printf("%d", count);


	//int num = 0;
	//int count = 0;
	//scanf("%d", &num);
	//while (num)
	//{
	//	if (num % 2 == 1)
	//	{
	//		count++;
	//		num = num / 2;
	//	}
	//}
	//printf("%d\n", count);
	return 0;
}*/


/*int main()
{
	int a = 3;
	int b = 5;
	int sum = 0;//临时变量
	printf("before：a=%d b=%d\n",a,b);
	/*sum = a;
	a = b;
	b = sum;*/

	//加减法-可能会溢出
	/*a = a + b;
	b = a - b;
	a = a - b;*/

	//异或的方法
	/*a = a ^ b;//a = 6
	b = a ^ b;//b = 3
	a = a ^ b;//a = 5
	printf("after： a=%d b=%d\n",a,b);
	return 0;
}*/



/*int main()
{
	//& 按2进制与
	/*int a = 3;
	int b = 5;
	int c = a & b;//只有两个相等的1才是 1
	//00000000000000000000000000000000011
	//00000000000000000000000000000000101
	// 按位与：
	//00000000000000000000000000000000001
	printf("%d\n", c);*/

	// | - 按2进制或
	/*int a = 3;
	int b = 5;
	int c = a | b;//只要有一个1 那就是 1
	printf("%d\n", c);
	//00000000000000000000000000000000011
	//00000000000000000000000000000000101
	//00000000000000000000000000000000111*/

	//按2进制位异或
/*	int a = 3;
	int b = 5;
	int c = a ^ b;//相同为0，相异为1 相同的都是0
	printf("%d\n", c);
	//00000000000000000000000000000000011
	//00000000000000000000000000000000101
	//00000000000000000000000000000000110
	return 0;
}*/



/*int main()
{
	int a = 5;
	int b = a << 1;
	//00000000000000000000000000000000101
	//左移操作符：左边丢弃，右边补0	 向左移动有×2的效果
	printf("%d", b);
	return 0;
}*/

/*int main()
{
	int a = -1;
	// 100000000000000000000000000000001
	//整数的二进制有，源码，反码，补码
	//存储到内存中的是 补码 重点！！！！！！！！！
	// 100000000000000000000000000000001 - 源码
	// 111111111111111111111111111111110 - 反码 符号位不变 其他位按位取反
	// 111111111111111111111111111111111 - 补码 反码加一 得到反码
	//算术右移 补码向右移一位 右边丢弃一个 左边补原符号位 所以还是原来的数就是 -1
	int b = a >> 1;
	printf("a = %d", b);// -1
	return 0;
}*/




/*int main()
{
	int a = 16;
	a >> 1;
	//>> 右移操作符 ：有 除的效果
	//移动的是二进制位 
	//0000000000000000000000000000000010000 
	//a空间 向右移动一位
	//1.算术右移
	//  右边丢弃，左边补原符号位 （0 正数 1 负数）
	// 
	//2.逻辑右移
	//  右边丢弃，左边补0
	int b = a >> 1;
	printf("a = %d", b);
	return 0;
}*/

/*int main()
{
	int a = 5 / 2;//商2余1   2
	int b = 5 % 2;//余1      1
	double c = 5 / 2.0;//浮点数
	//double d = 5 % 2.0;//这里不行的 取模两个操作数必须为整数，返回的是整除之后的余数
	printf("a = %d\nb = %d\nc = %lf\n", a,b,c);
	return 0;
}*/