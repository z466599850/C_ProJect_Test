#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//��� ������
void menu()
{
	printf("*****************************\n");
	printf("****** 1.Add 	2.Sub *******\n");
	printf("*******3.Mul	4.Div *******\n");
	printf("*******	    0.quit    *******\n");
}

int Add(int x,int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}



/*//����ָ������д��
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("����������������:>");
			scanf("%d%d", &x, &y);
			int ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
			break;
		}
		else
		{
			printf("ѡ�����\n");
			break;
		}
	} while (input);


	return 0;
}*/


//switch �򻯰��д��
void Calc(int(*pca)(int, int))
{
	int x = 0;
	int y = 0;
	printf("��ѡ������������:>");
	scanf_s("%d%d", &x, &y);
	printf("ret = %d\n", pca(x,y));
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1://ѡ���ĸ������ĸ� ���磺1 ����Calc Add
			Calc(Add);
		case 2:
			Calc(Sub);
		case 3:
			Calc(Mul);
		case 4:
			Calc(Div);
		case 0:
			printf("�˳�\n");
		default:
			printf("�������\n");
		}
	} while (input);
	return 0;
}


/*//switch ����д��
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		printf("��ѡ������������:>");
		scanf("%d%d", &x, &y);
		switch (input)
		{
		case 1:
			printf("%d\n", Add(x, y));
			break;
		case 2:
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("�˳�\n");
		default:
			printf("�������\n");

		}
	} while (input);
	return 0;
}*/


/*void BubbleSort(int arr[], int sz)
{
	//...
}

//Ԥϰ����qsort - ���������������͵�����

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}*/

/*//ָ����ָ�������ָ��
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10] = { 0 };
	int (* p)[10] = &arr;//ȡ������ĵ�ַ

	int(*pf)(int, int);//����ָ��
	int(*pfArr[4])(int, int);//����ָ������ pfArr��һ������-����ָ�������
	//ppfArr��һ��ָ�� [����ָ�������] ָ��
	int(*(*ppfArr)[4])(int, int) = &pfArr;// ָ����ָ�������ָ�� ע��һ�������ȥ�������� �������������������
	//
	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� ������ int(*)(int,int)
	// δ���ܹ��õ�����������
	return 0;
}*/

/*//��ϰ
char* my_strcpy(char* dest, const char* src);


int main()
{
	//�������ϵ��β�д��������Ŀ��
	//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
	char* (*pf)(char*,const char*) = my_strcpy;//����ָ��,ָ�����my_strcpy
	//2.дһ������ָ�����飬�ܹ����4��my_strcpy�����ĵ�ַ
	char* (*pff[4])(char*, const char*) = {0,0,0,0,};//����ָ������
	return 0;
}*/

/*//����ָ������
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int a = 0;
	int b = 0;
	//int(*p)(int, int) = Add;//���Ҫ����4���������ͣ������ô������
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
	int i = 0;
	for (i = 0; i < 4; i++)//ʹ��ѭ��ȥ�������ָ�������ֵ
	{
		printf("%d\n", parr[i](2,3));//(x,y)����ֵȥ��� �ó� 5  -1  6  0
	}
	return 0;
}*/

/*//����
int Add(int x, int y)
{
	int z = 0 ;
	return z = x+y;
}

int main()
{
	int a = 0;
	int b = 0;
	int(*pa)(int, int) = Add;
	printf("%d\n", pa(2, 3));
	printf("%d\n", Add(2, 3));
	printf("%d\n", (*pa)(2, 3));//�����*�� ���һ��
	//�����ֵ�д����һ�� �ȼ۵�
	return 0;
}*/

/*//signal;��һ������������
// signal�����Ĳ�����2������һ����int���ͣ��ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ���int ����������void
// signal������������Ҳ��һ������ָ�롣�ú���ָ��ָ�����int������������void
void(*signal(int, void(*)(int)))(int);

//��
typedef void(*pfun_t)(int);//typedef �޸ĺ����� ��typedef����ָ���������޸ĵ�Ŷ
pfun_t signal(int, pfun_t);

//�������������޸ĵ�
typedef unsigned int unit;
*/


/*//����ָ��
//����ָ�� - ��ָ�������ָ��
//����ָ�� - ��ָ������ָ�� - ��ź�����ַ��һ��ָ��
void Print(char*str)
{
	printf("%s\n", str);
}
int main()
{
	void (*pa)(char*) = Print;
	(*pa)("hello bit");
	return 0;
}*/

/*int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	//int arr[10] = { 0 };
	//int(*pa)[10] = &arr;	
	//printf("%d\n", Add(a, b));

	//&������ �� ������ ���Ǻ����ĵ�ַ
	//printf("%p\n", &Add);//�������е�ַ
	//printf("%p\n", Add);//������Ĳ�û��̫�������

	int(*pa)(int, int) = Add;//����ָ��
	printf("%d ", (*pa)(2, 3));
	return 0;
}*/

/*//˼��:�������Ĳ���Ϊ����ָ���ʱ�򣬿��Խ���ʲô����?
void test(char** p)
{
}

int main()
{
	char c = 'w';
	char* pc = &c;
	char** pcc = &pc;
	char arr[10];
	test(&pc);//ok
	test(pcc);//ok
	test(arr);//ָ������Ҳ����
	return 0;
}*/
/*//����ָ�봫��
void test(int** p)
{}

int main()
{
	int n = 10;
	int* p = &n;
	int** pp = &p;
	test(pp);//ok
	test(&p);//ok
	return 0;
}*/

/*//˼��:��һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô����?
void test1(int *p)
{}
void test2(char *p)
{}
int main()
{
	int a = 10;
	int* pa = &a;
	test1(&a);//ok
	test1(pa);//ok

	char  ch = 'w';
	char* pc = &ch;
	test2(&ch);
	test2(pc);
	return 0;
}*/

/*//һ�����鴫��
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", i);
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//һ��ָ��p����������
	print(p, sz);//����
	return 0;
}*/

/*//��ά���鴫��

void test(int arr[3][5])
{}
void test1(int arr[][5])
{}
//void test2(int arr[3][])//err �����
//{}
//void test3(int *arr)//err
//{}
//void test4(int* arr[5])//err
//{}
void test5(int (*arr)[5])
{}
//void test6(int **arr)//err
//{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);
	test1(arr);
	//test2(arr);
	//test3(arr);
	//test4(arr);
	test5(arr);
	//test6(arr);
	return 0;
}*/

/*//һά���鴫��
void test(int arr[])
{}
void test1(int arr[10])
{}
void test2(int *arr)
{}
void test3(int *arr[2])
{}
void test5(int *arr)
{}
int main()
{
	int arr[10] = { 0 };
	int* arr1[2] = { 0 };
	test(arr);
	test1(arr);
	test2(arr);
	test3(arr1);
	test5(arr1);
	return 0;
}*/

/*int main()
{
	char* ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";//Ҫ֪��ָ����4���ֽ���ô�ܴ����ô���� ��Ȼ�������Ԫ�صĵ�ַ ͨ����Ԫ�صĵ�ַ�����ҵ�abcdef
							//abcdef�Ǹ������ַ�������Ȼ�������޸� �Ӹ�const ���ǲ����޸���
	//ָ������ - ���ָ�������
	int* arr[10];
	char* ch[5];
	//����ָ�� - ָ������
	//int* p3;//����ָ�� - ָ�����ε�ָ��
	//char* p4;//�ַ�ָ�� - ָ���ַ���
	int arr2[5];//����
	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ�� //һ���������ȥ�������� ������������
	return 0;
}*/