#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>




/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1. sizeof(������) - ��������ʾ�������飬sizeof (������)���������������Ĵ�С����λ���ֽ�
	//2. &���������������������飬&��������ȡ��������������ĵ�ַ
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);

	printf("%d\n", *arr);
	printf("%d\n", *arr+1);
	return 0;
}*/

/*void bubble_sort(int arr[], int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ�����
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//���������������ʵ����ȫ����
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,9,8,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��������������ų�����
	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ���ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
	bubble_sort(arr, sz);//bubbleð�� sort���� ð��������
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/