#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

/*
	编写一段程序，像右面那样读取表示身高的整数
	值，显示出标准体重的实数值。标准体重根据公
	式(身高-100)x0.9进行计算，所得结果保留一位小数。
*/

int main()
{
	int height;
	
	printf("请输入您的身高：");
	scanf("%d", &height);

;
	printf("您的标准体重是：%.1f公斤", ((height - 100) * 0.9));
	return 0;
}

/*int main()
{
	double x, y;
	puts("请输入两个数");
	printf("实数vx：");
	scanf("%lf", &x);
	printf("实数vy：");
	scanf("%lf", &y);

	printf("vx + vy = %f\n", x + y);
	printf("vx - vy = %f\n", x - y);
	printf("vx * vy = %f\n", x * y);
	printf("vx / vy = %f\n", x / y);
	return 0;
}*/

/*int main()
{
	//编写一段程序，像右面那样读取两个整数，然后显示出前者是后者的百分之几。
	int x, y;
	puts("请输入两个整数。");
	printf("整数x：");
	scanf("%d", &x);
	printf("整数y：");
	scanf("%d", &y);
	printf("x的值是y的%d%%", x * 100 / y);

	return 0;
}*/

/*int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数。\n");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);
	printf("%d / %d = %d 余 %d ", a,b,a / b, a % b);
	return 0;
}*/

/*int main()
{
	int num = 0;
	printf("请输入一个整数：");
	scanf("%d", &num);
	printf("最后一位是：%d", num % 10);
	return 0;
}*/

/*int main()
{
	int vx, vy;
	printf("请输入两个整数\n");
	printf("整数vx：");
	scanf("%d", &vx);
	printf("整数vy：");
	scanf("%d", &vy);

	//计算
	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx / vy = %d\n", vx / vy);
	printf("vx %% vy = %d\n", vx % vy);//只想输出%%的时候，就必须写成%% 否则不会显示%
	return 0;
}*/