#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 1; i <= 3; i++)
	{
		printf("输入密码;");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i > 3)
	{
		printf("以达到次数，请退出程序\n");
	}
	return 0;
}


/*int main()
{
	char arr1[] = "嘟嘟嘟 I love you";
	char arr2[] = "!!!!!!!!!!!!!!!!!";
	int min = 0;
	int max = strlen(arr2) - 1;
	while (min <= max)
	{
		arr2[min] = arr1[min];
		arr2[max] = arr1[max];
		Sleep(1000);
		system("cls");
		min++;
		max--;
		printf("%s\n", arr2);
	}
}*/

/*int main()
{
	char arr1[] = "夏芮芯 I love you";
	char arr2[] = "!!!!!!!!!!!!!!!!!";
	int min = 0;
	int max = strlen(arr1)-1;
	while (min <= max)
	{
		arr2[min] = arr1[min];
		arr2[max] = arr1[max];
		printf("%s\n", arr2);
		min++;
		Sleep(1000);
		system("cls");
		max--;
	}
	printf("%s", arr2);
}*/



/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 5;
	int min = 0;
	int max = sz - 1;
	while (min <= max)
	{
		int mid = (min + max) / 2;
		if (arr[mid] > k)
		{
			max = mid - 1;
		}
		else if (arr[mid] < k)
		{
			min = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (min > max)
	{
		printf("找不到");
	}
	return 0;
}*/




/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 6;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int min = 0;
	int max = sz - 1;
	while (min <= max)
	{
		int mid = (min + max) / 2;
		if (arr[mid] > k)
		{
			max = mid - 1;
		}
		else if (arr[mid] < k)
		{
			min = mid + 1;
		}
		else
		{
			printf("找到了,下标是：%d",mid);
			break;
		}
	}
	if (min > max)
	{
		printf("找不到");
	}
}*/



/*int main()
{
	int i = 0;
	int n = 3;
	int j = 1;
	int s = 0;
	for (i = 1; i <=10 ; i++)
	{
		j = j * i;
		s = s + j;
	}
	printf("%d", s);
	return 0;
}*/




/*int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		j = j * i;
	}
	printf("%d", j);
}*/






/*int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int j = 1;
	for (i = 1; i <= n; i++)
	{
		j = j * i;
	}
	printf("%d", j);
}*/



/*int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int j = 1;
	for (i = 1;i<=n;i++)
	{
		j = j * i;
	}
	printf("%d", j);
	return 0;
}*/



/*int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int j = 1;
	for (i = 1; i <= n; i++)
	{
		j = j * i;
	}
	printf("j = %d", j);
	return 0;
}*/



/*int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;

	}
	printf("sum = %d\n", sum);
	return 0;
}*/