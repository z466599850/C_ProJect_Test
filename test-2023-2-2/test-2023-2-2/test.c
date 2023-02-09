#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//笔试题5
int mian()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//地址减地址得到的是什么呢 得到的是他们俩之间的元素个数
	return 0;
	//
	//   a[0]              a[1]          a[2]            a[3]                a[4]
	//[p+0][][][][p+1] [][][][p+2][] [][][p+3][][] [][p+4][][p+2][1] [2][3][4 a4 2][][]
	//													地址减地址得到的是什么呢 得到的是他们俩之间的元素个数
	//														所以是-4
	//						p[4][2]= *(*(p+4)+2) 所以是上面的概念
	//
	//-4 在内存存储是  
	//原码 10000000000000000000000000000100
	//反码 11111111111111111111111111111011
	//补码 11111111111111111111111111111100
	//内存 1111 1111 1111 1111 1111 1111 1111 1100
	//       F    F    F    F    F    F    F    C
	//答：这组代码 最终答案是 0xFFFFFFFC，-4
}

/*//笔试题4
int main()
{
					//逗号表达式 是最后一个的结果
	int a[3][2] = { (0,1),(2,3),(4,5) };
				//     1    3      5
	int* p;
	p = a[0];//p 里面放的是1
	printf("%d", p[0]);// 1      *(p+0)
	return 0;

	//   a[0] | 1 3
	//        | 5 0
	//        | 0 0
}*/


/*//笔试题3
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);//4 2000000 切换成32位就打印出来了
	//%x”意思是16进制输出（以16进制输出变量地址）C语言中%x是用在标准输出和输入函数里的格式控制符。把整型值按16进制整型输出，不带前导0x
	return 0;
	//原来如此，ptr2移动的仅仅是一个字节位置，解引用后直接从第二个字节向后划定地址

	// ptr1[-1]
	// *(ptr+(-1))
	// *(ptr-1)

	//					        a
	//   _______________________________________________
	//  |      1           2           3           4    |
	//  |01 00 00 00|02 00 00 00|03 00 00 00|04 00 00 00|
	//  |_______________________________________________|
	//  低地址									高地址

	// 小端存储模式
}*/
/*//笔试题2
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;

//假设p 的值为0x100000。 如下面表达式的值分别为多少
//已知，结构体Test类型的变量大小是20个字节
int main()
{
	p = (struct Test*)0x100000;//0x16进制的意思  0x1 就是1
	printf("%p\n", p + 0x1);//0x100014    
	printf("%p\n", (unsigned long)p + 0x1);//0x100008 转换成unsigned long 整型 整型加一 那就是一吗 
	//把0x100000转换成10进制然后10进制去加一然后在转换成16进制
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004 //主要就是 *
	return 0;

	//这道题考的是 指针+ - 整数的
	//				指针 + - 取决指针类型
}*/

/*//笔试题1
int main()
{
	//代码的执行结果是什么
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);//取出的是数组，数组加1跳过整个数组
	printf("%d,%d\n", *(a + 1), *(ptr - 1));//2 5
	return 0;
	//写代码有三种境界
	// 1.看代码是代码
	// 2.看代码是内存
	// 3.看代码是代码 非常流畅

	//线上笔试
	//线下笔试 - 打印的卷子
}*/

/*int main()
{
	char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8 计算指针变量p的大小
	//printf("%d\n", sizeof(p + 1));//4/8 p+1 得到的是字符b的地址
	//printf("%d\n", sizeof(*p));//1 *p 就是字符串的第一个字符 - 'a'
	//printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0] == *(arr+0)         p[0] == (*p+0) == 'a'
	//printf("%d\n", sizeof(&p));//4/8 地址
	//printf("%d\n", sizeof(&p + 1));///4/8 地址
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 地址

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//6
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}*/


/*int main()
{
	//sizeof 计算所占空间的大小
	char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7 sizeof(arr)计算的数组的大小，单位是字节 7*1 = 7
	//printf("%d\n", sizeof(arr + 0));//4/8 计算的是地址的大小 - arr + 0 是首元素的地址
	//printf("%d\n", sizeof(*arr));//1 *arr是首元素，sizeof(*arr)计算首元素的大小
	//printf("%d\n", sizeof(arr[1]));//1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
	//printf("%d\n", sizeof(&arr));//4/8	&arr虽然是数组的地址，但也是地址，所以是4/8个字节
	//printf("%d\n", sizeof(&arr + 1));//4/8	&arr+1是跳过整个数组后的地址，但而言是地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0] + 1 第二个元素的地址

	//printf("%d\n", strlen(arr));//6	有6个元素
	//printf("%d\n", strlen(arr + 0));//6	从首元素往后数
	////printf("%d\n", strlen(*arr));//err 非法访问 传的是'a'
	////printf("%d\n", strlen(arr[1]));//err 非法访问
	//printf("%d\n", strlen(&arr));//6	从首元素往后数 数组的地址 - 数组指针 char (*p)[7] = &arr;   //5 6 7 都会报警告
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5 从第二个元素往后数
	return 0;
}*/

