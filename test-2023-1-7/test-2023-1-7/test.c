#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	*p = 20;
	return 0;
	//������벻�е�Ŷ
	//��������Ѿ��������������ˣ��Ѿ�������ס��ȥ��
}

/*int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
		p++;
	}
	return 0;
}*/

/*int main()
{
	int a;//�ֲ���������ʼ����Ĭ�������ֵ
	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
	*p= 20;//������ϵͳ�������һ����ַ������ֵ�ĳ�20; ��Ϊ Ұָ��
	return 0;
}*/

/*int main()
{
	int arr[10] = { 0 };
	//int* p = arr;//������-��Ԫ�صĵ�ַ//�������4���ֽ�4���ֽڵ�ȥ��
	char* p = arr;//���ʱ����һ���ֽ�һ���ֽڵ�ȥ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}*/

/*int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);//��ַ����4

	printf("%p\n", pc);
	printf("%p\n", pc+1);//��ַ����1
	return 0;
	//ָ�����;�����:ָ����һ���߶�Զ(ָ��Ĳ���)
		//int* p; p + 1 -- > 4
		//char* p; p + 1-- > 1
		//double* p; p + 1-- > 8
}*/

/*int main()
{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));
	//��Ϊ�ҵ���64λ�������Դ�ӡ��������8
	//�����32λ�ĵ��Դ�ӡ�����ľ���4

	int a = 0x11223344;
	//int* pa = &a;
	//*pa = 0;
	char* pc = &a;
	*pc = 0;
	//printf("%p\n", pa);
	printf("%p\n", pc);
	return 0;
	//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
	//int* p; p�ܹ�����4���ֽ�
	//char* p; "p �ܹ�����1���ֽ�
	//double* p;*p�ܹ�����8���ֽ�
}*/


/*int main()
{
	int a = 10;//���ڴ��п���һ��ռ�
	 int* p = &a;//ָ����� ָ�룺�Ǵ�ű�����ַ�ı�������int* p =&a; ����p��������int*��p��ֵ��&a,Ҳ���Ǳ���a�ĵ�ַ��
	 //�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&������
	 //��a�ĵ�ַ�����p�����У�p����һ��ָ�����
	return 0;
}*/

/*int main()
{
	char a = 3;
	//00000000000000000000000000000011
	//00000011 - a  Ϊʲôȡ8λ�� ��Ϊchar������1���ֽ� 1���ֽڵ���8������λ ����Ҫ�ض�
	char b = 127;
	//00000000000000000000000001111111
	//01111111 - b ͬ��

	//a��b������
	//00000000000000000000000000000011 - a
	//00000000000000000000000001111111 - b
	// +3
	//00000000000000000000000010000010 - c
	char c = a + b;
	//10000010 - c
	//11111111111111111111111110000010 - ����
	//11111111111111111111111110000011 - ����
	//10000000000000000000000001111100 - ԭ��
	//-126 �洢����ԭ��
	printf("%d", c);
	return 0;
}*/


/*
//struct �� typedef �ֿ����壬������Ĵ�����ʾ��
typedef struct tagNode* pNode;//pNode�ǽṹ�����
struct tagNode
{
	char* pItem;
	pNode pNext;
};*/

/*//ʵ��2
typedef struct stu //typedef �����νṹ��������Ȼ����һ�������Ϳ����� int �� double ����ֱ��ʹ�� Stu �������
{
	char* name;
	int num;
	int age;
	char group;
	float score;
}Stu;//�����Stu�ǽṹ�����

int main() {
	//ʵ��1������ 
	//struct stu stu1;
	//ʵ��2������ 
	Stu stu1;
	Stu stu2;
	stu1.name = "elephant111";
	stu1.num = 12;
	stu1.age = 18;
	stu1.group = 'A';
	stu1.score = 137.0;
	printf("%s��ѧ����%d,������%d,��%c��,����ĳɼ���%.lf!\n",
		stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);
	stu2.name = "elephant222";
	stu2.num = 13;
	stu2.age = 19;
	stu2.group = 'B';
	stu2.score = 136.0;
	printf("%s��ѧ����%d,������%d,��%c��,����ĳɼ���%.lf!\n",
		stu2.name, stu2.num, stu2.age, stu2.group, stu2.score);
	return 0;
}*/
/*/ʵ��1
struct stu {
	char* name;
	int num;
	int age;
	char group;
	float score;
};

int main() {
	//ʵ��1
	struct stu stu1;
	stu1.name = "����";
	stu1.num = 12;
	stu1.age = 18;
	stu1.group = 'A';
	stu1.score = 137.0;
	printf("%s��ѧ����%d,������%d,��%c��,����ĳɼ���%.lf!\n",
		stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);
	return 0;
}*/

