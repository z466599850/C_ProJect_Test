#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

/*define NUMBER 100
int main()
{
	int i = 0;
	int num = 0;
	int data[NUMBER];
	printf("���ݸ���:>");
	do {
		scanf("%d", &num);
	} while (num < 0 || num > NUMBER);

	for (i = 0; i < num; i++)
	{
		printf("%d��:>", i + 1);
		scanf("%d", &data[i]);
	}
	
	return 0;
}*/

//����ѧ���ķ�������ʾ���ֲ����
/*#define NUMBER 80 //��������
int main()
{
	int i = 0;
	int num = 0;
	int grade[NUMBER];
	int distr[11] = { 0 };
	int j = 0;
	printf("������ѧ������:>");
	do
	{
		scanf("%d", &num);//ʵ�ʵ�����
		if (num < 1 || num > NUMBER)
			printf("������1 - 80 ����:>"); //�������������Ƶ�1-80
	} while (num < 1 || num >NUMBER);

	printf("������%d�˵ķ���\n", num);

	for (i = 0; i < num; i++)
	{
		printf("%2d��:>", i + 1);
		do 
		{
			scanf("%d", &grade[i]);
			if (grade[i] < 0 || grade[i]>120) //������������0 - 120
				printf("������0 - 120����\n");
		} while (grade[i] < 0 || grade[i]>120);
		distr[grade[i] / 10]++;
	}

	puts("\n---�ֲ�ͼ---");
	printf("      100:");

	for (j = 0; j < distr[10]; j++) //100��
	{
		printf("*");
	}
	printf("\n");

	for (i = 9; i >= 0; i--) //����100��
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

/*#define NUMBER 5 //ѧ������

int main()
{
	int i = 0;
	int sum = 0;
	int stu[NUMBER];
	int max, min;//���ֵ��Сֵ
	printf("������5��ѧ���ķ���\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%2d��:>", i + 1);
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
	printf("��߷�:>%d\n", max);
	printf("��߷�:>%d\n", min);

	return 0;
}*/

/*int main()
{
	int i = 0;
	int sum = 0;
	int stu[NUMBER];

	printf("������5��ѧ���ķ���\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%2d��:>", i + 1);
		scanf("%d", &stu[i]);
		sum += stu[i];
	}

	printf("�ܷ�:%d", sum);
	printf("ƽ����%.2lf", ((double)sum / NUMBER));

	return 0;
}*/

/*int main()
{
	int i = 0;
	int sum = 0;
	int stu[5];

	printf("������5��ѧ���ķ���\n");
	for (i = 0; i < 5; i++)
	{
		printf("%2d��:>", i + 1);
		scanf("%d", &stu[i]);
		sum += stu[i];
	}

	printf("�ܷ�:%d", sum);
	printf("ƽ����%.2lf", ((double)sum / 5));
	
	return 0;
}*/


/*int main()
{
	int arr[5];
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d]������һ������:>",i);
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
	puts("������һ����������ӡ������");
	printf("������:>");
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
	//����ֱ��������
	int i = 0;
	int j = 0;
	int n = 0;
	puts("����ֱ�������·��ĵ���ֱ��������");
	printf("�̱�:>");
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
	//��ӡ99�˷���
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