#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	align:
	printf("请注意，你的电脑将在一分钟内关机，请输入我是猪，取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto align;
	}
	return 0;
}*/



/*int main()
{
	printf("hello bit\n");
	goto again;
	printf("你好\n");
again:
	printf("hehe\n");//这样写显示的是 hello bit 和 hehe  goto语句其实就相当于跳转
}*/


/*int main()
{
	for (;;)
	{
		for (;;)
		{
			for (;;)
			{
				if (disaster)
				{
					goto error;
				}

			}
		}
	}
error:
	if(disastrer) //这样写呢 利用goto 直接就跳到eooro这里来了 不用goto就得用break跳3次才能跳出来
	return 0;
}*/


//关机程序
/*int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60  -s设置电脑关机 -t 设置关机的时间
	//system() 执行系统命令的 头文件是 #include <stdlib.h>
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp() 头文件是#include <string.h>
	{
		system("shutdown -a");//shutdown -a 取消关机
	}
	else
	{
		goto again;//再给一次机会
	}
	return 0;
}*/




/*void menu()//void 无类型  void的字面意思是“无类型”，void *则为“无类型指针”，void *可以指向任何类型的数据。//menu 菜单
{
	printf("\n**********************************\n");
	printf("*******   1.play    0.exit   *****\n");//play 开始 exit 退出
	printf("**********************************\n");
}

void game()// 无类型 游戏的过程
{
	//第一步1.生成一个随机数
	int ret = 0;
	int guess = 0; //接受猜的数字
	//拿时间戳来设置随机数的生成起始点
	//time_t time(time_t *timer)
	//time_t
	//头文件 #include <time.h>
	
	 ret = rand()%100+1;   //在调用rand的时候请使用srand来设置随机数的一个生成器             
	                      // int ret = 用来接收他的返回值//rand专门用来生成随机数 范围 0 - RAND_MAX-32767
	                     //头文件 #include <stdlib.h> // int rand( void ); void 无类型里面可以不用输入值
	     //任何数%100都是得一个0-99的数，相当于取任何数的后两位，而这里要1-100之间，所以加一
	//printf("%d \n",ret); 这里屏蔽掉是因为已经设置好了 就不需要这个了
	 //第二步 猜数字
	 while (1)
	 {
		 printf("\n请猜数字:>");
		 scanf("%d", &guess);
		 if (guess > ret)
		 {
			 printf("猜大了，马上接近了，加油！\n");
		 }
		 else if (guess < ret)
		 {
			 printf("猜小了，马上接近了，加油！\n");
		 }
		 else
		 {
			 printf("恭喜你，猜对了！\n");
			 break;
		 }
	 }
}

int main()
{

	int input = 0;//input  关键字
	srand((unsigned int)time(NULL));
	                                 //在调用rand的时候请使用srand来设置随机数的一个生成器
	                                 //srand 设置一个随机起点 srand(整型)
	                                //unsigend 强制类型转换  不想产生什么实际效果的时候就加上NULL
	                               //另外：随机数是依照时间来的，所以重新设置时间的话，时间也会重置， 我输入快的话就会造成重复 
	                              //所以执行一次就好，就不会重复，****如果放到循环里面他就会有重复的  这样输入多快都不会重复
	do//至少执行一次
	{
		menu();//菜单函数
		printf("请输入>:");//进入游戏
		scanf("%d", &input);//用scanf输入数字
		switch (input)
		{
		case 1:
			game();//玩游戏的过程
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);//继续循环
	return 0;
}*/


/*int main()
{
	int a = 0;
	int b = 0;
	for (a = 1; a <= 9; a++)
	{

		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-2d ", b, a, a * b);
		}
		printf("\n");
	}
	return 0;
}*/


/*int main()
{
	int a = 0;

	for (a = 1; a <= 9; a++)
	{
		int b = 1;
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%d ", a, b, a * b);
		}
		printf("\n");

	}

	return 0;
}*/


/*int main()
{
	int arr[] ={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i <= sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}*/



/*int main()
{
	int i = 0;
	double sum = 0;
	//float，单精度浮点型，对应%f。
	//double, 双精度浮点型，对应%lf
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;
		flag = -flag;
		
	}
	printf("%lf", sum);
	return 0;
}*/


/*int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
		if (i / 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}*/


/*int main()
{
	int i = 0;
	int count = 0;
	//sqrt - 开平方的数学库函数 头文件是 <math.h>
	for (i = 1; i <= 200; i++)
	{
		//判断i是否为素数
		//素数判断的规则
		//1. 试除法
		//产生2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}	
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount %d\n", count);
	return 0;
}*/



/*int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
			break;
		}
		if (j == i)
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\ncount = %d\n ", count);
	return 0;
}



/*int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n ", count);
	return 0;
}*/




/*int main()
{
	int count = 0;
	int year = 0;
	for (year = 1000; year <= 3000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
		//else if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) 也可以这样写
		{
			printf("%d ", year);
		}
	}
	printf("count = %d\n", count);
	return 0;
}*/



/*int main()
{
	int year = 0;//year 年
	int count = 0;// count 分组
	for (year = 1000; year <= 3000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount = %d\n ", count);
	return 0;
}*/



/*int main()
{
	int a = 0;
	int b = 0;
	int r = 0;
	scanf("%d%d", &a, &b);
	while (a % b !=0 )
	{
		r = a % b;
		a = b;
		b = r;

	}
	printf("%d\n", b);
	return 0;
}*/



/*int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}
	return 0;
}*/




/*int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}

	printf("%d %d %d\n", a, b, c);
	return 0;
}*/