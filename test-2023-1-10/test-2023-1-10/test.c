#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{

	return 0;
}
/*/�ú��� -- ����
//ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//��������
	//�ַ�����
	//ָ������
	int arr[10];
	int* arr2[3] = { &a,&b,&c };//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}*/

/*int main()
{
	int a = 10;
	int* pa = &a;//һ��ָ��
	int* * ppa = &pa;//ppa����ָ��// *ppa ��˼�����Ǹ�ָ����� int*ָ����ppaָ��pa��������int*
	int*** pppa = &ppa;//����ָ��
	**ppa = 20;
	printf("%d", **ppa);
	printf("%d", a);
}*/

/*int main()
{
	int arr[10] = { 0 };
	int* p = arr;//p��ŵ���������Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		//printf("%d ", arr[i]);
		printf("%d ", *(p + i));
	}
	return 0;
}*/
/*int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//��ַ - ��Ԫ�صĵ�ַ
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);// &������ ȡ������������ĵ�ַ
	printf("%p\n", &arr + 1);
	//1.&arr- &������ ������������Ԫ�صĵ�ַ-��������ʾ��������  &������ ȡ������������ĵ�ַ
	//2.sizeof(arr) - sizeof(������) - ��������ʾ������������ - sizeof(������)���������������Ĵ�С

	return 0;
}*/


/*int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	//strlen - ���ַ�������
	//�ݹ�- ģ��ʵ����strlen - �������ķ�ʽ1 �� �ݹ�ķ�ʽ2
	//
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}*/

/*int main()
{
	char ch[5] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d",& arr[9] - &arr[0]);//ָ���ȥָ�� ָ���ȥָ��õ������м�Ԫ�صĸ���  ��ӡ��������9
									//��õ�Ԫ�ظ���һ��Ҫ���ַ��С��ַ�õ��м�ĸ���;
									//ָ���ָ��һ��Ҫ�����Ŀռ�ȥ��

	printf("%d", &arr[9] - &ch[0]); //ǧ��Ҫȥ����д//err �����д��
	return 0;
}*/

/*#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float* vp;
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;	
	}
	return 0;
}*/

/*int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr[9];
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *p);// 1 2 3 4 5 6 7 8 9 10
		p = p + 1;
		//p++;
		//p += 1;
		//���涼��һ����
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *p);//10 8 6 4 2
		p -= 2;
	}
	return 0;
}*/

/*int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;
	//Ҫ�ǲ���������
	pa = NULL;//��û��ָ���κε���Ч�ռ� //�൱����ֱ��ɾ����ϵ��ʽ��Ʋ���ϵ �߰�
	//pa�ͺ�����������
	//pa��ָ����������ַ�ģ�*pa��ȡ��ַ����ֵ ��*ʱ���õ�ַ������ݣ�����ʱָָ�뱾��
	//*pa�ǽ����ò�����������ֻ���ͷ�ָ�����Բ���Ҫ��*�ţ������*�ž��൱�ڰ�int a ��ֵ�ĳ���NULL
	//����ָ���ʱ����Ҫ��*���������ʱ���*��ȡ��ַ�����ֵ
	//*�����Ϊȡָ��������ֵ
	//* �ǶԵ�ַ���ֵ���в�������ȡ��������*pa���ֵ�����޸�Ȼ�󸳸�*pa
	//��Ϊpa����ǵ�ֵַ������pa=null���ǵ�ַ����null
	//*pa�ĵ���������ֵ��pa�ĵ��ǵ�ַ
	//*pa = 10;//������������NULL ��Ҫȥ�޸�����ֵ 
	if (pa != NULL);//ȥ�ж�
	return 0;
}*/

/*int main()
{
	int b = 0;//�͸��������һ�� ��֪����ʲô��ʱ��͸���0
	int a = 10;
	int* pa = &a;
	int* p = NULL;//NULL - ����֪����ʲôʱ��ľ������ - ������ʼ��ָ��ģ���ָ�븳ֵ
					//NULL��ʵ��0 ֻ��ǿ������ת���� ((void) 0)ǿ������ת��
	return 0;
}*/

/*//����Խ�絼�µ�Ұָ������
int main()
{
	int a[10] = { 0 };
	int i = 0;
	int* p = a;
	for (i = 0; i <= 12; i++)
	{
		//*p = i;
		//p++;
		*p++ = i;//�����������һ����˼��ͬ����ʹ�� ��++
	}
}*/

/*int main()
{
	//δ��ʼ����ָ�����
	int* p;//�ֲ���������ʼ�������Ĭ�Ϸŵ���һ�����ֵ
	*p = 20;//���ڴ�����Ҹ���ַ��20�Ž�ȥ�� ��ΪҰ��ַ  �Ƿ�����

	return 0;
}*/