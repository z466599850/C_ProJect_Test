#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

//���⣺һ��Լ�� 3.156��107 s��Ҫ�������������䣬��ʾ������϶����롣

int main()
{
	int age;
	scanf("%d", &age);
	long long  b = 31560000;
	b = b * age;

	printf("%lld\n", b);
	return 0;
}
/*int main()
{
	//���ڴ�����10�����εĿռ�
	int* p = (int*)malloc(10 * sizeof(int));//��Ҫǿ������ת�� 
	//����ͷ�ļ�#include <stdlib.h> malloc(���ٶ��ٿռ� * sizeof(����))
											//prt = (int*)malloc(num*sizeof(int));
	if (p == NULL)//�ж�ptrָ���Ƿ�Ϊ��
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n", strerror(errno));//���԰Ѷ�Ӧ�Ĵ�������ʾ����
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
	//��Ӧ�û�������ϵͳ

	free(p);//free(�ڴ�����)�ͷſռ� ��Ȼ�ͷ��˵����ǻ��ҵ����ռ�
	p = NULL;//��������Ϳ��Գ��׶Ͽ�������ϵ

	//ע��malloc �� free һ��Ҫ�ɶ�ʹ�� 

	return 0;
}*/

//����2�Ľ׳�
/*int main()
{
	//scanf()��һ���з���ֵ�ĺ�������scanf��ȡ����������scanf�ķ���ֵΪ����
	int n = 0;

	//û�������ʱ��ͻ�ֹͣѭ��
	while (scanf("%d\n", &n) != EOF)
	{
		//��ס��Ҫд��n<<1,��������ζ������Ķ���������һλ�˲���*n
		printf("%d\n", 1 << n);

	}
	return 0;
}*/

//����2�Ľ׳�
/*
	�﷨/ԭ�ͣ�
	double pow(double x,double y);
	ͷ�ļ�#include <math.h>
*/
/*#include <stdio.h>
#include <math.h>

int main() {
	double x = 4, y = 6;  //Ϊ��������ֵ
	double result = pow(x, y);  //��a��b�η�
	printf("%lf\n", result);

	return 0;
}*/
/*
ʱ��ת������
1h=60min
1min=60s
1h=60*60s=3600s
*/

/* ʹ�õ���C���� */
/*#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	printf("%d %d %d", a / 3600, a % 3600 / 60, a % 3600 % 60);
	return 0;
}*/
/*����
����һ����������Ҫ��õ��ø������ĸ�λ����

���ݷ�Χ��

	0 < n �� 200
	����������
	һ�У�����һ����������
	���������
	һ�У�����һ��������Ϊ���븡������Ӧ�ĸ�λ����
	ʾ��1
	���룺
	13.141
	�����
	3
*/
#/*include <stdio.h>

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = (a + b) % 7;
	if (c == 0)
		c = 7;
	printf("%d\n", c);
	return 0;
}*/