#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Stu//typedef ������һ�����ְ� 
{
	//��Ա����
	char name[20];//�������
	short age;//����
	char tele[12];//�绰
	char sex[5];//�Ա�
}Stu;//ͨ��typedef ����һ����Stu����������

void Print1(Stu tmp)//�ṹ�崫��
{
	printf("name��%s\n", tmp.name);//ͨ�� �� ����
	printf("age��%d\n", tmp.age);
	printf("tele��%s\n", tmp.tele);
	printf("sex��%s\n", tmp.sex);
}

void Pintf2(Stu* ps)//�ṹ��ָ�봫��
{
	printf("naem��%s\n", ps->name);//ͨ����ͷ-> ���� ��ͷ����Խṹ��ָ���
	printf("age��%d\n", ps->age);
	printf("tele��%s\n", ps->tele);
	printf("sex��%s\n", ps->sex);
}
int main()
{
	Stu s = { "����",17,"15233253654","��" };//�ṹ���ʼ��
	//��ӡ�ṹ������
	//�ʣ�Print1 ��Print2 �ĸ����ã�
	//�𰸣���ѡPrint2��ԭ��
	//Print1���˷��ڴ�Ҳ��ʱ�� �β���ʵ�ε�һ����ʱ���� ���ʵ����200�ֽڵĻ� ��Ҫ������ȥ ��Ҳ̫�˷��ڴ���
	//Print2��ʡ�ڴ棬�����ǵ�ַ һ����ַ�޷Ǿ��� 4 ���ֽڻ���8���ֽ� 32ƽ̨4���ֽ� 64ƽ̨8���ֽ� ���۽ṹ������ֻ��4/8���ֽ�
	//		  �������ָ�������----��ʡ�ռ䡣
	//	���⣺2����ֱ�Ӳ���ԭ���ṹ�壬��1���������������
	//�����ҪǶ�׵Ļ� Ƕ�ף�ָ��-->Ƕ�׵Ľṹ��.��Ա����
	

	//Ȼ��github�����ϴ���������  ������������������������������������������������������������������������������������������������������

	Print1(s);//�ṹ�崫��
	Pintf2(&s);//�ṹ��ַ����
	return 0;
}

/*struct S
{
	int a;
	char c;//char ���ַ� ��''   char [] ���ַ��� ��""  
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;//�ṹ��Ƕ��ʹ��
	char* pc;
};

int main()
{
	char arr[] = "hello bit\n";
	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};//�ṹ��Ƕ�׳�ʼ��
	printf("%s\n", t.ch);//hehe
	printf("%d\n",t.s.a);//100
	printf("%c\n",t.s.c);//w
	printf("%s\n", t.s.arr);//hello world
	printf("%lf\n", t.s.d);//3.14
	printf("%s\n",t.pc);//hello bit
	return 0;
}*/

/*typedef struct Stu
{
	//��Ա����
	char name[20];//�������
	short age;//����
	char tele[12];//�绰
	char sex[5];//�Ա�
}Stu;
int main()
{
	Stu s1 = { "����",17,"15203334789","��" };//�ṹ�������ʼ��
	struct Stu s2 = {"����",30,"15503332589","Ů"};//�ṹ�����
	return 0;
}*/

/*//�ṹ������Ķ���ͳ�ʼ��

struct Point
{
	int x;
	int y;
}p1;				//�������͵�ͬʱ�������p1


int main()
{
	//struct Point p2;	//����ṹ�����p2
	struct Point p3 = { 1,2 }; //��ʼ�������������ʱ�򸳳�ʼֵ
	return 0;
}*/

//����һ��ѧ��-һЩ����
//����
//����
//�绰
//�Ա�

////struct �ṹ��ؼ��� stu - �ṹ���ǩ �����滻����Ҫ����һ��ѧ��������student   struct stu - �ṹ������  Ҫ�����ṹ�����  Ҫ��main�д����ṹ�����
//struct Stu//����һ���ṹ������ //����ṹ�����͵�ʱ��ռ���ڴ�Ŀռ� �����ṹ�������ʱ���ȥ�ڴ��������˿ռ�
//{
//	//��Ա����
//	char name[20];//�������
//	short age;//����
// 	char tele[12];//�绰
//	char sex[5];//�Ա�
//}s1,s2,s3;//s1,s2,s3 ������ȫ�ֵĽṹ�����	�Ʊ����б� //�����б� //����ֺŲ��ܶ� ������ //��Ϊ���ǽṹ������ �ṹ��������һ����� ����Ҫ�Ӹ��ֺ�
//		  //������ʹ��ȫ�ֱ���������Ȳ����ѵĻ�����ʹ��

