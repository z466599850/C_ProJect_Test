#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

//模拟实现memcpy 这组代码其实已经实现了C语言的标准 要想达到满分 还要另加
void* my_memcpy(void* dest, const void* src, size_t num)//size_t == unsigned int
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

//C语言标准：
//memcpy 只要处理 不重叠的内存拷贝就可以 重叠的也可以只是他额外的完成来了C语言让他考60分他非考100
//memmove 处理重叠内存的拷贝 不重叠的也可以


int main()
{
	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[5] = { 0 };

	//strcpy(arr2, arr1);//不行的这个是字符串拷贝
	// 
	//那怎么拷贝呢 当然是用 内存拷贝的方法 memcpy什么类型都能拷贝
	//memcpy(arr2, arr1, sizeof(arr1));//memcpy(目的地，源头，访问多少个字节);所以用sizeof算

	//模拟实现memcpy
	//my_memcpy(arr2, arr1, sizeof(arr1));
	//打印传回来的值
	

	//memmove 介绍
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };//处理内存重叠的情况的
	memmove(arr1 + 2, arr1,20 );
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}


/*int main()
{
	//char ch = tolower('Q');
	//char ch = toupper('q');
	//putchar(ch);//putchar可以打印一个字符

	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if(isupper(arr[i]))//如果是大写
		{
			arr[i] = tolower(arr[i]);//转小写
		}
		i++;//每次执行完 i++;
	}
	printf("%s\n", arr);//i am a student
	//一定要灵活运用学过的函数
	return 0;
}*/


/*字符分类函数:
	 ___________________________________________________________________________________________________
	|函数       |    如果他的参数符号下列条件就返回真													|
	|			|																						|
	|iscntrl    |    任何控制字符																		|
	|			|																						|
	|isspace    |    空白字符 : 空格，换页''\f，换行'\n'，回车'\r'，制表符'\t'或者垂直制表符'\v'		|
	|			|																						|
	|isdigit    |    十进制数字 0~9																		|
	|			|																						|
	|isxdigit   |    十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F							|
	|			|																						|
	|islower    |    小写字母a~z																		|
	|			|																						|
	|isupper    |    大写字母A~Z																		|
	|			|																						|
	|isalpha    |    字母a~z或A~Z																		|
	|			|																						|
	|isalnum    |    字母或者数字，a~z, A~Z, 0~9														|
	|			|																						|
	|ispunct    |    标点符号，任何不属于数字或者字母的图形字符(可打印)									|
	|			|																						|
	|isgraph    |    任何图形字符																		|
	|			|																						|
	|isprint    |    任何可打印字符，包括图形字符和空白字符												|
	|___________|_______________________________________________________________________________________|*/


/*int main()
{
	char ch = 'w';
	//int ret = islower(ch);//头文件是#include <ctype.h>
	int ret = isdigit(ch);
	printf("%d\n", ret);
	return 0;
}*/



/*int main()
{
	//错误码 - 错误信息
	// 0 - No error 没错
	// 1 - Operation not permitted 不允许操作
	// 3 - No such file or directory 没有这个文件或者文件夹
	// ...

	//errno 是一个全局的错误码的变量
	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中	
	//char* str = strerror(errno);//strerror 把我们的错误码转换成对应的错误信息 然后返回对应的地址 
								//用的时候要在里面放 errno 还要引用头文件
	//printf("%s\n", str);

	//举个例子
	// 
	//打开文件
	FILE* pf = fopen("test.txt","r");//fopen("文件的名称"，"r"); fopen打开文件的意思 "r"读文件 返回类型是 FILE*是一个指针
						  //注：这种打开的方式必须文件在，否则打开失败
	if (pf == NULL)//如果调用失败会返回一个空指针
	{
		//原因是什么呢？
		printf("%s\n", strerror(errno));//errno 引用头文件 #include <errno.h>
	}
	else
	{
		printf("open file success\n");
	}
	return 0;
}*/

/*//strtok 拿到其中的某一个段或者所有的段的时候，就可以用strtok来操作
int main()
{
	//192.168.31.121
	//192 168 31 121 - 把他分开就是strtok
	//zsf@bitedu.tech
	//zsf bitedu.tech

	//char arr[] = "zsf@bitedu.tech";
	//char* p = "@.";

	//IP地址的表示形式是点分十进制的表达方式
	char arr[] = "192.168.31.121";
	char* p = ".";

	//zsf@bitedu.tech
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	//切割buf中的字符串
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))//在调用的时候会找到上次分隔符的位置，他会将符号改成'\0' 有记忆的
	{
		printf("%s\n", ret);
	}

	//这样的写法太垃了 只是举个例子才这样写
	//char* ret = strtok(arr, p);
	//printf("%s\n", ret);
	//char* ret = strtok(NULL, p);//用过之后他会自动记住\0的位置，找下一个的时候直接写NULL就行
	//printf("%s\n", ret);
	//char* ret = strtok(NULL, p);
	//printf("%s\n", ret);
	return 0;
}*/


/*//模拟实现strstr
//如果可以的话可以去学一下KMP算法
char * my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if ((*s2 == '\0'))
		{
			return cur;//找到子串
		}
		if ((*s1 == '\0'))
		{
			return NULL;//找不到子串
		}
		cur++;
	}
	return NULL;
}

//strstr 查找字符串
int main()
{
	char* p1 = "abcdef";
	char* p2 = "def";
	//函数实现
	//char* ret = strstr(p1, p2);//p1指向的字符串找p2存在不存在
							   //注：如果p1的字符串有两个p2的值，则取第一次找到的数
	//模拟实现strstr
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("子串不存在");
	}
	else
	{
		printf("ret = %s\n",ret);
	}
	return 0;
}*/

/*int main()
{
	//strncmp - 字符串比较
	const char* p1 = "abcdef";
	const char* p2 = "abcqwer";
	//int ret = strcmp(p1, p2);
	int ret = strncmp(p1, p2, 4);//strcmp(字符串，字符串，要比较几个值)
	printf("ret = %d", ret);
	return 0;
}*/