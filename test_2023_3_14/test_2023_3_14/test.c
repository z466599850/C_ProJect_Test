#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int scan_print()
{
	int tmp = 0;
	do {
		printf("������һ��������:>");
		scanf("%d", &tmp);
		if (tmp < 0)
		{
			printf("�벻Ҫ���������");
		}
	} while (tmp <= 0);
	return tmp;
}

int fall_sn(int num)
{
	int tmp = 0;
	if (num > 0)
	{
		do {
			tmp = tmp * 10 + num % 10;
			num /= 10;
		} while (num > 0);
	}
	return tmp;
}

int main()
{
	int sn = scan_print();

	printf("��������ת���ֵ�ǣ�%d", fall_sn(sn));

	return 0;
}


/*int main()
{
	int i = 0;
	int j = 0;
	int len = 0;
	puts("����һ��ֱ�������·��ĵ���ֱ��������");
	printf("�̱�:>");
	scanf("%d", &len);
	for (i = 0; i <= len; i++)
	{
		for (j = 1; j <= len-i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

/*void put_Right(int i)
{
	while (i-- > 0)
	{
		printf("*");
	}
}

int main()
{
	int i = 0;
	int len = 0;
	puts("����һ��ֱ�������·��ĵ���ֱ��������");
	printf("�̱�:>");
	scanf("%d", &len);
	for (i = 0;i <= len; i++)
	{
		put_Right(i);
		printf("\n");
	}
	return 0;
}*/

/*int Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


int main()
{
	int a = 0;
	int b = 0;
	printf("��������������\n");

	printf("����1:>");
	scanf("%d", &a);

	printf("����2:>");
	scanf("%d", &b);

	printf("�ϴ�������ֵ��:>%d", Max(a, b));
	return 0;
}*/

/*int main(void)
{
	int x, y, z;
	int tensu[2][4][3] = { { {91, 63, 78}, {67, 72, 46},{89, 34, 53}, {32, 54, 34} } ,{ {97, 67, 82}, { 73, 43, 46 }, { 97, 56, 21 }, { 85, 46, 35 } } };


	for (x = 0; x < 2; x++) {
		for (y = 0; y < 4; y++) {
			for (z = 0; z < 3; z++) {
				printf("%4d", tensu[x][y][z]);

			}
			putchar('\n');
		}
	}
	return 0;
}*/

/*int main()
{
	int tensu1[6][1];
	int tensu2[6][1];
	int i, j;
	double x, y;
	x = y = 0;
	int sum[6][1]; //�ܷ�

	puts("�������������ĺ���ѧ�ĳɼ����ÿո�ָ�");
	printf("����:>");
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 1; j++)
		{
			scanf("%d", &tensu1[i][j]);
		}
	}

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("%d ", tensu1[i][j]);
			x += tensu1[i][j];
		}
	}
	printf("\n");
	printf("���ĵ��ܷ���:>%.2f\nƽ������:>%.2f", x, x / 6);
	printf("\n");

	printf("��ѧ:>");
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 1; j++)
		{
			scanf("%d", &tensu2[i][j]);
		}
	}

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("%d ", tensu2[i][j]);
			y += tensu2[i][j];
		}
	}
	printf("\n");
	printf("��ѧ���ܷ���:>%.2f,ƽ����:>%.2f", y, y / 6);

	//���ο��Եķ���֮��
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 1; j++)
		{
			sum[i][j] = tensu1[i][j] + tensu2[i][j];
		}
	}
	printf("\n");

	//��ʾ�ܷ�
	printf("�ܷ�");
	for (i = 0 ; i < 6; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("%d\t", sum[i][j]);
		}
	}
	printf("\n");

	//��ʾƽ����
	printf("ƽ����");
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("%.2f\t", (double)sum[i][j] / 2);
		}
	}
	return 0;
}
*/
/*int main()
{
	int i, j;
	int tensu1[4][3] = { {91,63,87},{85,75,96},{85,95,63},{75,25,98} };
	int tensu2[4][3] = { {96,78,63},{75,26,35} ,{64,85,47},{45,26,35} };
	int sum[4][3];

	//���ο��Եķ���֮��
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum[i][j] = tensu1[i][j] + tensu2[i][j];
		}
	}

	//��ʾ��һ�ο��Եķ���
	puts("��һ�ο��Եķ���");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", tensu1[i][j]);
		}
		printf("\n");
	}

	//��ʾ�ڶ��ο��Եķ���
	puts("�ڶ��ο��Եķ���");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", tensu2[i][j]);
		}
		printf("\n");
	}

	//��ʾ�ܷ�
	puts("���ο��Ե��ܷ�");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", sum[i][j]);
		}
		printf("\n");
	}


	return 0;
}*/