#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	//3.�ԷǶ�̬�����ڴ��free
	free(p);
	p = NULL;
	return 0;
}

/*int main()
{
	int* p = malloc(5 * sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
	}
	//�ͷ�
	free(p);
	p = NULL;
	return 0;
}*/
/*int main()
{
	//��NULL�Ľ�����
	int* p = malloc(40);
	////��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
	*p = 0;//err
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;//err
	}
	return 0;
}*/

/*int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//������ʹ��malloc���ٵ�20���ֽڿռ�
	//�������20���ֽڲ����������ǵ�ʹ��Ҫ����
	//ϣ�������ܹ���40���ֽڵĿռ�
	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
	//reallocʹ�õ�ע�����
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
	//  ����һ����������Ŀռ䣬���Ұ�ԭ���ڴ�����ݿ����������ͷ�ԭ�ɵ��ڴ�ռ䣬��󷵻���
	//  ���ٵ��ڴ�ռ��ַ
	//3.����һ���µı���������realloc�����ķ���ֵ
	int* ptr = realloc(p, 400);//���ٿռ�
	if (ptr != NULL)//���ٳɹ���ֵ��p
	{
		p = ptr;
		int i = 0;

		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}

		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//�ͷ��ڴ�
	free(p);
	p = NULL;
	return 0;
}*/

/*int main()
{
	// calloc���ʼ����calloc���ٺ�֮���ʼ��֮�󷵻��� 
	// malooc�����ʼ���� malloc ����ʼ��Ч�ʸ���һЩ ���ٺþͷ�������
	//malloc(10*sizeof(int))
	int* p = (int*)calloc(10, sizeof(int));//calloc(����Ԫ�أ�Ԫ�ؼ����ֽ�);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d", *(p + i));
		}
	}
	//�ͷſռ�
	//free�����������ͷŶ�̬���ٵĿռ��
	free(p);
	p = NULL;
	return 0;
}*/



/*int main()
{
	//���ڴ�����10�����εĿռ�
	int* p = (int*)malloc(10 * sizeof(int));//��Ҫǿ������ת�� ����ͷ�ļ�#include <stdlib.h> malloc(���ٶ��ٿռ� * sizeof(����))
	if (p == NULL)
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
		for (i = 0; i < 10 ; i++)
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

//C�����ǿ��Դ����䳤���� - C99�������� �ܶ��������û�����C999
//gcc ֧��C99��׼��
// gcc test.c -std=c99; д����ʽ 


/*struct S
{
	char name[20];
	int age;
};
int main()
{
	struct S arr[50];//50��struct S ���͵�����
	//���30���� - �˷���һ���ֿռ�
	//60 - ����

	return 0;
}*/