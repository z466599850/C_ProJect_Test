#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int n = 0;
	printf("请输入一个整数:>");
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

/*int main()
{
	//输入一个整数值，显示该整数值个'*'。每显示5个就进行换行
	int n = 0;
	printf("请输入一个整数:>");
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 5 == 0)
		{
			printf("*\n");
		}
		else
		{
			printf("*");
		}
		
	}
	return 0;
}*/

/*int main()
{
	//编写一段程序，像右边这样显示1到n的整数值的二次方。
	int n = 0;
	printf("请输入一个整数:>");
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		printf("%d的二次方是%d\n",i, i * i);
	}
	return 0;
}*/

/*int main()
{
	//输入一个整数值，显示出该整数值的所有奇数
	int a = 0;
	printf("请输入一个整数:>");
	scanf("%d", &a);
	int i = 0;
	for (i = 1; i <= a; i+=2)
	{
		printf("%d ", i);
	}
	return 0;
}*/

/*int main()
{
	//显示该整数值的所有约数
	int n = 0;
	printf("请输入整数:>");
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d", i);
		}
	}
	return 0;
}*/

/*int main()
{
	//编写一段程序，像右面这样根据输入的整数，循环
	//显示1234567890，显示的位数和输入的整数值相同。
	int no;
	int i;
	printf("请输入一个整数:>");
	scanf("%d", &no);
	for (i = 0; i <= no; i++)
	{
		printf("%d", i % 10);
	}
	return 0;
}*/

/*int main()
{
	//编写一段程序，求1到n的和。n的值从键盘输入

	int n = 0;
	int i = 0;
	int sum = 0;
	printf("请输入一个整数:>");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	printf("1到%d和为%d", i-1,sum);
	return 0;
}/*/

/*int main()
{
	int n = 0;
	int i = 0;
	printf("请输入一个整数:>");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("%d ", i);
	}
	return 0;
}*/

/*int main()
{
	//编写一段程序，读取一个正整数，显示其位数。
	int a = 0;
	int tmp = 0;
	printf("请输入一个整数:>");
	scanf("%d", &a);
	tmp = a;
	int count = 0;
	while (a > 0)
	{
		a /= 10;
		count++;
	}
	printf("%d的位数是:>%d",tmp, count);
	return 0;
}*/
/*int main()
{
	//输入一个非负整数，并进行逆向显示。
	int num = 10;
	do {

		printf("请输入一个整数:>");
		scanf("%d", &num);
		if (num <= 0)
			puts("请不要输入非整数。");

	} while (num <= 0);

	//逆序
	printf("该整数的逆序结果是:>");
	while (num > 0)
	{
		//拿到最后一位，并打印出来
		printf("%d", num % 10);
		//右移一位
		num = num / 10;
	}
	return 0;
}*/

/*int main()
{
	int a = 0;
	printf("请输入整数:>");
	scanf("%d", &a);
	int i = 0;
	for (i = 0; i < a; i++)
	{
		printf("*\n");
	}
	return 0;
}*/

/*int main()
{
	//编写一段程序，使之像右边这样交替显示+ 和 -，总个数
	//等于所输入的正数字。另外，当输入0一下的整数时，则什么也不显示
	int a = 0;
	printf("请输入一个数打印几次\n");
	printf("请输入:>");
	scanf("%d", &a);
	int i = 0;
	while (i < a)
	{
		if (a % 2)
		{
			printf("+");
		}
		else
		{
			printf("-");
		}
		a--;
	}
	return 0;
}*/

/*int main()
{
	//输入规定个数个整数并显示出它们的合计值和平均值
	int i = 0;
	int num = 0;
	int sum = 0;
	int tmp = 0;

	printf("要输入多少个整数:>");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("NO.%d:>", (i + 1));
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("它们的合计值是%d", sum);
	printf("它们的平均值是%.2f", (double)sum / num);
	return 0;
}*/

