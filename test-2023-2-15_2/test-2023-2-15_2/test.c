#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <windows.h>

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(sizeof(5 * sizeof(int)));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//������С
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}

/*//struct S
//{
//	int n;
//	int arr[10];
//};

//struct S
//{
//	int n;
//	int arr[];//δ֪��С��-��������
//};

struct S
{
	int n;
	int arr[]; //δ֪��С�� - ���������Ա-����Ĵ�С�ǿ��Ե�����
};

int main()
{
	//struct S s;
	//printf("%d\n", sizeof(s));//�����ʱ�򲻰����ṹ���Ա
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//���������鿪�ٿռ�
	//ʹ��
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;//0 1 2 3 4
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	//��ӡ
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//�ͷ�
	free(ps);
	ps = NULL;
	return 0;
}*/

/*Test()
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL;
	//��
	str = NULL;
	//������仰�Ǹĵ�
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}*/

/*void GetMomery(char** p, int num)
{
	*p = (char*)malloc(num);
}
Test()
{
	char* str = NULL;
	GetMomery(&str, 100);
	strcpy(str, "hello");
	printf(str);
	//�����ͷŶ�̬�����ڴ棬�����ڴ�й¶
	//��
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}*/

/*int* Test()
{
	int* ptr = malloc(100);//���� ����free���ܻ���
	return ptr;
}

int main()
{
	int* Test();
	return 0;
}

int* Test()
{
	//static int a = 10;//��̬��
	int a = 10;//ջ��err
	return &a;
}

int main()
{
	int* p =Test()
	return 0;
}

//����ջ�ռ��ַ������
char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(&str);
	printf(str);
}

int main()
{
	Tset();
	return 0;
}*/

/*//����2
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello word");
	printf(str);

	free(str);
	str = NULL;
}

int main()
{
	//�� �����ʲô
	//1.���д���������ֳ������������
	//2.��������ڴ�й¶
	//Ϊʲô������ڴ�й©�أ�str��ֵ���ݵ���ʽ��p
	//p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
	//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
	//�����޷��ҵ������Ի�����ڴ�й©
	Test();

	//char* str = "abcdef";
	//printf("%s\n", str);
	//printf(str);
	//printf("abcdef");
	return 0;
}
//����1
void GetMemory(char** p)
{
	*p = (char*)malloc(100);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	strcpy(str, "hello word");
	printf(str);

	free(str);
	str = NULL;
}

int main()
{
	//�� �����ʲô
	//1.���д���������ֳ������������
	//2.��������ڴ�й¶
	//Ϊʲô������ڴ�й©�أ�str��ֵ���ݵ���ʽ��p
	//p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
	//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
	//�����޷��ҵ������Ի�����ڴ�й©
	Test();

	//char* str = "abcdef";
	//printf("%s\n", str);
	//printf(str);
	//printf("abcdef");
	return 0;
}

void GetMemory(char* p)
{
	p = (char*)malloc(100);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(str);
	strcpy(str, "hello word");
	printf(str);
}

int main()
{
	//�� �����ʲô
	//1.���д���������ֳ������������
	//2.��������ڴ�й¶
	//Ϊʲô������ڴ�й©�أ�str��ֵ���ݵ���ʽ��p
	//p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
	//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
	//�����޷��ҵ������Ի�����ڴ�й©
	Test();

	//char* str = "abcdef";
	//printf("%s\n", str);
	//printf(str);
	//printf("abcdef");
	return 0;
}*/

/*int main()
{
	//1.��NULLָ������ò���
	//int* p = malloc(40);
	////��ô�ƽ���Ѱ취�� ����p������ص��ж�
	//*p = 10;//malloc���ٿռ�ʧ�� - ��NULLָ�������

	//2.�Զ�̬�����ڴ��Խ�����
	//int* p = malloc(40);//10��int
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i <= 10; i++)
	//	{
	//		*(p + i) = i;
	//	}
	//}
	//free(p);
	//p = NULL;

	//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ��ڴ�ռ�
	//int a = 10;
	//int* p = &a;
	//p = 10;
	////...
	// �ԷǶ�̬�����ڴ�ʹ��free�ͷ��ڴ�ռ�
	//free(p);
	//p = NULL;
	//

	//4. ʹ��free�ͷŶ�̬�����ڴ��һ����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	*p++ = i;
	//}
	////���տռ�
	////ʹ��free�ͷŶ�̬�����ڴ��һ����
	////Ϊʲô�� ��Ϊp++����ʼλ���Ѿ����ı��� p������free�ͷ��ǿ��Ե�
	//free(p);
	//p = NULL;

	//5.��ͬһ�鶯̬�ڴ����ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////����ʹ������
	////�ͷ�
	//free(p);
	//p = NULL;//������仰�����free��û��������
	////....
	//free(p);

	//6.��̬�����ڴ������ͷ�(�ڴ�й¶)

	while (1)
	{
		malloc(1);//��ͻ��񿪱��ڴ� �ܿ��µ�һ���� ����ڴ�ĸ�

	}
	return 0;
}*/

/*int main()
{
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////ʹ��
	//int* p2 = realloc(p, 80);
	//if (p != NULL)
	//{
	//	p = p2;
	//}

	//int* p = realloc(NULL, 40);//malloc(40)


	return 0;
}*/