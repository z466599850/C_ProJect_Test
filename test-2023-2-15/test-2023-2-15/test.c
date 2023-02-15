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
	//3.对非动态开辟内存的free
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
	//释放
	free(p);
	p = NULL;
	return 0;
}*/
/*int main()
{
	//对NULL的解引用
	int* p = malloc(40);
	////万一malloc失败了，p就被赋值为NULL
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
	//就是在使用malloc开辟的20个字节空间
	//假设这里，20个字节不能满足我们的使用要求了
	//希望我们能够又40个字节的空间
	//这里就可以使用realloc来调整动态开辟的内存
	//realloc使用的注意事项：
	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一块新的内存区域
	//  开辟一块满足需求的空间，并且把原来内存的数据拷贝回来，释放原旧的内存空间，最后返回新
	//  开辟的内存空间地址
	//3.得用一个新的变量来接受realloc函数的返回值
	int* ptr = realloc(p, 400);//开辟空间
	if (ptr != NULL)//开辟成功赋值给p
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
	//释放内存
	free(p);
	p = NULL;
	return 0;
}*/

/*int main()
{
	// calloc想初始化用calloc开辟好之后初始化之后返回来 
	// malooc不想初始化用 malloc 不初始化效率更高一些 开辟好就返回来了
	//malloc(10*sizeof(int))
	int* p = (int*)calloc(10, sizeof(int));//calloc(几个元素，元素几个字节);
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
	//释放空间
	//free函数是用来释放动态开辟的空间的
	free(p);
	p = NULL;
	return 0;
}*/



/*int main()
{
	//向内存申请10个整形的空间
	int* p = (int*)malloc(10 * sizeof(int));//需要强制类型转换 引用头文件#include <stdlib.h> malloc(开辟多少空间 * sizeof(类型))
	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));//可以把对应的错误码显示出来
	}
	else
	{
		//正常使用空间
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
	//当动态申请的空间不再使用的时候
	//就应该还给操作系统
	free(p);//free(内存块的名)释放空间 虽然释放了但还是会找到这块空间
	p = NULL;//加上这个就可以彻底断开他的联系
	//注：malloc 和 free 一定要成对使用 

	return 0;
}*/

//C语言是可以创建变长数组 - C99中增加了 很多编译器都没有添加C999
//gcc 支持C99标准的
// gcc test.c -std=c99; 写法格式 


/*struct S
{
	char name[20];
	int age;
};
int main()
{
	struct S arr[50];//50个struct S 类型的数据
	//如果30个人 - 浪费了一部分空间
	//60 - 不够

	return 0;
}*/