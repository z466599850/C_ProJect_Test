#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER 5
#define FALSE -1

int search(int arr[], int num, int n)
{
	int i = 0;
	arr[n] = num;
	while (1)
	{
		if (arr[i] == num)
		{
			break;
		}
		i++;
	}
	return (i < n) ? i : FALSE;
}

int main()
{
	//�ڱ����ҷ�
	int arr[NUMBER + 1];
	int num = 0;
	int i = 0;
	int ser = 0;
	for (i = 0; i < NUMBER; i++)
	{
		printf("arr[%d]:>", i);
		scanf("%d", &arr[i]);
	}
	printf("������Ҫ���ҵ�ֵ:>");
	scanf("%d", &num);

	if ((ser = search(arr, num, NUMBER)) == FALSE)
	{
		printf("�Ҳ���");
	}
	else
	{
		printf("%d �ҵ����±��� %d", num, ser);
	}

	return 0;
}