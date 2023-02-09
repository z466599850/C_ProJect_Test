#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int ch = 0;
	//ctrl + z 就结束了
	//EOF  end of file -> -1 他等于的是-1
	while ((ch = getchar()) != EOF)//getchar 输入
	{
		putchar(ch);//putchar 输出s
		//另外 他显示的是ascll码
	}
	return 0;
}



/*int main()
{
	int i = 0;
	while (i <= 10)
	{
		if (i == 5)
		continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}*/

/*int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf(" m = %d,n = %d", m,n);
	return 0;
}*/



/*int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}*/






/*int main()
{
	int day = 0;
	scanf("%d", &day);//因为day一开始是0，scanf是键盘输入函数，
	                 //取地址之后可以在地址内 存入键盘输入值，然后再判断输出内容
	switch (day)
	{
	case 1://case 决定入口
		printf("星期一\n");
		break;//break 决定出口
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
	case 6:
		break;
		printf("星期六\n");
	case 7:
		printf("星期天\n");
		break;
	default:
		printf("输入错过\n");
	}

	return 0;
}*/




/*int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d ", i);
		i += 2;
	}
	//while (i <= 100)
	//{
	//	if (i % 2 != 0)
	//	printf("%d ", i);
	//	i++;
	//}
	//return 0;
}*/



/*int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
	        printf("hehe\n");
	else
			printf("haha\n");    //代码风格很重要  else和离着最近的if的进行匹配
	return 0;
}*/






/*int main()
{
	int age = 10;
	if (age < 18)
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}
	else
	{
    if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年");
	else
		printf("长生不老");
	}
	//if (age < 18)
	//	printf("未成年\n");
	//else
	//	printf("成年\n");


	//if (age < 19)
	//	printf("未成年\n");
	return 0;
}*/




/*int main()
{
	int a = 10;
	;//是语句-空语句
	return 0;
}*/









////结构体
////char int double ....
////人 =3.14
////'w'
////书 - 复杂对象
////
////名字+身高+年龄+身份号码+....
////书名+作者+出版社+定价+书号....
////复杂对象 -- 结构体- 我们自己创造出来的
//
////创建一个结构体类型
//struct Book//Yo是随便取得名字
//{
//	char name[20];//C语言程序设计 20是数组中的元素个数 最长20个字的名称
//	//20是数组的大小，具体映射可命名的书名的长度。
//	short price;//55
//};
//
//int main()
//{
//	//利用结构体类型-创建一个该类型的结果体变量
//	struct Book b1 = { "C语言程序设计",55 };// struct 是结果体关键字  o是随便取得变量名 
//	strcpy(b1.name,"c++");//改名字
//	//strcpy-string copy -字符串拷贝-库函数-需要引用头文件 #include<string.h>
//	printf("%s\n", b1.name);
//	////b1.price = 15;//改名字
//	// //printf("修改后的价格：%d\n", b1.price);
//	// // 变量的定义就是可以随便改，他是可变的
//	
//
//	//struct Book* pb = &b1;
//	//利用pb打印出我的书名和价格
//	//.       结构体变量.成员
//	//->      结构体指针->成员
//
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	/*pintf("%s\n", (*pb).name)
//	*和.都是运算符有优先级，.的优先级非常高，考虑顺序,加括号确保先*再.
//	printf("%d\n",(*pb).price)*/
//
//	//printf("书名：%s\n", b1.name);//%s取得是字符串
//	//%s  对应的是打印数组，就和p，d 一样对应打印的东西不同而已
//	//printf("价格：%d\n", b1.price);
//	//b1.price = 15;
//	// 变量的定义就是可以随便改，他是可变的
//	//printf("修改后的价格：%d\n", b1.price);
//	return 0;
//}













/*int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));

	//double d = 3.14;
	//double* pd = &d;//32-4   64-8
	//printf("%d\n", sizeof(pd));
	//*pd = 5.5;
	//printf("%d\n", d);
	//printf("%d\n", *pd);

	//int a = 10;//申请了4个字节的空间
	//printf("%p\n", &a);
	//int* p = &a;//p是一个变量-指针变量
	//printf("%p\n", p);
	//*p = 20;//* - 解引用操作符/间接访问操作符
	//printf("a = %d\n",a);
	return 0;
}*/

