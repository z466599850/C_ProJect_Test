#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stddef.h>
struct S
{
	char c;
	int i;
	double d;

};

int main()
{
	//offsetof();//offset ƫ���� of˭��ƫ����//��������ṹ���Ա����ڽṹ����ʼλ�õ�ƫ�����Ǽ�
				//������һ����������һ���꣡������������������������������������������������������������������������������������������
				//�÷���size_t offsetof(�ṹ�������ṹ���Ա����������) ���ص���ƫ����
	printf("%d\n", offsetof(struct S, c));//ע�������ǽṹ�������������ǽṹ�������
	printf("%d\n", offsetof(struct S, i));//Ҫ����ͷ�ļ� #include <stddef.h>
	printf("%d\n", offsetof(struct S, d));
	//ƫ������ 0 4 8
	//������һ����������һ���꣡
	//offsetof �������ƫ������
	return 0;
}

/*//һ������¶�����2�Ĵη������磺2 4 8 16 ���������� ��������������
//#pragma pack(4)//����Ĭ�϶�����Ϊ4 ����� 12 
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����

#pragma pack(1)//����Ĭ�϶�����Ϊ1 �����9
struct S
{
	char c1;
	double d;
};
#pragma pack()//ȡ�����õ�Ĭ�϶�����


int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
	return 0;
}*/



/*//��������Ҫ�� s1
//�����������ǵ��ڴ�
//����s1��λ�� c1 ����Ҳ������ .��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��  Ҳ����c1 Ҫ��0��λ�� ��0��ʼ�� 
// 
//
//
// 1 a��λ�ô��⿪��4���ֽ� a���ֽںͶ������Ƚ�һ�� Ȼ����� �������� ����int ���ֽ���4 ���ڴ���Ҫ���� 4�ı�������
// 2
// 3
// 4
// 1 c2 ��λ�� VSĬ�϶�������8 
//  Ȼ��һ����9���ֽ� Ȼ�������Ա������������ֽ�ҲҪ��9�ֽڶ���һ�������ֽ���4 ��9�ǲ���4�ı����� �������Ծ�����
//
// 12 ��4�ı��� OK �����12

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char s2;
	int a;
};
struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c;
	struct S3 s3;
	double d;
};
int main()
{
	struct S1 s1 = { 0 };
	printf("s1 = %d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("s2 = %d\n", sizeof(s2));
	struct S3 s3 = { 0 };
	printf("s3 = %d\n", sizeof(s3));
	struct S4 s4 = { 0 };
	printf("s4 = %d\n", sizeof(s4));
	return 0;
}*/

/*struct T
{
	double weight;
	short age;
};

struct S
{
	char c;
	struct T st;//�ṹ��Ƕ��
	int a;
	double d;
	char arr[20];
};


int main()
{
	struct S s = { 'c',{55.4,17},100,3.14,"hello bit" };//�ṹ���ʼ�� + �ṹ��Ƕ�׳�ʼ��
	printf("%c %lf %d %d %lf %s\n", s.c, s.st.weight, s.st.age, s.a, s.d, s.arr);//�ṹ���ӡ
	return 0;
}*/

/*typedef struct Node //���ȥ��Node ������ľͲ������������õĻ�������ʡ�Ե�Node ע���ṹ��Ҫ���ҵ�ͬ���ͽṹ��Ļ�Ҫ��ָ��
{
	int data;
	struct Node n;//�ڵ��ŵĲ������֣����Ǵ����һ���ڵ�ĵ�ַ err
	struct Node* next;//correct
}Node;//������

int main()
{
	struct Node n1;
	Node n2;//ֻҪ����typedef�Խṹ�������� Ȼ���ڷֺ�ǰ���������� �Ϳ������� ������д��������
	return 0;
}*/





/*//�ṹ���������
//���ݽṹ���������ڴ��д洢�Ľṹ
//����
//������1 2 3 4 5 ����������һ��������������
struct Node
{
	int data;
	struct Node n;//�ڵ��ŵĲ������֣����Ǵ����һ���ڵ�ĵ�ַ err
	struct Node* next;//correct
};

int main()
{
	sizeof(struct Node);
	return 0;
}*/

/*struct
{
	int a;
	char c;

}sa;//��һ�ξͲ��������� ����һ�νṹ���ʱ������õ������ṹ������

struct
{
	int a;
	char c;

}*psa;
int main()
{
	psa = &sa;
	return 0;
}*/

/*//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������(����)
//����ѧ�������� - ���� - �绰- �Ա� - ����
struct Stu // �ṹ������ �ṹ������
{
	char name[20];//����
	char tele[12];//�绰
	char sex[10];
	int age;
	//����������ǳ�Ա����
}s4,s5,s6;//ȫ�ֱ��� �ֺŲ��ܶ�

struct Stu s3;//ȫ�ֱ���

int main()
{
	//�����Ľṹ�����
	struct Stu s1;
	struct Stu s2;
	return 0;
}*/

/*//memset - �ڴ�����
int main()
{
	//char arr[] = "";
	//memset(arr, '#', 10);
	int arr[10] = { 0 };//err
	//40���ֽ�
	//01 01 01 01 01 01 01 01 01 01  00 00 00 00 00 00...
	// 01 01 01 01     01 01 01 01   01 01 00 00
	//16���Ƶ�Ŷ
	memset(arr, 1, 10);//���˸ĵ���10���ֽ�
	return 0;
}*/

/*int main()
{
	//01 00 00 00 02 00 00 00 03 00 00 00
	//01 00 00 00 02 00 00 00 05 00 00 00  �Ƚ�9�Ļ���-1 ��Ϊ�ǱȽϵ����ֽ� 9���ֽڸպõ���03 05
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,5,4,3 };

	int ret = memcmp(arr1, arr2, 9);//memcmp(�Ƚ�˭���Ƚ�˭���Ƚϵ��ֽڵĸ���)
	printf("%d\n", ret);
	return 0;
}*/

/*
//ע�⣺��Ҫ�ô���Ŷ
//ģ��ʵ��memmove
//memcpy���ص�����
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//ģ��ʵ��memmove
//memmove�ص�����
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//if (dest < src)
	//{
	//	//ǰ->��
	//	while (count--)
	//	{
	//		*(char*)dest = *(char*)src;
	//			++(char*)dest;
	//			++(char*)src;
	//	}
	//}
	//else
	//{
	//	//��->ǰ
	//	while (count--)
	//	{
	//		*((char*)dest + count) = *((char*)src + count);
	//	}
	//}

	//�������жϷ�ʽ
	//��������õ������ַ�ʽ
	if (dest<src||dest>(char*)src+count)
	{
		//ǰ->��
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//��->ǰ
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}

int main()
{
	//���ص�����
	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[10] = { 0 };
	//arr1�����ֿ�����arr2��
	//my_memcpy(arr2, arr1, sizeof(arr1));

	//�ص�����
	//             1 2 1 2 3 4 5 8 9 10
	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
	//my_memcpy����ʤ���ص�������
	//my_memcpy(arr3 + 2, arr3, 20);
	// 
	//memmove����ʤ���ڴ���ص�����
	//memmove(arr3 + 2, arr3, 20);
	//C���Ա�׼˵��memcpy�������Կ������ص��ľͿ�����
	//���·��֣�vs2022�����µ�memcpy���Դ����ص�����
	//memcpy(arr3 + 2, arr3, 20);//��Ȼ���Ҳ���Ե��ǲ�����֤�����������¿���ʹ��

	//ģ��ʵ��memmove �ص�����
	my_memmove(arr3 + 2, arr3, 20);
	//��ӡ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}*/