#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int (*p[10])[5];
	return 0;
}

/*//����ָ���ʹ�ã�
//�������������ʽ
void print1(int arr[3][5], int x,int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//������ָ�����ʽ
void print2(int(*p)[5],int x,int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);//�⼸��д��Ҳ��һ����
			//printf("%d ", *(p[i] + j));
			//printf("%d ", ( * (p + i))[j]);
			//printf("%d ", *(*(p + i) + j));//�����ˣ�����p�ǵ�һ����������ĵ�ַ��*p�ǵ�һ����Ԫ�ص�ַ��
											//p+iÿ�ε�ַ��һ�У�*��p+i���Ǹ�����Ԫ�ص�ַ��+j�Ǹ��еڼ���Ԫ��
											//�ڶ��ֽ��ͷ��� *��p+1�����е�ַ��(*(p+i)+j)�����е�ַ��*(*(p+i)+j)�ǽ����õ�����Ԫ��ֵ
									//p��ָ��һ��������ַ��*p��ָ��һ�е�һ��Ԫ�ص�ַ
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr,3,5);//arr - ������ - ������������Ԫ�ص�ַ
	print2(arr, 3,5);//arr ���鴫�δ�������Ԫ�صĵ�ַ��Ȼ���ڶ�ά��������ÿһ�д���һ��Ԫ�أ�����arr��3��Ԫ�ء�
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	//printf("%d ", p[i]);//�⼸��д�����ǵȼ۵�
	//	//printf("%d ", *(p + i));
	//	printf("%d ", *(arr + i));
	//	printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
	//}
	return 0;
}*/

/*int main()
{
	char* arr[5];
	char* (*pa)[5] = &arr;

	int arr2[5] = { 0 };
	int (*pa2)[5] = &arr2;
	return 0;
}*/

/*//����ָ�� - ָ��
int main()
{
	//int* p = NULL;//p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
	//char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
	//					//����ָ�� - ָ�������ָ�� - ���Դ������ĵ�ַ
	//int arr[10] = { 0 };
	//arr - ��Ԫ�ص�ַ
	//&arr[0] - ��Ԫ�صĵ�ַ
	//&arr - ����ĵ�ַ
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;//����ĵ�ַҪ������
	//����p��������ָ��
	printf("%d ", (*p));
	return 0;
}*/

/*//ָ��������÷�
int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 2,3,4,5,6,7 };
	int arr3[] = { 3,4,5,6,7,8 };

	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 6; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}*/

/*//ָ������ �����飬�������ָ���
int main()
{
	int arr[10] = { 0 };//��������
	char ch[5] = { 0 };//�ַ�����
	int* parr[4];//�������ָ������� - ָ������
	char* pch[5];//����ַ�ָ������� - ָ������
	return 0;
}*/

/*//������һ�������� ������һ���� ����ָoffer��
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	const char* p1 = "abcdef";//����const����������ܱ�����
	const char* p2 = "abcdef";//����const����������ܱ�����
	if (p1 = p2)//����p1��p2�ַ���ͬΪ�˽�ʡ�ռ�洢����һ��λ�� //hehe��������Ϊ*p�ڴ���׵�ַ��pָ�����abcdef 
											//����ָ�붼û��ָ�����飬����ָ�����abcdef����ַ�������
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	/*if (arr1 == arr2)//��Ȼarr1��arr2һ�����Ǵ洢�ĵ�ַ��һ�� �������Ͳ��ܹ����
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}*/

/*int main()
{
	const char* p = "abcdef";//"abcdef" ��һ�������ַ��� ���ܱ��ı�
	//*p = 'w';
	printf("%s\n", p);//����д���Ǵ���Ĳ�֪��Ϊʲô�ܱ��������
	//printf("%c\n", *p);//��ӡ����a ��Ϊ�ŵ�����Ԫ�صĵ�ַ //ָ��P��ŵĲ����ַ���  ��ָ��ִ���ַ����׵�ַ
						//%c�Ǵ�ӡһ���ַ���p���׵�ַ������Ҫ�����á�%s�Ǵ�ӡ�ַ������ַ�����ӡ��ʱ����׵�ַ��ʼһֱ����\0������
	//printf("%s\n", p);//abcdef //���ﲻ������Ϊ*p���׵�ַȡ��ָ��ָ��ġ�a������ӡ��a��p��Ϊ�׵�ַ��ӡ�ַ�����ֱ�Ӵ�ӡһ����p��ָ�룬*p���ַ�a
	return 0;
}*/
//��վ:  www.stackoverflow.com
//		 Segmentation fault	- �δ��� �ڴ���ʻ�Ƿ�����
//		 segmenfault.com �������ʵ���վ �жδ���

/*int main()
{
	char arr[10] = "abcdef";
	char* pc = arr;//�ŵ�����Ԫ�صĵ�ַ��Ȼ��pcͨ�������Ԫ�ص�ַ���δ�ӡabcdef ֱ��\0�Ž���
	printf("%s\n", arr);//abcdef
	printf("%s\n", pc);//abcdef
	return 0;
}*/