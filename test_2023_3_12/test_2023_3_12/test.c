#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

/*define NUMBER 100
int main()
{
	int i = 0;
	int num = 0;
	int data[NUMBER];
	printf("数据个数:>");
	do {
		scanf("%d", &num);
	} while (num < 0 || num > NUMBER);

	for (i = 0; i < num; i++)
	{
		printf("%d号:>", i + 1);
		scanf("%d", &data[i]);
	}
	
	return 0;
}*/

//输入学生的分数并显示出分布情况
/*#define NUMBER 80 //人数上限
int main()
{
	int i = 0;
	int num = 0;
	int grade[NUMBER];
	int distr[11] = { 0 };
	int j = 0;
	printf("请输入学生人数:>");
	do
	{
		scanf("%d", &num);//实际的人数
		if (num < 1 || num > NUMBER)
			printf("请输入1 - 80 的数:>"); //将输入人数限制到1-80
	} while (num < 1 || num >NUMBER);

	printf("请输入%d人的分数\n", num);

	for (i = 0; i < num; i++)
	{
		printf("%2d号:>", i + 1);
		do 
		{
			scanf("%d", &grade[i]);
			if (grade[i] < 0 || grade[i]>120) //将分数限制在0 - 120
				printf("请输入0 - 120的数\n");
		} while (grade[i] < 0 || grade[i]>120);
		distr[grade[i] / 10]++;
	}

	puts("\n---分布图---");
	printf("      100:");

	for (j = 0; j < distr[10]; j++) //100分
	{
		printf("*");
	}
	printf("\n");

	for (i = 9; i >= 0; i--) //不到100分
	{
		printf("%3d - %3d:", i * 10, i * 10 + 9);
		for (j = 0; j < distr[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

/*#define NUMBER 5 //学生人数

int main()
{
	int i = 0;
	int sum = 0;
	int stu[NUMBER];
	int max, min;//最大值最小值
	printf("请输入5名学生的分数\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%2d号:>", i + 1);
		scanf("%d", &stu[i]);
	}
	min = max = stu[0];
	for (i = 1; i < NUMBER; i++)
	{
		if ( stu[i] > max )
		{
			max = stu[i];
		}
		if (stu[i] < min)
		{
			min = stu[i];
		}
	}
	printf("最高分:>%d\n", max);
	printf("最高分:>%d\n", min);

	return 0;
}*/

/*int main()
{
	int i = 0;
	int sum = 0;
	int stu[NUMBER];

	printf("请输入5名学生的分数\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%2d号:>", i + 1);
		scanf("%d", &stu[i]);
		sum += stu[i];
	}

	printf("总分:%d", sum);
	printf("平均分%.2lf", ((double)sum / NUMBER));

	return 0;
}*/

/*int main()
{
	int i = 0;
	int sum = 0;
	int stu[5];

	printf("请输入5名学生的分数\n");
	for (i = 0; i < 5; i++)
	{
		printf("%2d号:>", i + 1);
		scanf("%d", &stu[i]);
		sum += stu[i];
	}

	printf("总分:%d", sum);
	printf("平均分%.2lf", ((double)sum / 5));
	
	return 0;
}*/


/*int main()
{
	int arr[5];
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d]请输入一个整数:>",i);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}*/

/*int main()
{
	int a = 10;
	int b = 10;
	while(a>=0)
	{
		printf("%d %d\n", a--, ++b);
	}
	
	return 0;
}*/


/*

  *
 ***
*****
   
*/
/*int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	puts("请输入一个整数，打印三角形");
	printf("请输入:>");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <=((i-1)*2+1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/


/*int main()
{
	//生成直角三角形
	int i = 0;
	int j = 0;
	int n = 0;
	puts("生成直角在左下方的等腰直角三角形");
	printf("短边:>");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/




/*

	1 * 1 = 1 1 * 2 = 2 1 * 3

*/
/*int main()
{
	//打印99乘法表
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %-3d ", i, j, i * j);
		}
		printf("\n");
		
	}
	return 0;
}*/