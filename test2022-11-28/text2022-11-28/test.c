#include <stdio.h>

//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//ok
//	}
//	printf("a = %d\n", a);//error
//	return 0;
//}

//int main()
//{
//	//未声明的标识符
//	//声明extern 外部符号的 这样哪怕不在一个 文件里 也能跑起来
//	extern int g_val;
//
//
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//
////全局变量在哪里都能使用 只要不在两个括号里就行
//int global = 2020;
//void test()
//{
//	printf("test()--  %d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	{
//		//局部变量的作用域 意思就是 哪个能用 就是作用域
//		int num = 0;
//		printf("num = %d\n", num);
//	}
//
//	return 0;
//}







//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf_s("%d%d", &num1, &num2);;// & 代表取地址符号 //用scanf出不来 要加上_s 才能正常运行 具体为什么我也不知道
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
//	//当局部变量和全局变量的名字相同的时候，局部变量优先显示
//	printf("%d\n", a);
//	
//}
//int num2 = 2; //全局变量-定义在({ })之外的变量 就是不在这两个括号之内
//int main()
//{
//	int num1 = 10; // 局部变量- 定义在代码块({ })内部 就是在这两个括号之内的叫局部变量
//	return 0;
//}
//int main()
//{
//	short age = 20; //向内存申请2个字节=16bit位 用来存放20
//	float weight = 95.6f; //加个f是让系统知道 这是单精度浮点数 向内存申请4个字节，存放小数
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));//
//	printf("%d\n", sizeof(short int));//
//	printf("%d\n", sizeof(int));//
//	printf("%d\n", sizeof(long));//
//	printf("%d\n", sizeof(long long));//
//	printf("%d\n", sizeof(float));//
//	printf("%d\n", sizeof(double));//
//}
//int main()
//{
//	//char ch = 'A'; //内存
//	//printf("%c\n", ch); //%c- 打印字符格式的数据
//	// short int - 短整型
//	// int - 整型
//	//int age = 20;
//	// printf("%d\n", age); //%d -- 打印整型十进制数据
//	//long num = 100;
//	//printf("%d\n", num); 
//	//float f = 5.0;
//	//printf("%f\n", f);
//	//double d = 3.14;
//	//printf("%lf\n", d);
//
//	return 0; 
//
//}
