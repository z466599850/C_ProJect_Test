#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//��һ��֮ǰ��strlen�ķ��� ����д���Դ������ ���Թ�һ������С���Ӳ���Ŷ��
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч��
	while (*str != '\0')
	{
		count++;//����
		str++;
	}
	return count;
}
int main()
{;
	char arr[] = "abcdef";
	int ret = my_strlen(arr);//���ú���
	printf("ret = %d\n", ret);
	return 0;
}
//F5-��������-��F9���ʹ�õ�
//��F9 �����Ƕϵ�  F9�л��ϵ� �ϵ�������� �Ѷϵ�ǰ��Ĵ���ִ���꣬���ϵ�ĵط� ����������ܳ��ֵ�����
//F10 - ��һ����һ��

/*void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')//������� �����Ե�ʱ��ֻ�ܸ��� 6�� ���ڸĽ�һ�°�
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
}*/

/*void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)// 7�� ���ڸĽ�һ�°�
	{
		;
	}
}*/


/*void my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);//����     //�ҵ�����˵���������
	assert(src != NULL);//����

	while (*dest++ = *src++)// 8�� ���������仰���Ը�8�����ڸĽ�һ�°�
	{
		;
	}
}*/

/*int main()
{
	int num = 10;
	int n = 100;
	int* p = &num;
	//const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p(num) ��ֵ �Ƴ���ָ��
	//const ����ָ�������*�ұ������ε���ָ�����p����P���ܱ��ı��� // ��ָ�����
	//�������� const �������� ˭�Ͳ��ܱ��ı�
	//Ҳ����д�� const int* const p = &num;   ����*p ��p���ı䲻��
	//���д�� const int* p = &num;  p = &num; p = 20; ���ʱ�� �ͻ�ı�num��ֵ  ����*p�ı䲻�� д����������������ᱻ�ı�

	*p = 20;
	p = &n;
	p = 100;
	printf("%d\n", num);
	return 0;
}*/


/*void my_strcpy(char* dest, const char* src)//ע�������const����д��*����ߣ���ʾ����ֻ����������ָ��ֻ�� //˭��ǰ����const �ʹ����������ֵ���ܱ��� 
											//const ����������ָ��� const����˭��˭�͸Ĳ�����
{											
	assert(dest != NULL);//����
	assert(src != NULL);//����

	while (*dest++ = *src++)// 10�� ���������仰���� �ڼ��� const ��8�����ڸĽ�һ�°� const ����������
	{
		;
	}
}
int main()
{
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);//strcpy ���ַ�������
	printf("%s\n", arr1);
}*/
/*int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");//nice ��˾�������������
		arr[i] = 0;//�������ѭ�� ��Ϊ���ڴ��з�Ϊջ�� ���� ��̬�� Ȼ����ջ������ʹ�øߵ�ַ���Ŀռ���ʹ�õ͵�ַ���Ŀռ�
					//            i��һ���ڸߵ�ַ���� arr����һ����i�����洴�����������±�������ɵ͵��߱仯�ģ�������
		           //             ��Ϊ������ʵ�����Խ����Խ��Ĺ���������i��Ȼ���ڸı�����Ԫ�ص�ʱ�򣬾��п��ܰ�i�ı���   
		           //             ���п��ܻᵼ�����ǵĳ�����ѭ��
	}    
	return 0;
}*/

/*int main()//����n�Ľ׳�   5��    5��4��3��2��1=120
{
	int i = 0;
	int n = 0;
	int sum = 0;//����ֵ
	int ret = 0;//��ʱ���
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i;j++)
		{
			ret *= j;//ret = ret * j;
		}
		sum =  ret;//����׳�
		//sum += ret; //����׳����//sum = sum + ret;
	}
	printf("sum = %d", sum);
	return 0;
}*/

/*int Add(int a, int b)
{
	return a + b;
}
int main()
{
	printf("hehe\n");
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d", c);
	return 0;
}*/
/*int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d ", i);
	}
	for (i = 0; i < 100; i++)
	{
		printf("%d ", 10 - i);
	}
	return 0;
}*/

/*int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for(i=0;i<=12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}*/
/*int main()
{
	int i = 0; 
	for (i = 0; i < 100; i++)
	{
		printf("%d ",i);
	}
	system("pause");//system ִ��ϵͳ�ļ� pause ��ͣ д��������� ���ļ����п��Դ�
	return 0;
}*/