/*int main()
{
	//编写一段程序，像右面这样显示出小于输入的整数的所有的2乘方
	int a = 0;
	printf("请输入一个整数显示出所有的2乘方\n");
	printf("请输入整数:>");
	scanf("%d", &a);

	int i = 1;
	while (i * 2 < a)
	{
		printf("%d ", i *= 2);
	}
	return 0;
}*/

/*
	编写一段程序，像右面这样按照升序显示出小于输入的值的所有正偶数
*/
/*int main()
{
	//我们要做什么
	//我们需要什么来完成这件事

	需要从键盘上输出一个数 并且 显示出小于这个值的正偶数
	
	int a = 0;
	printf("输入一个数，显示出这个数的所有的正偶数\n");
	printf("请输入一个数:>");
	scanf("%d", &a);
	int i = 0;
	while (i+2 < a)
	{
		printf("%d ", i += 2);
	}
	return 0;
}*/

/*
	编写一段那程序，像右面这样读取两个整数的值，然后计算出它们之间所有整数的和
*/
/*int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	int t = 0;
	puts("请输入两个整数");
	printf("整数a:>");
	scanf("%d", &a);
	printf("整数b:>");
	scanf("%d", &b);
	t = (a > b) ? b : a;
	do
	{
		sum = sum + t;
		t = t + 1;
	} while (t >= ((a > b) ? b : a ) && t <= ((a < b) ? b: a));

	//求和
	printf("大于等于%d小于等于%d的所有整数的和是%d\n", a, b, sum);
	return 0;
}*/

/*int main()
{
	int input = 0;
	do {
		printf("请选择出什么拳【0 石头 / 1 剪刀 / 2 布】\n");
		printf("请选择:>");
		scanf("%d", &input);
	} while (input < 0 || input > 2);
	switch (input)
	{
	case 1:
		printf("您选择的是石头");
		break;
	case 2:
		printf("您选择的是剪刀");
		break;
	case 3:
		printf("您选择的是布");
		break;
	}

	return 0;
}*/


/*
	编写一段程序，像右面这样输入三个整数，如果三
	个数都相等，则显示“三个值都相等”。如果其中
	任意两个值相等，则显示“有两个值相等”。如果
	上述两种情况都不满足，则显示“三个值各不相同”。
*/
/*int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入三个整数：");
	scanf("%d%d%d", &a, &b, &c);

	if (a == b && a == c)
	{
		printf("三个值都相等");
	}
	else if(a == b || a == c)
	{
		printf("有两个值相等");
	}
	else
	{
		printf("三个值各不相同");
	}
	return 0;
}*/

/*int main()
{
	//请输入三个正数
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入三个正数：");
	scanf("%d%d%d", a, b, c);

	//判断
	if (a > b)
	{

	}
	return 0;
}*/

/*int main()
{
	//如果输入的整数值为正，则判断该值的奇偶性并显示
	int num = 0;
	printf("请输入一个整数：");
	scanf("%d", &num);

	//判断
	if (num > 0)
	{
		if (num % 2 == 0)
		{
			printf("该数是偶数");
		}
		else
		{
			printf("该数是奇数");
		}
	}
	else
	{
		printf("您输入的不是正数");
	}
	return 0;
}*/

/*int main()
{
	//编写一段程序，像右面这样输入一个整数值，显示出它的绝对值。
	int a = 0;
	printf("请输入一个整数显示出它的绝对值：");
	scanf("%d", &a);
	printf("绝对值是：%d", abs(a));//abs 求一个数的绝对值 需要引用头文件 math

	return 0;
}*/

/*int main()
{
	int a = 0;
	printf("请输入一个整数：");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		puts("该整数是偶数");
	}
	else
	{
		puts("该整数是奇数");
	}
	return 0;
}*/

/*t main()
{
	int a = 0;
	int b = 0;
	printf("请输入一个整数：");
	scanf("%d", &a);

	if (a % 5 == 0)//这里要等于0 否则 会执行第二条语句
	{
		printf("该整数能被 5 整除");
	}
	else
	{
		printf("该整数不能被 5 整除");
	}
	return 0;
}*/