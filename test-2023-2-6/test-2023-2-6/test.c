#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//����Ŀ���ơ�
//
//�ַ�����ת���
//
//����Ŀ���ݡ�
//
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
//
//
//
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC


void reverse(char* left, char* right)
{
	assert(left != NULL);//#include <assert.h>����ͷ�ļ�
	assert(right != NULL);

	//���н���
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
	reverse(arr, arr + k - 1);//������� bacdef
	reverse(arr + k, arr + len - 1);//�����ұ� bafdec
	reverse(arr, arr + len - 1);//�������� cedfab
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
/*//����Ŀ���ơ�
//�ַ�������
//����Ŀ���ݡ�
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
	reverse(arr, arr+ k - 1);//������� bacdef
	reverse(arr+k,arr+len-1);//�����ұ� bafdec
	reverse(arr, arr + len - 1);//�������� cedfab
}
int main()
{
	char arr[] = "abcdef";
	arr_move(arr, 2);
	printf("%s", arr);
	return 0;
}*/

/*///����Ľ����ʲô��������Ϊʲô���������
int main()
{
	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}*/


/*//����Ľ����ʲô��������Ϊʲô���������
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
	const char* p1 = "abcdef";//����const����������ܱ�����
	const char* p2 = "abcdef";//����const����������ܱ�����
	if (p1 == p2)//����p1��p2�ַ���ͬΪ�˽�ʡ�ռ�洢����һ��λ�� //hehe��������Ϊ*p�ڴ���׵�ַ��pָ�����abcdef 
		//����ָ�붼û��ָ�����飬����ָ�����abcdef����ַ�������
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	if (arr1 == arr2)//��Ȼarr1��arr2һ�����Ǵ洢�ĵ�ַ��һ�� �������Ͳ��ܹ����
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
	//����ռ�
	int* p = malloc(10 * sizeof(int));
	//ʹ�ÿռ�
	//******
	//�ͷſռ�
	free(p);
	*p = NULL;
	return 0;
}*/

/*//��Ŀ����:
//������
//��Ŀ���� :
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������!
//Aѡ��˵ : B�ڶ����ҵ���
//Bѡ��˵ : �ҵڶ���E����;
//Cѡ��˵: �ҵ�һ��D�ڶ�
//Dѡ��˵ : C����ҵ���;
//Eѡ��˵:�ҵ��ģ�A��һ;
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

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
/*//��Ŀ��������
//���ݣ�
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//
//
//
//����Ϊ4�����ɷ��Ĺ���:
//
//A˵�������ҡ�
//
//B˵����C��
//
//C˵����D��
//
//D˵��C�ں�˵
//
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

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
//�ҹ�����ʱ��ῼ
//��������: ��36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ���е�ǰ������
//�������ٱ�������?
//
//��������: ��25ƥ��5���ܵ���û�м�ʱ����������ȷ����25ƥ���е�ǰ������
//�������ٱ�������?
//...
//��������
//��һ�����㣬���ʲ����ȣ�����ÿһ���������㣬ȼ����ǡ����1��Сʱ
//����2���㣬����ȷ��һ��15���ӵ�ʱ���
}*/


/*//��Ŀ���������
//����Ļ�ϴ�ӡ������ǡ�
// 1
// 1 1
// 1 2 1
// 1 3 3 1
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	//�����к���
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
	//��ӡ
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


/*//��������Ľ����ʲô
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
/*//��������Ľ����ʲô
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;

	//������������Ϊ��������char���ͽ������ ����Ҫ��������
	// 1���ֽ� = 8 bitλ
	// 0000000000000000000000000000000011001000 - a ��Ϊchar����ֻ��ȡ8������λ ������Ҫ���룬����Ϊunsigned ���޷��� ���Բ�0 Ҫ���з���λ��Ҫ������λ����
	// 0000000000000000000000000000000001100100 - b ��Ϊchar����ֻ��ȡ8������λ ������Ҫ���룬����Ϊunsigned ���޷��� ���Բ�0 Ҫ���з���λ��Ҫ������λ����
	// 0000000000000000000000000000000100101100 - ����Ϊ�ڴ����ǲ��� ��Ϊ������ ԭ������ͬ �������������300 
	// 
	// 0000000000000000000000000000000000101100 - c ��Ϊchar����ֻ��ȡ8������λ ������Ҫ���룬����Ϊunsigned ���޷��� ���Բ�0 Ҫ���з���λ��Ҫ������λ��
	// 0000000000000000000000000000000000101100 - c��� ����Ϊ ֻ��ȡ8������λ �ڴ����ǲ��� ��Ϊ������ ԭ������ͬ �������������44
	// 
	//0000000000000000000000000000000011001000 ֻ��ȡ8�� ��Ϊchar������һ���ֽ� ֻ��ȡ8������λ
	//
	//0000000000000000000000000000000001100100 ֻ��ȡ8�� ��Ϊchar������һ���ֽ� ֻ��ȡ8������λ
	//

	c = a + b;
	printf("%d %d", a + b, c);//300 44
	return 0;
}*/