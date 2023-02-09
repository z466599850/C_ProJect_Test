#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

//��Ŀ����������ż��˳��
//Ҫ�󣺵�������ʹ����ȫ����λ��ż��ǰ�档
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	//�ж�����
	while (left < right && arr[left] % 2 == 1)
	{
		left++;
	}

	//�ж�ż��
	while (left < right && arr[right] % 2 == 0)
	{
		right--;
	}
	//����
	if (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = arr[tmp];
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}

/*//��Ŀ������ˮ����
//Ҫ�󣺺���ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ(���ʵ��)
//1ƿ = 1Ԫ  2��ƿ = һƿ 20Ԫ�����������ˮ
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	printf("������Ǯ����ˮ;>");
	scanf("%d", &money);
	//�ڶ���д��
	if (money == 0)
	{
		total = 0;
	}
	else
	{
		total = money * 2 - 1;
	}
	printf("%d\n", total);
	//��һ��д��
	////���������ˮ�ȵ�
	//total = money;
	//empty = money;
	////����������ˮ
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	return 0;
}*/

/*//��ӡ����
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	for (i = 0; i <line ; i++)
	{
		//��ӡ�ϰ벿��
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line -1-i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <=i;j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j <2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

/*//ˮ�ɻ�
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ�Ϊˮ�ɻ���(������)
		//1.����i��λ�� - nλ��
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		//2.����i��ÿһλn�η�֮�� sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);//�жϴη��õĺ��� ͷ�ļ� math.h
			tmp /= 10;
		}
		//3.�Ƚ�i ==sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}*/


/*//��Ŀ���������
//Ҫ����Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int ret = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);// 2 5
	for (i = 0; i < b;i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}*/


/*//��Ŀ���ַ�������
//Ҫ��дһ����������������һ���ַ��������пո�

void Reverse(char* str)
{
	int sl = strlen(str);

	char* left = str;
	char* right = str + sl - 1;
	//����
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}

int main()
{
	char s[100] = { 0 };
	scanf("%s", &s);
	//������
	Reverse(s);
	//��ӡ
	printf("%s", s);
	return 0;
}*/


/*//������8 ��Ը���һ��
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//��һ��Ӱ������ ��˼�� ��һ�����ʱ�򲻻�����
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n",cpp[-1][-1] + 1);
	return 0;
	// �ṹͼ��
	//		     c*			   cp*	==>	cpp**			���
	//		char*	E			c+3 = F						printf = POINT
	//		char*	N			c+2 = P						printf = ER
	//		char*	P			c+1 = N						printf = ST
	//		char*	F			 c  = E						printf = EW

	//���䣺ǰ��++����++����ʹ�� ��˼�� �ȼ��� ��ȥ��ӡ
	//		����++����ʹ�ã���++ ��˼�� �ȴ�ӡ �ڼ�++
	//ע�⣺
	// int a= 10;			*cpp[-2]+3				cpp[-1][-1]+1
	// ++a;//a == 11		* *(cpp+(-2))+3			*(  *(cpp-1)-1  )+1
	// ++a;//a == 12		* *(cpp-1)+3
	// a-2 == 10
}*/

/*//����Ͱ͵�������7
int main()
{
	char* a[] = { "work","at","alibaba" };
	char* * pa = a;

	pa++;
	printf("%s\n", *pa);
	return 0;
}*/


/*//������6
int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 }; 
	int* ptr1 = (int*)(&aa + 1);//&aa �������������
	int* ptr2 = (int*)(*(aa + 1));//*(aa + 1) = aa[1]�ڶ�����Ԫ�صĵ�ַ

	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
	return 0;

	//		   aa					[ptr1 - 1]�õ�����10
	//   [1][2][3][4][5]   [6][7][8][9][10][&aa + 1]
	// ���䣺
	//Ϊʲô*(aa + 1 )�ȼ� aa[1] ��
	int arr[10] = { 1,2,3,4,5 };
	int* p = arr;
	//*(p+2) ==> p[2] ==> *(arr + 2) ==> arr[2]
	arr[2];// ==>*(arr+2)
}*/