/*/ѧ��
//int float ������
//
//����һ���ṹ������ - struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	//ʹ��struct stu������ʹ�����һ��ѧ������s1������ʼ��
	struct Stu s1  = { "����",17,"2022070111" };//s1 �Ǳ���
	struct Stu* ps = &s1;
	printf("%s\n", (ps->name));
	printf("%d\n", (ps->age));
	printf("%s\n", (ps->id));

	//printf("%s\n", (*ps).name);
	//printf("%d\n", (*ps).age);
	 
	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);
	//�ṹ�����.��Ա��
	return 0;
}*/

/*int get_max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int a = 10;
	int b = 20;
	//���ú�����ʱ���()���Ǻ������ò�����
	int max = get_max(a, b);
	printf("%d", max);
	return 0;
}*/

/*int main()
{
	//��������һ�������� + һ������ֵ a�������� [����ֵ]
	int a[10] = { 0 };//����һ������
	a[4] = 10;//a���ʵ����Ԫ�� [�����±���4] Ȼ��ֵ10
	return 0;
}*/


/*int main()
{
	
	int a = 10;
	int b = 2;
	int c = (a > b, a = a + b, a, b = a + 1);//13 ���ű��ʽ�����������μ��㣬��������һ�����ʽ
	printf("c = %d", c);
	return 0;
	//��������Ľ����ʲô��
}*/


/*int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;

	max = (a > b ? a : b);//a�������b ����Ϊ��ִ��a ����Ϊ��ִ��b 
}*/

/*int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//�߼���&& ���Ϊʲô��1234�� ��Ϊa++�� ����++ ��ʹ�ú�Ӽӣ���ʹ���� = 0�ģ�
						 //�߼���ֻҪ��һ��Ϊ�٣��Ǻ���Ķ���ִ�У��ٻ���a++�Ǿ���a=1��
							//������Ϊ�٣��ұߵľͲ�Ҫ����
	i = a++ || ++b || d++;
							//�߼�|| ���Ϊʲô�� 1 3 3 4�� ��Ϊ||ֻҪ��һ������ ��ô����Ͳ�ִ���� 
							//������Ϊ�棬�ұߵ��ǾͲ�Ҫ����
	printf("a = %d b = %d c = %d d = %d ", a, b, c, d);//�߼���&&��1 2 3 4 �߼�����||��1 3 3 4
	return 0;
	//�������������ʲô��
}*/

/*int main()
{
	int a = (int)3.14;//ǿ������ת��
	printf("%d", a);
	return 0;
}*/

/*int main()
{

	int a = 10;
	//printf("%d\n",++a);//ǰ��++����++����ʹ�� ��˼�� �ȼ��� ��ȥ��ӡ
	printf("%d\n", a++);//����++����ʹ�ã���++ ��˼�� �ȴ�ӡ �ڼ�++
	return 0;
}*/

/*int main()
{
	int a = 11;
	a = a | (1 << 2);
	printf("%d\n", a);//15
	a = a & (~(1 << 2));
	printf("%d\n", a);//11
	//00000000000000000000000000000001
	//11111111111111111111111111111011
	//00000000000000000000000000001111
	//00000000000000000000000000001011
	// 
	//00000000000000000000000000001011
	//00000000000000000000000000000100
	//1<<2;
	//00000000000000000000000000000001
	// 
	//00000000000000000000000000001011
	//int a = 0;
	//printf("%d\n", a);
	//  // ~ ��(2����)λȡ��
	// //00000000000000000000000000000000
	////11111111111111111111111111111111 - ����
	////11111111111111111111111111111110 - ����
	////10000000000000000000000000000001 - Դ��
	////-1
	//printf("%d\n", ~a);// -1

}*/



/*int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));//�������a+5��һ������ ���ǲ���ȥ��� 2
	printf("%d\n", s);//0
	//char b = 'w';
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof a);//���������ſ���ȥ�� ���Ͳ���
	//printf("%d\n", sizeof(int));

	//printf("%d\n", sizeof(b));
	//printf("%d\n", sizeof(char));

	//printf("%d\n", sizeof(arr));//10*4 = 40
	//printf("%d\n", sizeof(int [10]));


	return 0;
}*/