#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备
//
//键盘-标准输入设备 - stdin
//屏幕-标准输出设备 - stdout
//是一个程序默认打开的两个流设备
//stdin FILE*
//stdout FILE*
//stderr FILE*
int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}


//输入
int main()
{
	//打开文件
	FILE* pfRead = fopen("test.txt", "r");//Read r 读
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	printf("%c",fgetc(pfRead));//b
	printf("%c",fgetc(pfRead));//i
	printf("%c",fgetc(pfRead));//t
	//关闭文件
	fclose(pfRead);
	pfRead = NULL;
	return 0;
}


//输出
/*int main()
{
	//打开文件
	FILE* pfWrite = fopen("test.txt", "w");//write w 写
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件
	fputc('b', pfWrite);
	fputc('i', pfWrite);
	fputc('t', pfWrite);
	//关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
	return 0;
}*/

/*int main()
{
	//打开文件test.txt
	//绝对路径
	// fopen( "D:\项目\VSWJ\ss\test-2023-2-17\test-2023-2-17")
	//相对路径
	// ..表示上一级路径
	// . 表示当前路径
	// fopen("..\\test.txt") 
	//fopen("test.txt")
	//绝对路径写法
	//fopen("D:\\项目\\VSWJ\ss\\test-2023-2-17\\test-2023-2-17\\test.txt", "r");//fopen("文件路径"，"打开方式")//如果

	FILE* pf= fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//头文件#include <errno.h>
	}
	//打开成功
	//读文件

	//关闭文件
	fclose(pf);//关闭文件
	pf = NULL;//就像free一样
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
	FILE* pf = fopen("test.txt","wb");//fopen 打开文件 fopen("文件","wb") wb 叫以二进制的形式写 二进制的形式写到文件中
			//如果写着写着文件不存在的时候，fopne会创建文件
			//FILE该类主要用于文件和目录的创建、文件的查找和文件的删除等。

	fwrite(&a, 4,1,pf);//fwrite 叫写文件 写一个4个字节的数据进去 放到pf这个文件里去
				//fwrite(写什么东西进去呢，写几个字节呢,写几个这样的数据，放到哪里去呢)

	fclose(pf);//fclose 关闭这个文件
	pf = NULL;//关闭之后赋给空指针
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
	//释放
	free(p->arr);//如果释放p的话就没人指向那两个元素了
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
	//也可以达到类似柔性数组的效果 但是有缺点哦 malloc两次 如果项目多的话就不可取
}*/

/*//struct S
//{
//	int n;
//	char c;
//	int arr[0];//柔性数组成员，如果这种形式编译不过去那就把0去掉[]写成这样的格式[]
//};

struct S
{
	int n;//4
	int arr[];//柔性数组成员
};

int main()
{
	//printf("%d\n", sizeof(struct S));//计算的时候不包含柔性数组成员	
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