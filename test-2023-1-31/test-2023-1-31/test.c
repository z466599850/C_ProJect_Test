#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Swap(char* buf1,char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = 0;
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void*e1, const void*e2))
{
	//����
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j * width, (char*)base) + (j + 1) * width > 0)
			{
				//����
				Swap((char*)base + j * width,(char*)base + (j + 1) * width,width);
			}
		}
	}
}
 
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
}

int main()
{
	test1();
	return 0;
}
//ָ���������������
//
/*int main()
{
		
	//��ַ�Ĵ�С����4/8���ֽ�

	//����������Ԫ�صĵ�ַ
	//�������⣺
	// 1.sizeof(������) - ��������ʾ��������
	// 2.&������ - ��������ʾ��������
	//һά����
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�
	printf("%d\n", sizeof(a+0));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+0 ������Ԫ�صĵ�ַ ��ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*a));//4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4 ������
	printf("%d\n", sizeof(a+1));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1�ǵڶ���Ԫ�صĵ�ַ ��ַ�Ĵ�С����4/8���ֽ� 
	printf("%d\n", sizeof(a[1]));//4 - ��2��Ԫ�صĴ�С  ������
	printf("%d\n", sizeof(&a));//4/8 &aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8�ֽ�
	printf("%d\n", sizeof(*&a));//16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ������飬sizeof����ľ�������Ĵ�С��λ���ֽ�
	printf("%d\n", sizeof(&a+1));//4/8 - &a������ĵ�ַ��&a+1��Ȼ�����������飬���������飬������4/8
	printf("%d\n", sizeof(&a[0]));//4/8 - &a��һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0]+1));//4/8 - &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ
	return 0;
}/*/


//�ַ�����
/*int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 - sizeof������������С��6*1 = 6�ֽ�
	//printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0���ǵ�ַ������Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(*arr));//1 - arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
	//printf("%d\n", sizeof(arr[1]));//1 - arr[1]ָ���ǵڶ���Ԫ�أ�Ԫ�ص�Ȼ��1���ֽ�
	//printf("%d\n", sizeof(&arr));//4/8 - &arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr + 1));//4/8 - &arr+1 ���������������ĵ�ַ���ǻ��ǵ�ַ�𣬵�ַ��С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ

	//strlen ���ַ������ȵ�
	printf("%d\n", strlen(arr));//���ֵ 
	printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//err ��ʹ������� ��Ϊ����ȥ����'a' = -97 Ȼ����������Ƿ�������
	//printf("%d\n", strlen(arr[1]));err err�������˼ �Ժ�ǧ����д��err���������룡����������������������������
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ - 6 ��������Ǹ���ֵ��6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ - 1 ��������ٸ�1 
	return 0;
}*/










//qsort ��һ���������������������Ԫ�ص�ַ
//		�ڶ��������������������Ԫ�ظ���
//		�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//		���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ����ʵ��
//					����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
		//int arr[]={1,2,3};
		//int sz = sizeof(arr) / siezoef(arr[0]);//����Ԫ�ظ���
//���ӣ�qsort(��Ԫ�ص�ַ��Ԫ�ظ�����ÿ��Ԫ�ص��ֽ��Ƕ��٣�����ָ��);


/*//qsort ���÷�qsort(��һ��������ʼλ�ã��ڶ�������Ԫ�أ�ÿ��Ԫ�صĴ�С�������������бȽ�)
// 
//��������ķ���
struct Stu
{
	char name[20];
	int age;
};


int cmp_s_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	// �ַ����Ƚϲ���ֱ���� > <= ���Ƚϣ�Ӧ����strcmp����
	//strcmp�Ƚ���ͨ���Ƚ�ASCII�� ͷ�ļ��� string
	//strlen�����ԣ��Ǹ����ַ������ȣ���һ���ģ�����ǿ���ĸ��Ӧ��ASCII��Ĵ�С
	//��������ĸ��ascii��ֵ z  l  w
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}


int main()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_s_name);
	return 0;
}*/

/*//��������ķ���
struct Stu
{
	char name[20];
	int age;
};


int cmp_s_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}


int main()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_s_age);
	return 0;
}*/

/*//��������qsort��д��
int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)//��һ��д��
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;

`	//return (int)(*(float*)e1 - *(float*)e2);//�ڶ���д��
}

int main()
{
	float farr[] = { 5.0,4.0,3.0,8.0,2.0,6.0,7.0,1.0 };
	int sz = sizeof(farr) / sizeof(farr[0]);
	qsort(farr, sz, sizeof(farr[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", farr[i]);
	}
	return 0;
}*/

/*//int�������� qsort ��
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int main()
{
	int arr[] = { 9,7,8,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);//�����������򶼿�������
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/

//����void���÷���
/*int main()
{
	int a = 10;
	void* p = &a;

	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
	//void* ���͵�ָ�� ���ܽ��н����ò��� Ҫ�õĻ�Ҫǿ������ת��
	//void* ���͵�ָ�� ���ܽ���+-�����Ĳ���
	return 0;
}
*/


/*//�ع��Ͻڿε�����
int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//ָ������
	//int* arr[10];
	//����ָ��
	//int (*pa)[10] = &arr;
	//����ָ��
	int (*pAdd)(int, int) = Add;
	//int sum = (*pAdd)(2, 3);//����ָ�����
	//int sum = pAdd(2, 3);//����д��
	//printf("sum = %d", sum);
	//����ָ�������
	int(*pArr[5])(int, int);
	//ָ����ָ�������ָ��
	int(*(*ppArr)[5])(int, int);
	return 0;
}*/