//struct �ṹ��ؼ��� stu - �ṹ���ǩ �����滻����Ҫ����һ��ѧ��������student   struct stu - �ṹ������  Ҫ�����ṹ�����  Ҫ��main�д����ṹ�����
// 
//---------------------------------------------------------�ָ���---------------------------------------------------------

//�ܽ᣺����ֺ�ǰ�� ��s1,s2,s3 ��ֱ�Ӵ����Ľṹ�����
//		����ֺ�ǰ�� ��Stu ��ֱ�Ӱѽṹ������struct Stu ����һ������ �ĳ��� Stu  �����ͽ��������� 
//---------------------------------------------------------�ָ���---------------------------------------------------------

//��ǿһ��ṹ���֪ʶ���Ժ������µ�֪ʶ �����Ǹ� ����������кܴ������ �����������Ŷ
/*typedef struct Stu//typedef ���¸�����ṹ��������һ������д�������ŵķֺ�ǰ�� //�򵥵��������struct Stu�ĳ���Stu
{
	//��Ա����
	char name[20];//�������
	short age;//����
	char tele[12];//�绰
	char sex[5];//�Ա�
}Stu;//���ڿ���ͨ��stuȥ���������� 
	//Ҳ�����൱�ڰѽṹ��������������һ������ ����������ִ������� �����������ֵĻ��͵� struct Stu s�����ṹ������� ���������־Ϳ����� Stu s1 �����ṹ�����
	//�򵥵��������struct Stu�ĳ���Stu
int main()
{
	struct Stu s1;//s �Ǵ��������Ľṹ����� Ҳ�Ǿֲ����� //����ṹ�����͵�ʱ��ռ���ڴ�Ŀռ� �����ṹ�������ʱ���ȥ�ڴ��������˿ռ�
				  //�򵥵��������struct Stu�ĳ���Stu
	Stu s2;//ͨ��typedef��������һ�����ֽ�Stu���Ϳ���ͨ�����������һ������
	return 0;
}*/

/*//�ݹ�ʵ��n��k�η�
double Pow(int n, int k)
{
	if (k < 0)
	{
		return 1.0 / (Pow(n, -k));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}
int main()
{

	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;
}*/

/*int  DigitSum(unsigned int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main()
{
	unsigned int n = 0;
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("ret = %d\n", ret);
}*/

/*//��Ŀ����ӡ�˷��ھ���
//Ҫ��ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9*9�۾߱����12�����12*12�ĳ˷��ھ���
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d", i, j, i * j);//����������룬3�Ǵ�ӡ��λ��������λ���ÿո����
		}
		printf("\n");
	}	
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}*/
/*//��Ŀ��ʹ��ָ���ӡ��������
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
}*/

/*//��Ŀ����ȡһ���������������е�ż��ά������λ���ֱ��ӡ������������
void print(int m)
{
	int i = 0;
	printf("����λ:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);//ÿ�ε���m�ͻ�����
	}
	printf("\n");
	printf("ż��λ:\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
	return 0;
}*/
/*//��������в�ͬλ�ĸ���
int get_diff_bit(int m, int n)
{
	int count = 0;
	 int tmp = m ^ n; 
	 while (tmp)
	 {
		tmp = tmp & (tmp - 1);
		count++;
	 }
	return count;

}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = get_diff_bit(m,n);
	printf("count = %d\n", count);
	return 0;
}*/
/*////ͳ�ƶ�������1�ĸ���
////��һ���㷨
//int count_bit_one(unsigned int n)//����unsigned ����Ϊ����� -1�Ļ��ͻ����������ʱ��ĳ��޷��ž���
//{
//	int count = 0;
//	while (n)//����ѭ��
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int count_bit_one(int n)//�ڶ����㷨
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//�ȸ��һ��������
int count_bit_one(int n)//�������㷨 ����д��������д��
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
//n = n&(n-1)
//n
//13
//1101 n
//1100 n-1
//1100 n
//1011 n-1
//0111 n-1
//0000 n    ÿ�μ�һ������ʧһ��0
int main()
{
	//ͳ�ƶ�������1�ĸ���
	//һ�����������ڴ��д洢���ǲ���
	int a = 0;
	scanf("%d", &a);
	//дһ��������a�Ķ�����(����)��ʾ���м���1
	int count = count_bit_one(a);
	//13
	//00000000000000000000000000001101
	printf("count = %d\n", count);
	//system("pause");//system�⺯��- ִ��ϵͳ���� - pause(��ͣ)
	return 0;
}*/