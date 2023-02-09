#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

int main()
{
	char arr1[30] = "hello\0xxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);//hellowor 特点：拷贝过去他会自动放'\0' 就算比他的字符串长也会自己放个'\0'
	return 0;
}


/*int main()
{
	char arr1[10] = "abcdef";
	char arr2[] = "hello bit";
	strncpy(arr1, arr2, 4);//strncpy(目的地，源头，拷贝几个)
					   	   //如果拷贝的个数不够了会追加几个'\0'进去
	printf("%s\n", arr1);//hellef
	return 0;
}*/

/*//模拟实现strcmp
//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//不能等于空指针的意思 != NULL
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	//如果上面都不相等，那就剩下大于小于了
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

//那要是要返回大于0或者小于0的数而不是-1/1该怎么办呢 这个问题很棒 
//这种写法其实更符合定义  上面的写法容易让人误解以为返回的是-1/1
my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);//不能等于空指针的意思 != NULL
	//比较
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//如果上面都不相等，那就剩下大于小于了
	return (*str1 - *str2);
}


int main()
{
	char* p1 = "abc";//这里比较的是 '\0' 和d 那当然是d大，所以返回的是-1
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
	//int ret =  (strcmp(p1, p2));//strcmp是用来比较两个字符串是否 == > < 
						// 大于的时候返回一个大于0的数字
						// 小于的时候返回一个小于0的数字
						// 等于的时候返回一个0数字
						//注：strcmp 比较的是两个数组的首元素
						//    如果两个数相等的话则比较下一个
						//    如果整个字符串都相等的话返回0
	//在任何编译器下要这样写才对
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
	assert(src);//等价上面的建议用上面的写法

	char* ret = dest;
	//1.找到目的地字符串的'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.追加
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	//正确示范
	char arr1[30] = "hello";
	char arr2[] = "world";
	//strcat(arr1, arr2);//strcat(目的地，源头)

	//模拟实现strcat
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}*/


/*//模拟实现strcpy
char* my_strcpy(char* dest, const char* src)
{
	//dest soe不能为空
	assert(*dest != NULL);
	assert(*src != NULL);

	//将dest的起始位置放到ret里，
	char* ret = dest;
	//拷贝src指向的字符串到dest指向的空间，包含 '\0'
	while (*dest++ = *src++)
	{
		;
	}
	//返回目的地的起始位置
	return ret;
}

int main()
{
	//正确示范
	//char arr1[] = "abcdefg";
	//char arr2[] = "bit";
	//strcpy(arr1, arr2);//srrcpy(目的地，要拷贝的东西)

	//错误示范
	char arr2[] = { 'a','b','c' };//err 会导致程序越界访问

	char* arr1 = "abcdefg";//err 会导致程序崩溃
	//模拟实现strcpy
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}*/

/*//模拟实现strlen函数的方法
//1.计数器的方法
//2.递归 不创建临时变量求字符串长度
//指针-指针

//1.计数器的方法
//size_t == unsigned int 
int my_strlen(const char* str)//这里的int类型还可以写成size_t
{
	int count = 0;
	assert(str != NULL);

	while(*str != '\0')//while(*str)可以这样写，但是这样写多此一举
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	//正确示范
	//int len = my_strlen("abcdef");//直到找到\0才会停止
	//printf("%d\n", len);
	
	//错误示范
	//char arr[] = { 'a','b','c','d','e','f' };//这个时候出现的是随机值
	//int len1 = strlen(arr);
	//printf("len = %d\n", len1);

	//模拟实现strlen函数
	//int len = my_strlen(len);
	
	//strlen的注意事项
	if (strlen("abc") - strlen("abcdef") > 0 )//结果是什么？ 
	{
		printf("haha");
	}
	else
	{
		printf("hehe");
	}
	//答：结果是haha 因为他的定义是size_t  size_t等于unsigned int 是无符号 如果用自己写的函数那结果是负数
	return 0;
}*/

/*//【题目名称】
//字符串旋转结果
//【题目内容】
//
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

int is_s1_move(char* s1, char* s2)
{
	int len1 = (int)strlen(s1);
	int len2 = (int)strlen(s2);
	if (len1 != len2)
	{
		return 0;
	}
	//1.在s1字符串中追加一个str1字符串
	//strcat
	//strncat
	strncat(s1, s1, 6);//往后面追加一个他的数
	//2.判断s2指向的字符串是否是s1指向的字符串的子串
	char* ret = strstr(s1, s2);//strstr-找子串的 找到返回他的子串的地址，找不到返回一个空指针
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
//strcat的使用 
int main()
{
	char arr1[30] = "abc";
	char arr2[] = "edf";
	
	strcat(arr1, arr1);
	printf("%s\n", arr1);
	return 0;
}*/