#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	求长方形的面积

	分析：需要知道宽和高，然后两个数相乘
*/

int main()
{
	puts("求长方形的面积。");
	int width, height;
	
	//知道宽和高
	printf("请输入宽：");
	scanf("%d", &width);
	printf("请输入高：");
	scanf("%d", &height);

	//计算面积
	printf("长方形的面积是：%d", width * height);
	return 0;
}


/*int main()
{
	puts("请输入两个整数。");
	int num1, num2;
	printf("整数1：");
	scanf("%d", &num1);
	printf("整数2：");
	scanf("%d", &num2);
	printf("它们的乘积是：%d", num1 * num2);
	return 0;
}*/

/*int main()
{
	puts("天");
	puts("地");
	puts("人");

	return 0;
}*/




/*int main(void)
{
	int no;
	puts("请输入两个整数.");
	printf("请输入你想要的值：");
	scanf("%d", &no);
	printf("您输入的数是：%d", no);
	return 0;
}
*/