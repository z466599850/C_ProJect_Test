#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//��������
/*int Add(int x, int y);*/

#include "add.h"//�⺯��<>���Լ��������� 
//.c����д�Ĵ��룬.h����ĺ�������

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	//��������
	printf("%d", sum);
	return 0;
}

//�����Ķ���
/*int Add(int x, int y)
{
	int z = x + y;
	return z;
}*/



/*int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
		//�������Ľ����ʲô 43  2  1
	//Ϊʲô�� ��Ϊprintf���ص������ַ��ĸ���
	//�ȴ�43��ߴ�ӡ Ȼ��43���������� �ڶ���printf��ӡ2 Ȼ���һ��printf��ӡ1
	return 0;
}*/



//.дһ��������ÿ����һ������������ͻὫnum��ֵ����1��
/*void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	return 0;
}*/


//3.дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
                     //arr��һ��ָ�� �������������׸�Ԫ�� �������ܰ����е�����������������ֻ���������������ڴ�����
/*int binary_serch(int arr[], int k, int sz) //���鴫�ݵ�ʱ������Ԫ�ص�ַ����������ĵ�ַ�������ġ�
{

	int min = 0;
	int max = sz - 1;
	while (min <= max)
	{
		int mid = (min + max)/2;
		if (arr[mid]< k )
		{
			min = mid + 1;
		}
		else if (arr[mid] > k)
		{
			max = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_serch(arr, k,sz);
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d",ret);
	}
	return 0;
}*/



//.дһ�������ж�һ���ǲ��ǹ��ꡣ
/*int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)//is_leap_year �ǲ����������˼
		{
			printf("%d ", year);
		}
	}
	return 0;
}*/



//дһ�����������ж�һ�����ǲ�������
/*int is_prime(int a)
{
	int j = 0;
	for (j = 2; j <=sqrt(a); j++)//sqrt �����ŵ���˼ ͷ�ļ���math.h
	{
		if (a % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)//is_prime �ж��ǲ�������
			printf("%d ", i);
	}
	return 0;
}*/





//���ú��������������н���
//�ܽ᣺����д��ֻ�Ǳ��潻����ʵ�ʲ�û�н�����Ϊ x��y��a��b����һ����ַ
//
//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
//
/*void Swap1(int x, int y)//int x ,int y,�ŵ�����ʽ����
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}


int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	//���ú���- ��ֵ����
	Swap1(a, b);
	printf("a = %d b = %d\n", a, b);
}*/





//���ú��������������н���
//ͨ����ַ���ݹ�ȥ�ˣ�ͨ����ַ�������һ���
/*void Swap2(int* pa, int* pb)//ָ����� 
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


int main()
{
	int a = 10;
	int b = 20;
	printf("a= %d b = %d\n", a, b);
	//���ú���- ��ַ����
	Swap2(&a, &b);//Swap�ǽ�������˼ �Զ��庯��()  // &a ��ֵ������ int* pa // &b ��ֵ������ int* pb
	printf("a = %d b = %d", a, b);
	return 0;
}*/



//������Ŀ������ж������������ֵ
/*int get_max(int x, int y)//�β� - ��ʽ����- ��ʽ�ϲ���
{
	return (x > y) ? (x) : (y);
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max = %d", max);
	return 0;
}*/


//�ж������������ֵ
/*int get_max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a = 10;
	int b = 20;
	//������ʹ��
	int max = get_max(a, b);
	printf("max = %d\n",max);
	max = get_max(100,300+1);//300+1�Ǳ��ʽ
	max = get_max(100,get_max(3,7));//����
	printf("max = %d", max);
	return 0;
}*/




//memset memory - �ڴ� set -����
/*int main()
{
	char arr[] = "hello word";//"��������ַ���"
	memset(arr, 'z', 5);//ָ�������ַ������ڴ棬�ı�ǰnum��ֵ �ַ������ţ��ַ���˫���� 'z'���ַ� "hello"���ַ���
	printf("arr:%s", arr);//���ǵ���ǰ�����
	return 0;
}*/







/*int main()
{
	char str1[] = "Sample string"; //�ַ��ͣ�char�����ڴ����ַ���character������Ӣ����ĸ�����ֻ��㡣 //�������������һ��\0
	                               //��Ҫע�����char������ַ�Ҫ�õ����š��������Χ���������ַ�����Ҫ��˫���š�����Χ���ڴ˲���Ӳ�����
	char str2[40];
	char str3[40];
	strcpy(str2, str1);//strcmp (Ŀ�ĵأ�Դͷ) ���ǰ�Դͷ���Ƶ�Ŀ�ĵ�
                      //strcmp (Ŀ�ĵأ�����) Ҳ���԰����ָ��Ƶ�Ŀ�ĵ� 
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return 0;
}*/



/*int main()
{
	char arr1[] = "bit";//����������һ��\0 �ǽ�����־
	char arr2[20] = "###############";
	strcpy(arr2, arr1);
	printf("arr1:%s\narr2:%s\n", arr1, arr2); //"################"
	                                         //bit\0########## ���������� �����и�\0���������־ ���ܺ����ж������ݶ�����ʾ��
	                                        //��Ϊ\0�ǽ�����־ ������ȥ֤��\0������ ���Բ���������ľ���s
	//strcpy - string copy - �ַ�������
	//strlen - string length - �ַ��������й�
	return 0;
}*/




/*int Add(int x, int y)
{
	int z = 0;
	z = x+y;
	return z;
}

int main()
{
	int a = 20;
	int b = 10;
	int sum = Add(a, b);//Add���Զ��庯�� �������κ��� ����������
	printf("%d\n", sum);
	//strlen ���������ַ����ĳ������������������ַ���
	return 0;
}*/