#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int n = 0;
	printf("������һ������:>");
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
	//����һ������ֵ����ʾ������ֵ��'*'��ÿ��ʾ5���ͽ��л���
	int n = 0;
	printf("������һ������:>");
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
	//��дһ�γ������ұ�������ʾ1��n������ֵ�Ķ��η���
	int n = 0;
	printf("������һ������:>");
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		printf("%d�Ķ��η���%d\n",i, i * i);
	}
	return 0;
}*/

/*int main()
{
	//����һ������ֵ����ʾ��������ֵ����������
	int a = 0;
	printf("������һ������:>");
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
	//��ʾ������ֵ������Լ��
	int n = 0;
	printf("����������:>");
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
	//��дһ�γ����������������������������ѭ��
	//��ʾ1234567890����ʾ��λ�������������ֵ��ͬ��
	int no;
	int i;
	printf("������һ������:>");
	scanf("%d", &no);
	for (i = 0; i <= no; i++)
	{
		printf("%d", i % 10);
	}
	return 0;
}*/

/*int main()
{
	//��дһ�γ�����1��n�ĺ͡�n��ֵ�Ӽ�������

	int n = 0;
	int i = 0;
	int sum = 0;
	printf("������һ������:>");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	printf("1��%d��Ϊ%d", i-1,sum);
	return 0;
}/*/

/*int main()
{
	int n = 0;
	int i = 0;
	printf("������һ������:>");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("%d ", i);
	}
	return 0;
}*/

/*int main()
{
	//��дһ�γ��򣬶�ȡһ������������ʾ��λ����
	int a = 0;
	int tmp = 0;
	printf("������һ������:>");
	scanf("%d", &a);
	tmp = a;
	int count = 0;
	while (a > 0)
	{
		a /= 10;
		count++;
	}
	printf("%d��λ����:>%d",tmp, count);
	return 0;
}*/
/*int main()
{
	//����һ���Ǹ�������������������ʾ��
	int num = 10;
	do {

		printf("������һ������:>");
		scanf("%d", &num);
		if (num <= 0)
			puts("�벻Ҫ�����������");

	} while (num <= 0);

	//����
	printf("����������������:>");
	while (num > 0)
	{
		//�õ����һλ������ӡ����
		printf("%d", num % 10);
		//����һλ
		num = num / 10;
	}
	return 0;
}*/

/*int main()
{
	int a = 0;
	printf("����������:>");
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
	//��дһ�γ���ʹ֮���ұ�����������ʾ+ �� -���ܸ���
	//����������������֡����⣬������0һ�µ�����ʱ����ʲôҲ����ʾ
	int a = 0;
	printf("������һ������ӡ����\n");
	printf("������:>");
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
	//����涨��������������ʾ�����ǵĺϼ�ֵ��ƽ��ֵ
	int i = 0;
	int num = 0;
	int sum = 0;
	int tmp = 0;

	printf("Ҫ������ٸ�����:>");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("NO.%d:>", (i + 1));
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("���ǵĺϼ�ֵ��%d", sum);
	printf("���ǵ�ƽ��ֵ��%.2f", (double)sum / num);
	return 0;
}*/

/*int main()
{
	//��дһ�γ���������������ʾ��С����������������е�2�˷�
	int a = 0;
	printf("������һ��������ʾ�����е�2�˷�\n");
	printf("����������:>");
	scanf("%d", &a);

	int i = 1;
	while (i * 2 < a)
	{
		printf("%d ", i *= 2);
	}
	return 0;
}*/

/*
	��дһ�γ�����������������������ʾ��С�������ֵ��������ż��
*/
/*int main()
{
	//����Ҫ��ʲô
	//������Ҫʲô����������

	��Ҫ�Ӽ��������һ���� ���� ��ʾ��С�����ֵ����ż��
	
	int a = 0;
	printf("����һ��������ʾ������������е���ż��\n");
	printf("������һ����:>");
	scanf("%d", &a);
	int i = 0;
	while (i+2 < a)
	{
		printf("%d ", i += 2);
	}
	return 0;
}*/

/*
	��дһ���ǳ���������������ȡ����������ֵ��Ȼ����������֮�����������ĺ�
*/
/*int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	int t = 0;
	puts("��������������");
	printf("����a:>");
	scanf("%d", &a);
	printf("����b:>");
	scanf("%d", &b);
	t = (a > b) ? b : a;
	do
	{
		sum = sum + t;
		t = t + 1;
	} while (t >= ((a > b) ? b : a ) && t <= ((a < b) ? b: a));

	//���
	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d\n", a, b, sum);
	return 0;
}*/

/*int main()
{
	int input = 0;
	do {
		printf("��ѡ���ʲôȭ��0 ʯͷ / 1 ���� / 2 ����\n");
		printf("��ѡ��:>");
		scanf("%d", &input);
	} while (input < 0 || input > 2);
	switch (input)
	{
	case 1:
		printf("��ѡ�����ʯͷ");
		break;
	case 2:
		printf("��ѡ����Ǽ���");
		break;
	case 3:
		printf("��ѡ����ǲ�");
		break;
	}

	return 0;
}*/


/*
	��дһ�γ��������������������������������
	��������ȣ�����ʾ������ֵ����ȡ����������
	��������ֵ��ȣ�����ʾ��������ֵ��ȡ������
	������������������㣬����ʾ������ֵ������ͬ����
*/
/*int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("����������������");
	scanf("%d%d%d", &a, &b, &c);

	if (a == b && a == c)
	{
		printf("����ֵ�����");
	}
	else if(a == b || a == c)
	{
		printf("������ֵ���");
	}
	else
	{
		printf("����ֵ������ͬ");
	}
	return 0;
}*/

/*int main()
{
	//��������������
	int a = 0;
	int b = 0;
	int c = 0;
	printf("����������������");
	scanf("%d%d%d", a, b, c);

	//�ж�
	if (a > b)
	{

	}
	return 0;
}*/

/*int main()
{
	//������������ֵΪ�������жϸ�ֵ����ż�Բ���ʾ
	int num = 0;
	printf("������һ��������");
	scanf("%d", &num);

	//�ж�
	if (num > 0)
	{
		if (num % 2 == 0)
		{
			printf("������ż��");
		}
		else
		{
			printf("����������");
		}
	}
	else
	{
		printf("������Ĳ�������");
	}
	return 0;
}*/

/*int main()
{
	//��дһ�γ�����������������һ������ֵ����ʾ�����ľ���ֵ��
	int a = 0;
	printf("������һ��������ʾ�����ľ���ֵ��");
	scanf("%d", &a);
	printf("����ֵ�ǣ�%d", abs(a));//abs ��һ�����ľ���ֵ ��Ҫ����ͷ�ļ� math

	return 0;
}*/

/*int main()
{
	int a = 0;
	printf("������һ��������");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		puts("��������ż��");
	}
	else
	{
		puts("������������");
	}
	return 0;
}*/

/*t main()
{
	int a = 0;
	int b = 0;
	printf("������һ��������");
	scanf("%d", &a);

	if (a % 5 == 0)//����Ҫ����0 ���� ��ִ�еڶ������
	{
		printf("�������ܱ� 5 ����");
	}
	else
	{
		printf("���������ܱ� 5 ����");
	}
	return 0;
}*/