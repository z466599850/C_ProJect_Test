#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

int main()
{
	char arr1[30] = "hello\0xxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);//hellowor �ص㣺������ȥ�����Զ���'\0' ����������ַ�����Ҳ���Լ��Ÿ�'\0'
	return 0;
}


/*int main()
{
	char arr1[10] = "abcdef";
	char arr2[] = "hello bit";
	strncpy(arr1, arr2, 4);//strncpy(Ŀ�ĵأ�Դͷ����������)
					   	   //��������ĸ��������˻�׷�Ӽ���'\0'��ȥ
	printf("%s\n", arr1);//hellef
	return 0;
}*/

/*//ģ��ʵ��strcmp
//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//���ܵ��ڿ�ָ�����˼ != NULL
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	//������涼����ȣ��Ǿ�ʣ�´���С����
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

//��Ҫ��Ҫ���ش���0����С��0����������-1/1����ô���� �������ܰ� 
//����д����ʵ�����϶���  �����д���������������Ϊ���ص���-1/1
my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);//���ܵ��ڿ�ָ�����˼ != NULL
	//�Ƚ�
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//������涼����ȣ��Ǿ�ʣ�´���С����
	return (*str1 - *str2);
}


int main()
{
	char* p1 = "abc";//����Ƚϵ��� '\0' ��d �ǵ�Ȼ��d�����Է��ص���-1
	char* p2 = "abcd";
	int ret = my_strcmp(p1, p2);
	printf("ret = %d\n", ret);
	return 0;
}*/

/*int main()
{
	//vs2022
	// >  1
	// == 0
	// <  -1
	char* p1 = "abcdef";
	char* p2 = "sqwer";
	//int ret =  (strcmp(p1, p2));//strcmp�������Ƚ������ַ����Ƿ� == > < 
						// ���ڵ�ʱ�򷵻�һ������0������
						// С�ڵ�ʱ�򷵻�һ��С��0������
						// ���ڵ�ʱ�򷵻�һ��0����
						//ע��strcmp �Ƚϵ��������������Ԫ��
						//    �����������ȵĻ���Ƚ���һ��
						//    ��������ַ�������ȵĻ�����0
	//���κα�������Ҫ����д�Ŷ�
	if (strcmp(p1, p2) > 0)
	{
		printf("p1 > p2\n");
	}
	else if (strcmp(p1, p2) == 0)
	{
		printf("p1 == p2\n");
	}
	else
		printf("p1<p2\n");
	//printf("%d\n", ret);
	return 0;			
}*/

/*char* my_strcat(char* dest, const char* src)
{
	assert(dest !=NULL);
	assert(src);//�ȼ�����Ľ����������д��

	char* ret = dest;
	//1.�ҵ�Ŀ�ĵ��ַ�����'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.׷��
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	//��ȷʾ��
	char arr1[30] = "hello";
	char arr2[] = "world";
	//strcat(arr1, arr2);//strcat(Ŀ�ĵأ�Դͷ)

	//ģ��ʵ��strcat
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}*/


/*//ģ��ʵ��strcpy
char* my_strcpy(char* dest, const char* src)
{
	//dest soe����Ϊ��
	assert(*dest != NULL);
	assert(*src != NULL);

	//��dest����ʼλ�÷ŵ�ret�
	char* ret = dest;
	//����srcָ����ַ�����destָ��Ŀռ䣬���� '\0'
	while (*dest++ = *src++)
	{
		;
	}
	//����Ŀ�ĵص���ʼλ��
	return ret;
}

int main()
{
	//��ȷʾ��
	//char arr1[] = "abcdefg";
	//char arr2[] = "bit";
	//strcpy(arr1, arr2);//srrcpy(Ŀ�ĵأ�Ҫ�����Ķ���)

	//����ʾ��
	char arr2[] = { 'a','b','c' };//err �ᵼ�³���Խ�����

	char* arr1 = "abcdefg";//err �ᵼ�³������
	//ģ��ʵ��strcpy
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}*/

/*//ģ��ʵ��strlen�����ķ���
//1.�������ķ���
//2.�ݹ� ��������ʱ�������ַ�������
//ָ��-ָ��

//1.�������ķ���
//size_t == unsigned int 
int my_strlen(const char* str)//�����int���ͻ�����д��size_t
{
	int count = 0;
	assert(str != NULL);

	while(*str != '\0')//while(*str)��������д����������д���һ��
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	//��ȷʾ��
	//int len = my_strlen("abcdef");//ֱ���ҵ�\0�Ż�ֹͣ
	//printf("%d\n", len);
	
	//����ʾ��
	//char arr[] = { 'a','b','c','d','e','f' };//���ʱ����ֵ������ֵ
	//int len1 = strlen(arr);
	//printf("len = %d\n", len1);

	//ģ��ʵ��strlen����
	//int len = my_strlen(len);
	
	//strlen��ע������
	if (strlen("abc") - strlen("abcdef") > 0 )//�����ʲô�� 
	{
		printf("haha");
	}
	else
	{
		printf("hehe");
	}
	//�𣺽����haha ��Ϊ���Ķ�����size_t  size_t����unsigned int ���޷��� ������Լ�д�ĺ����ǽ���Ǹ���
	return 0;
}*/

/*//����Ŀ���ơ�
//�ַ�����ת���
//����Ŀ���ݡ�
//
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

int is_s1_move(char* s1, char* s2)
{
	int len1 = (int)strlen(s1);
	int len2 = (int)strlen(s2);
	if (len1 != len2)
	{
		return 0;
	}
	//1.��s1�ַ�����׷��һ��str1�ַ���
	//strcat
	//strncat
	strncat(s1, s1, 6);//������׷��һ��������
	//2.�ж�s2ָ����ַ����Ƿ���s1ָ����ַ������Ӵ�
	char* ret = strstr(s1, s2);//strstr-���Ӵ��� �ҵ����������Ӵ��ĵ�ַ���Ҳ�������һ����ָ��
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char s1[30] = "abcdef";
	char s2[] = "cdefab";
	int ret = is_s1_move(s1, s2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
*/


/*
//strcat��ʹ�� 
int main()
{
	char arr1[30] = "abc";
	char arr2[] = "edf";
	
	strcat(arr1, arr1);
	printf("%s\n", arr1);
	return 0;
}*/