#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//【题目名称】
//
//字符串旋转结果
//
//【题目内容】
//
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC


void reverse(char* left, char* right)
{
	assert(left != NULL);//#include <assert.h>引用头文件
	assert(right != NULL);

	//进行交换
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		*left++;
		*right--;
	}
}

void left_move(char* arr, int k)
{
	assert(arr != NULL);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1);//逆序左边 bacdef
	reverse(arr + k, arr + len - 1);//逆序右边 bafdec
	reverse(arr, arr + len - 1);//逆序整体 cedfab
}

int is_arr_move(char* arr1, char* arr2)
{
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(arr1, 1);
		int ret = strcmp(arr1, arr2);
		if (ret == 0)
			return 1;
	}
	return 0;

}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";

	int ret = is_arr_move(arr1, arr2);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}
/*//【题目名称】
//字符串左旋
//【题目内容】
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//abcdef
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		*left++;
		*right--;
	}
}
void arr_move(char* arr, int k)
{
	assert(arr != NULL);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr+ k - 1);//逆序左边 bacdef
	reverse(arr+k,arr+len-1);//逆序右边 bafdec
	reverse(arr, arr + len - 1);//逆序整体 cedfab
}
int main()
{
	char arr[] = "abcdef";
	arr_move(arr, 2);
	printf("%s", arr);
	return 0;
}*/

/*///输出的结果是什么，并解释为什么输出这个结果
int main()
{
	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}*/


/*//输出的结果是什么，并解释为什么输出这个结果
int main()
{
	char str1[] = "hello bit";
	char str2[] = "hello bit";
	char *str3 = "hello bit";
	char *str4 = "hello bit";

	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
	return 0;
}*/

/*int main()
{
	char *arr1[] = "abcdef";
	char *arr2[] = "abcdef";
	const char* p1 = "abcdef";//加上const就是这个不能被更改
	const char* p2 = "abcdef";//加上const就是这个不能被更改
	if (p1 == p2)//这里p1和p2字符相同为了节省空间存储的是一个位置 //hehe，这是因为*p内存的首地址，p指向的是abcdef 
		//两个指针都没有指向数组，他们指向的是abcdef这个字符串常量
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	if (arr1 == arr2)//虽然arr1和arr2一样但是存储的地址不一样 所以他就不能够相等
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
	//申请空间
	int* p = malloc(10 * sizeof(int));
	//使用空间
	//******
	//释放空间
	free(p);
	*p = NULL;
	return 0;
}*/

/*//题目名称:
//猜名次
//题目内容 :
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果!
//A选手说 : B第二，我第三
//B选手说 : 我第二，E第四;
//C选手说: 我第一，D第二
//D选手说 : C最后，我第三;
//E选手说:我第四，A第一;
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for(d=1;d<=5;d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1))
						{
							if (a * b * c * d * e == 120)
								printf("a = %d,b = %d,c = %d,d =  %d,e =  %d", a, b, c, d, e);
						}

					}
				}
			}
		}
	}
	return 0;
}*/

/*int main()
{
	int a = 0;
	a = 'a';
	printf("%c", a);
	return 0;
}*/
/*//题目：猜凶手
//内容：
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//
//
//
//以下为4个嫌疑犯的供词:
//
//A说：不是我。
//
//B说：是C。
//
//C说：是D。
//
//D说：C在胡说
//
//已知3个人说了真话，1个人说的是假话。
//
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer = %c\n", killer);
		}
	}
	return 0;
//找工作的时候会考
//赛马问题: 有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名。
//请问最少比赛几次?
//
//赛马问题: 有25匹马，5个跑道，没有计时器，请赛马确定，25匹马中的前三名。
//请问最少比赛几次?
//...
//烧香问题
//有一个种香，材质不均匀，但是每一根这样的香，燃烧完恰好是1个小时
//给你2跟香，帮我确定一个15分钟的时间段
}*/


/*//题目：杨辉三角
//在屏幕上打印杨辉三角。
// 1
// 1 1
// 1 2 1
// 1 3 3 1
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	//定义行和列
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if ( i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	//打印
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/


/*//请问输出的结果是什么
int main()
{
	char a[1000] = { 0 };
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	//-1 -2 ... -128 127 126 125 ... 3 2 1 0 -1 2 ...
	printf("%d\n", strlen(a));
	return 0;
}*/
/*//请问输出的结果是什么
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;

	//整型提升：因为他是两个char类型进行相加 所以要整型提升
	// 1个字节 = 8 bit位
	// 0000000000000000000000000000000011001000 - a 因为char类型只能取8个比特位 但是需要补齐，又因为unsigned 是无符号 所以补0 要是有符号位需要按符号位补齐
	// 0000000000000000000000000000000001100100 - b 因为char类型只能取8个比特位 但是需要补齐，又因为unsigned 是无符号 所以补0 要是有符号位需要按符号位补齐
	// 0000000000000000000000000000000100101100 - 又因为内存存的是补码 因为是正数 原反补相同 所以算出来的是300 
	// 
	// 0000000000000000000000000000000000101100 - c 因为char类型只能取8个比特位 但是需要补齐，又因为unsigned 是无符号 所以补0 要是有符号位需要按符号位补
	// 0000000000000000000000000000000000101100 - c结果 又因为 只能取8个比特位 内存存的是补码 因为是正数 原反补相同 所以算出来的是44
	// 
	//0000000000000000000000000000000011001000 只能取8个 因为char类型是一个字节 只能取8个比特位
	//
	//0000000000000000000000000000000001100100 只能取8个 因为char类型是一个字节 只能取8个比特位
	//

	c = a + b;
	printf("%d %d", a + b, c);//300 44
	return 0;
}*/