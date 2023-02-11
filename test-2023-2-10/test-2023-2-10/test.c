#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

//ģ��ʵ��memcpy ���������ʵ�Ѿ�ʵ����C���Եı�׼ Ҫ��ﵽ���� ��Ҫ���
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

//C���Ա�׼��
//memcpy ֻҪ���� ���ص����ڴ濽���Ϳ��� �ص���Ҳ����ֻ����������������C����������60�����ǿ�100
//memmove �����ص��ڴ�Ŀ��� ���ص���Ҳ����


int main()
{
	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[5] = { 0 };

	//strcpy(arr2, arr1);//���е�������ַ�������
	// 
	//����ô������ ��Ȼ���� �ڴ濽���ķ��� memcpyʲô���Ͷ��ܿ���
	//memcpy(arr2, arr1, sizeof(arr1));//memcpy(Ŀ�ĵأ�Դͷ�����ʶ��ٸ��ֽ�);������sizeof��

	//ģ��ʵ��memcpy
	//my_memcpy(arr2, arr1, sizeof(arr1));
	//��ӡ��������ֵ
	

	//memmove ����
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };//�����ڴ��ص��������
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
	//putchar(ch);//putchar���Դ�ӡһ���ַ�

	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if(isupper(arr[i]))//����Ǵ�д
		{
			arr[i] = tolower(arr[i]);//תСд
		}
		i++;//ÿ��ִ���� i++;
	}
	printf("%s\n", arr);//i am a student
	//һ��Ҫ�������ѧ���ĺ���
	return 0;
}*/


/*�ַ����ຯ��:
	 ___________________________________________________________________________________________________
	|����       |    ������Ĳ����������������ͷ�����													|
	|			|																						|
	|iscntrl    |    �κο����ַ�																		|
	|			|																						|
	|isspace    |    �հ��ַ� : �ո񣬻�ҳ''\f������'\n'���س�'\r'���Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'		|
	|			|																						|
	|isdigit    |    ʮ�������� 0~9																		|
	|			|																						|
	|isxdigit   |    ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F							|
	|			|																						|
	|islower    |    Сд��ĸa~z																		|
	|			|																						|
	|isupper    |    ��д��ĸA~Z																		|
	|			|																						|
	|isalpha    |    ��ĸa~z��A~Z																		|
	|			|																						|
	|isalnum    |    ��ĸ�������֣�a~z, A~Z, 0~9														|
	|			|																						|
	|ispunct    |    �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ�(�ɴ�ӡ)									|
	|			|																						|
	|isgraph    |    �κ�ͼ���ַ�																		|
	|			|																						|
	|isprint    |    �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�												|
	|___________|_______________________________________________________________________________________|*/


/*int main()
{
	char ch = 'w';
	//int ret = islower(ch);//ͷ�ļ���#include <ctype.h>
	int ret = isdigit(ch);
	printf("%d\n", ret);
	return 0;
}*/



/*int main()
{
	//������ - ������Ϣ
	// 0 - No error û��
	// 1 - Operation not permitted ���������
	// 3 - No such file or directory û������ļ������ļ���
	// ...

	//errno ��һ��ȫ�ֵĴ�����ı���
	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��	
	//char* str = strerror(errno);//strerror �����ǵĴ�����ת���ɶ�Ӧ�Ĵ�����Ϣ Ȼ�󷵻ض�Ӧ�ĵ�ַ 
								//�õ�ʱ��Ҫ������� errno ��Ҫ����ͷ�ļ�
	//printf("%s\n", str);

	//�ٸ�����
	// 
	//���ļ�
	FILE* pf = fopen("test.txt","r");//fopen("�ļ�������"��"r"); fopen���ļ�����˼ "r"���ļ� ���������� FILE*��һ��ָ��
						  //ע�����ִ򿪵ķ�ʽ�����ļ��ڣ������ʧ��
	if (pf == NULL)//�������ʧ�ܻ᷵��һ����ָ��
	{
		//ԭ����ʲô�أ�
		printf("%s\n", strerror(errno));//errno ����ͷ�ļ� #include <errno.h>
	}
	else
	{
		printf("open file success\n");
	}
	return 0;
}*/

/*//strtok �õ����е�ĳһ���λ������еĶε�ʱ�򣬾Ϳ�����strtok������
int main()
{
	//192.168.31.121
	//192 168 31 121 - �����ֿ�����strtok
	//zsf@bitedu.tech
	//zsf bitedu.tech

	//char arr[] = "zsf@bitedu.tech";
	//char* p = "@.";

	//IP��ַ�ı�ʾ��ʽ�ǵ��ʮ���Ƶı�﷽ʽ
	char arr[] = "192.168.31.121";
	char* p = ".";

	//zsf@bitedu.tech
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	//�и�buf�е��ַ���
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))//�ڵ��õ�ʱ����ҵ��ϴηָ�����λ�ã����Ὣ���Ÿĳ�'\0' �м����
	{
		printf("%s\n", ret);
	}

	//������д��̫���� ֻ�Ǿٸ����Ӳ�����д
	//char* ret = strtok(arr, p);
	//printf("%s\n", ret);
	//char* ret = strtok(NULL, p);//�ù�֮�������Զ���ס\0��λ�ã�����һ����ʱ��ֱ��дNULL����
	//printf("%s\n", ret);
	//char* ret = strtok(NULL, p);
	//printf("%s\n", ret);
	return 0;
}*/


/*//ģ��ʵ��strstr
//������ԵĻ�����ȥѧһ��KMP�㷨
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
			return cur;//�ҵ��Ӵ�
		}
		if ((*s1 == '\0'))
		{
			return NULL;//�Ҳ����Ӵ�
		}
		cur++;
	}
	return NULL;
}

//strstr �����ַ���
int main()
{
	char* p1 = "abcdef";
	char* p2 = "def";
	//����ʵ��
	//char* ret = strstr(p1, p2);//p1ָ����ַ�����p2���ڲ�����
							   //ע�����p1���ַ���������p2��ֵ����ȡ��һ���ҵ�����
	//ģ��ʵ��strstr
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("�Ӵ�������");
	}
	else
	{
		printf("ret = %s\n",ret);
	}
	return 0;
}*/

/*int main()
{
	//strncmp - �ַ����Ƚ�
	const char* p1 = "abcdef";
	const char* p2 = "abcqwer";
	//int ret = strcmp(p1, p2);
	int ret = strncmp(p1, p2, 4);//strcmp(�ַ������ַ�����Ҫ�Ƚϼ���ֵ)
	printf("ret = %d", ret);
	return 0;
}*/