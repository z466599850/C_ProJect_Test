#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


int main()
{
	int arr[3][4] = { {1,2,3,},{4,5} };
	int i = 0;//��ά������Ȼ��ͨ���±���ʵ�
	for (i = 0; i < 3; i++)//��ӡ��ά���飬����forѭ�����������У��ڲ������
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]= %p\n",i,j ,&arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*int main()
{
	int arr[3][4] = { {1,2,3,4},{4,5} };
	int i = 0;//��ά������Ȼ��ͨ���±���ʵ�
	for (i = 0; i <3; i++)//��ӡ��ά���飬����forѭ�����������У��ڲ������
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	//char ch[5][6];
	//int arr[] = { 1,2,3,4 };
	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };
	return 0;
}*/



//��ά����ĳ�ʼ��

/*int main()
{
	int arr[3][4] = { 1,2,3,4 }; //�ڵ�һ����ʾ1234
	int arr[3][4] = { {1,2},{4,5} };//�ڵ�һ����ʾ1��2 �ڶ�����ʾ 4��5
	int arr[][4] = { {2,3},{4,5} };//�п���ʡ�Ե���һ������ʡ��
	return 0;
}*/



//��ά����Ĵ���

/*int main()
{
	int arr[3][4];//3��4��
	char ch[5][6];//3��4��
	double arr[2][4];//3��4��
}*/



//һά�����ʹ��


/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
	int i = 0;//����һ�������±�
	for (i = 0; i <= sz; i++)
	{
		printf("arr[%d]= %p\n" ,i,&arr[i]);//��ӡ�������������ڴ�����������ŵ� �ɵ͵�ַ���ߵ�ַ
	}
}*/
//�ش���strlen���Ǹ���strlenֻ�ܼ����ַ����ĳ��ȣ�����Ԫ���������������Բ���


/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
	//���������ݸ�ֵ��������ʹ���±������ʵģ��±��0��ʼ�����ԣ�
	int i = 0;//���±�
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);//�����±�Ŷ
	}
	return 0;
}*/

/*int main()
{
	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
	//printf("%c ", arr[3]);
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}*/





// -----------�ָ���------------
/*int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));//4 //�ռ�Ĵ�С a b c \0
	printf("%d\n", sizeof(arr2));//3 �ռ�Ĵ�С a b c
	printf("%d\n", strlen(arr1));//3 abc \0 ������\0�� �ͽ����� ��������\0Ŷ�� 
	printf("%d\n", strlen(arr2));//���ֵ stlen ֻ������avcû�п��� \0 ��������֪����ô����
	 //strlen ֻ��\0֮ǰ����
	return 0;
}*/



/*int main()
{
	//����һ������- ������� - 10��
	//int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	//char arr2[5] = { 'a',98 };//��ʾ����b  ��Ϊb��ASCII ��ֵ��Ӧ����98 //����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	//char arr3[5] = "ab";//������д��Ҳ��ok�� ������д�������и�\0 ���Ժ���û��0 ����ʱ���е�������Ĳ�һ��
	char arr4[] = "abcdef";//������д��Ҳ��OK�� �������Ŷ��� ���Զ����
	printf("%d", sizeof(arr4));//7��
	//sizeof ���� arr4��ռ�ռ�Ĵ�С
	//7��Ԫ�� - char 7*1 = 7

	printf("%d", strlen(arr4));//6��
	//stlen ���ַ����ĳ���- '\0'֮ǰ���ַ�����
	//[a b c d e f \0]
	//6

	//�ܽ� sizeof(arr4));//�����ַ��� strlen(arr4));//�������ַ�0
	//     sizeof �������鳤�ȣ�strlen�����ַ������ȵ�


	//int n = 5;
	//cahr ch=[n];//NO ��������д ����������Ҫ�ų��� ���ܷű���
	return 0;
}*/

//1.strlen ��sizeof û��ʲô����
//2.strlen �����ַ������ȵ�-ֻ������ַ�������- �⺯�� - ʹ����ͷ�ļ�
//3.sizeof ������������顢���͵Ĵ�С- ��λ���ֽ�- ������






// 1 1 2 3 5 8 13 21 34 55 ....
//������n��쳲���������
/*int count = 0;
int Fib(int n)
{
	if (n == 3)//���Ե�3��쳲���������ʹ�ô���
	{
		count++;
	}
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}

}*/

/*int Fib(int n)//����ѭ����ʽ����ȷ
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD - ������������
	ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
}*/

/*int jc1(int n)//ѭ���ķ���
{
	//1*2*3*4*5
	int ou = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		ou *= i;
	}
	return ou;
}*/


/*int jc2(int n)//�ݹ�ķ���
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
	    return n * jc2(n - 1);
	}
}

int main()
{
	int a = 0;
	int ret = 0;
	scanf("%d", &a);
	ret = jc2(a);
	printf("%d\n", ret);
	return 0;
}*/



/*int mad_strlen(char* str)
{
	int count = 0;
	while ((*str)!='\0')
	{
		count++;
		str++;
	}
	return count;
}*/

/*int mad_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + mad_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "but";
	//int len = strlen(arr);//���ַ�������
	//printf("%d\n",len);

	//ģ��ʵ����һ��strlen����
	int len = mad_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len = %d ", len);
	return 0;
}*/

/*void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}*/


/*#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d ", sum);
	return 0;
}*/