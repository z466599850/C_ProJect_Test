#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸
//
//����-��׼�����豸 - stdin
//��Ļ-��׼����豸 - stdout
//��һ������Ĭ�ϴ򿪵��������豸
//stdin FILE*
//stdout FILE*
//stderr FILE*
int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}


//����
int main()
{
	//���ļ�
	FILE* pfRead = fopen("test.txt", "r");//Read r ��
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	printf("%c",fgetc(pfRead));//b
	printf("%c",fgetc(pfRead));//i
	printf("%c",fgetc(pfRead));//t
	//�ر��ļ�
	fclose(pfRead);
	pfRead = NULL;
	return 0;
}


//���
/*int main()
{
	//���ļ�
	FILE* pfWrite = fopen("test.txt", "w");//write w д
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	fputc('b', pfWrite);
	fputc('i', pfWrite);
	fputc('t', pfWrite);
	//�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
	return 0;
}*/

/*int main()
{
	//���ļ�test.txt
	//����·��
	// fopen( "D:\��Ŀ\VSWJ\ss\test-2023-2-17\test-2023-2-17")
	//���·��
	// ..��ʾ��һ��·��
	// . ��ʾ��ǰ·��
	// fopen("..\\test.txt") 
	//fopen("test.txt")
	//����·��д��
	//fopen("D:\\��Ŀ\\VSWJ\ss\\test-2023-2-17\\test-2023-2-17\\test.txt", "r");//fopen("�ļ�·��"��"�򿪷�ʽ")//���

	FILE* pf= fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//ͷ�ļ�#include <errno.h>
	}
	//�򿪳ɹ�
	//���ļ�

	//�ر��ļ�
	fclose(pf);//�ر��ļ�
	pf = NULL;//����freeһ��
	return 0;
}*/

/*struct _iobuf
{
	char* _ptr;
	int _cnt;
	char* _base;
	int _flag;
	int _file;
	int _charbuf;
	int _bufsiz;
	char* _tmpfname;
};

typedef struct _iobuf FILE;
*/
/*//int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt","wb");//fopen ���ļ� fopen("�ļ�","wb") wb ���Զ����Ƶ���ʽд �����Ƶ���ʽд���ļ���
			//���д��д���ļ������ڵ�ʱ��fopne�ᴴ���ļ�
			//FILE������Ҫ�����ļ���Ŀ¼�Ĵ������ļ��Ĳ��Һ��ļ���ɾ���ȡ�

	fwrite(&a, 4,1,pf);//fwrite ��д�ļ� дһ��4���ֽڵ����ݽ�ȥ �ŵ�pf����ļ���ȥ
				//fwrite(дʲô������ȥ�أ�д�����ֽ���,д�������������ݣ��ŵ�����ȥ��)

	fclose(pf);//fclose �ر�����ļ�
	pf = NULL;//�ر�֮�󸳸���ָ��
	return 0;
}*/



/*struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr =(int*)malloc(10 * sizeof(int));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	//�ͷ�
	free(p->arr);//����ͷ�p�Ļ���û��ָ��������Ԫ����
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
	//Ҳ���Դﵽ�������������Ч�� ������ȱ��Ŷ malloc���� �����Ŀ��Ļ��Ͳ���ȡ
}*/

/*//struct S
//{
//	int n;
//	char c;
//	int arr[0];//���������Ա�����������ʽ���벻��ȥ�ǾͰ�0ȥ��[]д�������ĸ�ʽ[]
//};

struct S
{
	int n;//4
	int arr[];//���������Ա
};

int main()
{
	//printf("%d\n", sizeof(struct S));//�����ʱ�򲻰������������Ա	
	int i = 0;
	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));

	p->n = 100;
	
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p);
	p = NULL;
	return 0;
}*/