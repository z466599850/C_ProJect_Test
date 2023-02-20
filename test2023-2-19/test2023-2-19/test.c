#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <assert.h>
#include <stdlib.h>
#include <windows.h>

enum
{
	SIZE = 5
};

int main()
{
	double a[SIZE] = { 1.0,2.0,3.0,4.0,5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE* fp = fopen("test.bin", "wb");//�����ö�����ģʽ
	fwrite(a, sizeof(*a), SIZE, fp);//дdouble������
	fclose(fp);

	fp = fopen("test.bin", "rb");
	//��double����
	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
	{
		printf("%lf\n", b);
	}
	if(feof(fp))
		printf("Error reading test.bin: unexpected end of file n");
	else if (ferror(fp))
	{
		perror("Error reading test.bin");
	}
	fclose(fp);
	fp = NULL;
	return 0;
}

/*int main(void)
{
	int c;// ע�⣺int����char��Ҫ����EOF
	FILE* fp = fopen("test.txt", "r");
	if (!fp)
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
	while ((c = fgetc(fp)) != EOF)//��׼C I/O��ȡ�ļ�ѭ��
	{
		putchar(c);
	}
	//�ж���ʲôԭ�������
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");
	//�ر��ļ�
	fclose(fp);
}*/

/*int main()
{
	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
	//printf("%s\n", strerror(errno));
	//perror
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");//��strerror�������
		return 0;
	}
	//���ļ�
	int ch = 0;
	while (ch=fgetc(pf)!=EOF)
	{
		putchar(ch);//��ӡ����
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of\n");
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
	//printf("%s\n", strerror(errno));
	//perror
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");//��strerror�������
		return 0;
	}
	//���ļ�
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	//EOF
	//feof();//EOF - end of file - �ļ�������־
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	int ch = fgetc(pf);
	printf("%d\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//1.��λ�ļ�ָ��
	//fseek(pf, -2, SEEK_END);//fseek(ƫ��˭��ƫ��ֵ��3��λ��)3��λ�� [SEEK_CUR �ļ�ָ��ĵ�ǰλ��] [SEEK_END�ļ���ĩβλ��] [SEEK_SET�ļ���ʼλ��] Ӣ����ĸ���ȥ
	int ch = fgetc(pf);
	printf("%c\n", ch);
	//int pos = ftell(pf);//��֪�ļ�ָ�뵱ǰ��ƫ�����Ǽ�������ftell
	//	printf("%d\n", pos);

	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);
	fgetc(pf);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//1.��λ�ļ�ָ��
	fseek(pf,-2,SEEK_END);//fseek(ƫ��˭��ƫ��ֵ��3��λ��)3��λ�� [SEEK_CUR �ļ�ָ��ĵ�ǰλ��] [SEEK_END�ļ���ĩβλ��] [SEEK_SET�ļ���ʼλ��] Ӣ����ĸ���ȥ

	//2.��ȡ�ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*struct S
{
	char name[20];
	int age;
	double score;
};

int main()
{
	//struct S s = { "����",20,55.6 };
	struct S tmp = { 0 };
	//FILE* pf = fopen("test.txt", "wb");
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}
	//�����Ƶ���ʽд�ļ�
	//fwrite(&s, sizeof(struct S), 1, pf);//fwrite(��˭д��ȥ��д��Ԫ���ж��д���������ģ�д������ȥ��);
	//��Ȼ�Զ����Ƶ���ʽд��ȥ ��Ȼ���ۿ����� �������ö����ƶ��ļ���ʱ����Կ��õ����ö�	

	//�����Ƶ���ʽ���ļ�
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %f", tmp.name, tmp.age, tmp.score);


	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*struct S
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s = { 100,3.14f,"abcdef" };
	char buf[1024] = { 0 };
	struct S tmp = { 0 };
	//�Ѹ�ʽ��������ת�����ַ����洢��buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	//printf("%s\n", buf);//��ӡ������ַ���
	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
	return 0;
}*/

/*struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 0 };//����f Ĭ����double ��f����float
	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));//stdin ��׼����
	fprintf(stdout, "%d,%.2f,%s", s.n, s.score, s.arr);//stdout ��׼���
	return 0;
}*/

/*struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 0 };//����f Ĭ����double ��f����float
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL);
	{
		return 0;
	}
	//��ʽ������ʽ���ļ�
	fscanf(pf,"%d %f %s", &(s.n), &(s.score), &(s.arr));
	printf("%d %f %s", s.n, s.score, s.arr);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 100,3.14f,"bit" };//����f Ĭ����double ��f����float
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL);
	{
		return 0;
	}
	//��ʽ������ʽд�ļ�
	fprintf(pf, "%d,%f,%s", s.n, s.score, s.arr);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/


/*int main()
{
	//�Ӽ��̶�ȡһ���ı���Ϣ
	char buf[1024] = { 0 };
	//fgets(buf,1024,stdin);//�ӱ�׼�����ȡ ���̶�
	//fputs(buf, stdout);//�������׼�����

	gets(buf);
	puts(buf);
	return 0;
}*/

/*int main()
{
	char buf[1024] = { 0 };//�����ļ���������
	FILE* pf = fopen("test.txt", 'w');
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	fputs("hello\n",pf);//fputs(�ַ�����д������ȥ);
	fputs("world",pf);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	char buf[1024] = { 0 };//�����ļ���������
	FILE* pf = fopen("test.txt", 'r');
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	//���ݵĴ洢λ�� ����ȡ�����ַ�
	fgets(buf, 1024, pf);//ftes(�����ļ���������������ַ������ĸ��ļ�)
	//printf("%s", buf);//�ڶ�buf��ʱ���������汾����ӵ��һ���������Բ��ü�\n
	puts(buf);//������ӡ��֮��ỻ��

	fgets(buf, 1024, pf);//ftes(�����ļ���������������ַ������ĸ��ļ�)
	puts(buf);
	//printf("%s", buf);//�ڶ�buf��ʱ���������汾����ӵ��һ���������Բ��ü�\n
	//����ļ��������еĻ� ��д���δ��� �൱��һ�����ֻ����ʾһ��
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	//���ļ�
	int ch = fgetc(pf);//fgetc(ȥ�����); ����Ҫ������
	printf("%c", ch);//����һ�� b
	ch = fgetc(pf)
	printf("%c", pf);;//���ڶ��� i
	ch = fgetc(pf);
	printf("%c", ch);//���ڶ��� t
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}*/


//д�ļ�
/*int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL);
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	fputc('b',pf);//fputc(���ݣ���ַ);
	fputc('i', pf);
	fputc('c', pf);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}*/

