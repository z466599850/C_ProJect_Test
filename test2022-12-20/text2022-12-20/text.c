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
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������������ȡ���ػ�\n������>:");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
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
	printf("���\n");
again:
	printf("hehe\n");//����д��ʾ���� hello bit �� hehe  goto�����ʵ���൱����ת
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
	if(disastrer) //����д�� ����goto ֱ�Ӿ�����eooro�������� ����goto�͵���break��3�β���������
	return 0;
}*/


//�ػ�����
/*int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60  -s���õ��Թػ� -t ���ùػ���ʱ��
	//system() ִ��ϵͳ����� ͷ�ļ��� #include <stdlib.h>
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp() ͷ�ļ���#include <string.h>
	{
		system("shutdown -a");//shutdown -a ȡ���ػ�
	}
	else
	{
		goto again;//�ٸ�һ�λ���
	}
	return 0;
}*/




/*void menu()//void ������  void��������˼�ǡ������͡���void *��Ϊ��������ָ�롱��void *����ָ���κ����͵����ݡ�//menu �˵�
{
	printf("\n**********************************\n");
	printf("*******   1.play    0.exit   *****\n");//play ��ʼ exit �˳�
	printf("**********************************\n");
}

void game()// ������ ��Ϸ�Ĺ���
{
	//��һ��1.����һ�������
	int ret = 0;
	int guess = 0; //���ܲµ�����
	//��ʱ����������������������ʼ��
	//time_t time(time_t *timer)
	//time_t
	//ͷ�ļ� #include <time.h>
	
	 ret = rand()%100+1;   //�ڵ���rand��ʱ����ʹ��srand�������������һ��������             
	                      // int ret = �����������ķ���ֵ//randר��������������� ��Χ 0 - RAND_MAX-32767
	                     //ͷ�ļ� #include <stdlib.h> // int rand( void ); void ������������Բ�������ֵ
	     //�κ���%100���ǵ�һ��0-99�������൱��ȡ�κ����ĺ���λ��������Ҫ1-100֮�䣬���Լ�һ
	//printf("%d \n",ret); �������ε�����Ϊ�Ѿ����ú��� �Ͳ���Ҫ�����
	 //�ڶ��� ������
	 while (1)
	 {
		 printf("\n�������:>");
		 scanf("%d", &guess);
		 if (guess > ret)
		 {
			 printf("�´��ˣ����Ͻӽ��ˣ����ͣ�\n");
		 }
		 else if (guess < ret)
		 {
			 printf("��С�ˣ����Ͻӽ��ˣ����ͣ�\n");
		 }
		 else
		 {
			 printf("��ϲ�㣬�¶��ˣ�\n");
			 break;
		 }
	 }
}

int main()
{

	int input = 0;//input  �ؼ���
	srand((unsigned int)time(NULL));
	                                 //�ڵ���rand��ʱ����ʹ��srand�������������һ��������
	                                 //srand ����һ�������� srand(����)
	                                //unsigend ǿ������ת��  �������ʲôʵ��Ч����ʱ��ͼ���NULL
	                               //���⣺�����������ʱ�����ģ�������������ʱ��Ļ���ʱ��Ҳ�����ã� �������Ļ��ͻ�����ظ� 
	                              //����ִ��һ�ξͺã��Ͳ����ظ���****����ŵ�ѭ���������ͻ����ظ���  ���������춼�����ظ�
	do//����ִ��һ��
	{
		menu();//�˵�����
		printf("������>:");//������Ϸ
		scanf("%d", &input);//��scanf��������
		switch (input)
		{
		case 1:
			game();//����Ϸ�Ĺ���
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);//����ѭ��
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
	//float�������ȸ����ͣ���Ӧ%f��
	//double, ˫���ȸ����ͣ���Ӧ%lf
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
	//sqrt - ��ƽ������ѧ�⺯�� ͷ�ļ��� <math.h>
	for (i = 1; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�����жϵĹ���
		//1. �Գ���
		//����2->i-1
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
		//else if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) Ҳ��������д
		{
			printf("%d ", year);
		}
	}
	printf("count = %d\n", count);
	return 0;
}*/



/*int main()
{
	int year = 0;//year ��
	int count = 0;// count ����
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