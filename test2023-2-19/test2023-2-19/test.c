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
	FILE* fp = fopen("test.bin", "wb");//必须用二进制模式
	fwrite(a, sizeof(*a), SIZE, fp);//写double的数组
	fclose(fp);

	fp = fopen("test.bin", "rb");
	//读double数组
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
	int c;// 注意：int，非char，要求处理EOF
	FILE* fp = fopen("test.txt", "r");
	if (!fp)
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
	while ((c = fgetc(fp)) != EOF)//标准C I/O读取文件循环
	{
		putchar(c);
	}
	//判断是什么原因结束的
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");
	//关闭文件
	fclose(fp);
}*/

/*int main()
{
	//strerror - 把错误码对应的错误信息的字符串地址返回
	//printf("%s\n", strerror(errno));
	//perror
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");//比strerror方便多了
		return 0;
	}
	//读文件
	int ch = 0;
	while (ch=fgetc(pf)!=EOF)
	{
		putchar(ch);//打印出来
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of\n");
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	//strerror - 把错误码对应的错误信息的字符串地址返回
	//printf("%s\n", strerror(errno));
	//perror
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");//比strerror方便多了
		return 0;
	}
	//读文件
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	//EOF
	//feof();//EOF - end of file - 文件结束标志
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
	//1.定位文件指针
	//fseek(pf, -2, SEEK_END);//fseek(偏移谁，偏移值，3个位置)3个位置 [SEEK_CUR 文件指针的当前位置] [SEEK_END文件的末尾位置] [SEEK_SET文件起始位置] 英文字母填进去
	int ch = fgetc(pf);
	printf("%c\n", ch);
	//int pos = ftell(pf);//想知文件指针当前的偏移量是几可以用ftell
	//	printf("%d\n", pos);

	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);
	fgetc(pf);
	//关闭文件
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
	//1.定位文件指针
	fseek(pf,-2,SEEK_END);//fseek(偏移谁，偏移值，3个位置)3个位置 [SEEK_CUR 文件指针的当前位置] [SEEK_END文件的末尾位置] [SEEK_SET文件起始位置] 英文字母填进去

	//2.读取文件
	int ch = fgetc(pf);
	printf("%c\n", ch);
	//关闭文件
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
	//struct S s = { "张三",20,55.6 };
	struct S tmp = { 0 };
	//FILE* pf = fopen("test.txt", "wb");
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}
	//二进制的形式写文件
	//fwrite(&s, sizeof(struct S), 1, pf);//fwrite(把谁写进去，写的元素有多大，写几个这样的，写到哪里去呢);
	//虽然以二进制的形式写进去 虽然肉眼看不到 但可以拿二进制读文件的时候可以看得到看得懂	

	//二进制的形式读文件
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
	//把格式化的数据转换成字符串存储到buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	//printf("%s\n", buf);//打印上面的字符串
	//从buf中读取格式化的数据到tmp中
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
	struct S s = { 0 };//不加f 默认是double 加f就是float
	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));//stdin 标准输入
	fprintf(stdout, "%d,%.2f,%s", s.n, s.score, s.arr);//stdout 标准输出
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
	struct S s = { 0 };//不加f 默认是double 加f就是float
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL);
	{
		return 0;
	}
	//格式化的形式读文件
	fscanf(pf,"%d %f %s", &(s.n), &(s.score), &(s.arr));
	printf("%d %f %s", s.n, s.score, s.arr);
	//关闭文件
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
	struct S s = { 100,3.14f,"bit" };//不加f 默认是double 加f就是float
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL);
	{
		return 0;
	}
	//格式化的形式写文件
	fprintf(pf, "%d,%f,%s", s.n, s.score, s.arr);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}*/


/*int main()
{
	//从键盘读取一行文本信息
	char buf[1024] = { 0 };
	//fgets(buf,1024,stdin);//从标准输入读取 键盘读
	//fputs(buf, stdout);//输出到标准输出流

	gets(buf);
	puts(buf);
	return 0;
}*/

/*int main()
{
	char buf[1024] = { 0 };//读的文件放在哪里
	FILE* pf = fopen("test.txt", 'w');
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件
	fputs("hello\n",pf);//fputs(字符串，写到哪里去);
	fputs("world",pf);

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}*/

/*int main()
{
	char buf[1024] = { 0 };//读的文件放在哪里
	FILE* pf = fopen("test.txt", 'r');
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	//数据的存储位置 最多读取几个字符
	fgets(buf, 1024, pf);//ftes(读的文件放在哪里，读几个字符，读哪个文件)
	//printf("%s", buf);//在读buf的时候他的里面本来就拥有一个换行所以不用加\n
	puts(buf);//天生打印完之后会换行

	fgets(buf, 1024, pf);//ftes(读的文件放在哪里，读几个字符，读哪个文件)
	puts(buf);
	//printf("%s", buf);//在读buf的时候他的里面本来就拥有一个换行所以不用加\n
	//如果文件里有两行的话 得写两次代码 相当于一组代码只能显示一行
	//关闭文件
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
	//读文件
	int ch = fgetc(pf);//fgetc(去哪里读); 读了要返回来
	printf("%c", ch);//读第一个 b
	ch = fgetc(pf)
	printf("%c", pf);;//读第二个 i
	ch = fgetc(pf);
	printf("%c", ch);//读第二个 t
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}*/


//写文件
/*int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL);
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件
	fputc('b',pf);//fputc(内容，地址);
	fputc('i', pf);
	fputc('c', pf);
	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}*/

