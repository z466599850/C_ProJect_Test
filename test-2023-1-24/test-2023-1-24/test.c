#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>


int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001 - 补码
	//S E                 M 
	float* pFloat = (float*)&n;
	printf("%d\n", n);//9
	printf("%f\n", *pFloat);//0.000000
	//0.00000000000000000001001 E为全0的时候M取出来的时候 小数点前面的1就不要了 E 就算直接1-127
	//							那就是(-1)0 * 0.00000000000000000001001 * 2^-126
	//然后%f指打印小数点后面6位的话 那就是 0.000000 后面的不要哦！ 00000000000001001
	*pFloat = 9.0;
	//1001.0
	//1.001 * 2^3
	//(-1)^0 * 1.001 * 2^3
	//0 10000010 00100000000000000000000 然后一看是按%d整数取出来 所以就是 原反补相同 然后把这个数转换成10进制
	//所以是 1091567616

	//第二个是因为以9.0的形式放进去 以9.0的形式取出来 所以是9.0  上面的是因为 以整数9 放进去 以浮点数取出来 所以不一样 
	//总结：整数和浮点数存储的方式不一样 放进去的方式和取出来的方式不一样 所以以后要整数放进去的要从整数取 浮点数放进去的要用浮点数取
	//分析：浮点数就应该按照浮点数的方式存 取 ，整数就应该以整数的方式存取
	printf("%d\n", n);//1091567616
	printf("%f\n", *pFloat);//9.000000
	return 0;
}


/*int main()
{

	float f = 5.5;
	//5.5
	//101.1 右边的数是怎么来的呢 就是把右边的5看成0.5然后0.5乘2 取整数 直到取的是0的时候就算停了
	//							意思是 乘二取整 正向排列
	//(-1)^0 * 1.011 * 2^2
	//s = 0
	//m = 1.011
	//e = 2
	//在内存中存储 的顺序是 S E M 
	// 0 10000001 01100000000000000000000
	//存储S的时候0是最高位  存储E的时候 10000001 是8位比特位的中间数127+E= 129 然后在改成2进制 得到的数  011是 1.001	
	//存储M的时候 小数点左边一般不写直接存储后面的数 取出来的时候自动补上  因为存储了3个数 不够23位所以 位置不满的时候要自动补0
	//注意：位置不满的时候要自动补0
	//在内存中存储是0100 0000 1011 0000 0000 0000 0000 0000每4位一组 因为是16进制 8 4 2 1
	//0x40B00000 小端 所以在内存存储的是 00 00 b0 40

	//从内存中取出来
	//0 10000001 01100000000000000000000
	//10000001  129 - 127 = 2 129是E 的存储值 2是E 的真实值
	//0 10000001 01100000000000000000000
	//+/-0.011 * 2^-126
	//
	//0 111111111 01100000000000000000000
	//E+127 = 255
	//E = 128
	//1.xxx * 2……128
	//表示正负无穷大
	return 0;
}*/
/*//9.0
//先把9.0改成2进制 左边9改成二进制.右边0也改成2进制 9的二进制是1001    0的二进制是0
//1001.0
//(-1)^S * M * 2^E
//(-1)^0 * 1.001 * 2^3  //(-1)^S S是判断9.0是正数还是负数 正数就是0 负数是1 
//								M是判断9.0科学计数法 1001 改成了 1.001 * 2^3次方 如果是1001.1 的话就是 1.0011 * 2^3
//								E是判断9.0转化为2进制小数点向左移动了3位所以M是3
//S = 0
//M = 1001
//E = 3

//0.5
//改成二进制
//0.1
//(-1)^0 * 1.0 * 2^-1
//S = 0
//M = 1.0
//E = -1	首先，E为一个无符号整数 如果E 为负数对于单精度浮点数范围是0-255 取他的中间数是127
//			对于11位的E，这个中间数是1023.比如，2^10的E是10，所以保存成32位浮点数时，必须保存
//			成10+127=137然后在把137改成二进制存到内存的E范围内  在内存中 范围分成 S E M  
//			所以 他是负数 那就 127 + E = 126
//		注意：无论E是负数还是正数都要加上8位或11位的中间数范围的值 8位中间数是127 11位中间数是1023
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("%d\n", n);//9
	printf("%f\n", *pFloat);//0.000000

	*pFloat = 9.0;
	printf("%d\n", n);//1091567616
	printf("%f\n", *pFloat);//9.000000
	return 0;
}*/
/*int main()
{
	double d = 1E10;//1E10的意思是1.0×10的10次方
	printf("%lf", d);
	return 0;
}*/
/*//7.
int main()
{
	unsigned char i = 0;
	for (i = 0; i <= 255; i++)e
	{
		printf("hello world\n");//因为255+1变成了0  所以变成了死循环
	}
	return 0;
}*/
/*//6.
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;

	}
	printf("%d", strlen(a));//答案：255 因为他算到了-128的时候不能继续算下去了 在鹏哥老师讲的那个圆圈中
							//          他的范围是 -128-127 所以他算到-128他在算就变成了-129就变成了127 
						    //          然后算到127...5..4..3..2..1.....0  算到0的时候 OK   \0的ASCLL码
							//          值对应的是0  所以算到0就结束了 所以他的结果是255个数 
	// 补充：strlne遇到\0才会停止
	return 0;
}*/
/*//5.
int main()
{
	unsigned int i;//因为他是无符号所以是0~255 他不可能被减成负数
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);//所以这道题是死循环
		Sleep(100);//Sleep 睡眠函数 睡眠100毫秒 头文件是windows.h
	}
	return 0;
}*/
/*//4.
//a = 10000000000000000000000000010100 - 原码
//    11111111111111111111111111101011 - 反码
//    11111111111111111111111111101100 - 补码
//  
//b = 00000000000000000000000000001010 - 原码
//     
//	  

//a = 11111111111111111111111111101100
//					+ 
//b = 00000000000000000000000000001010
//a+b=11111111111111111111111111110110
//    11111111111111111111111111110101
//	  10000000000000000000000000001010 = -10
int main()
{
	int a = -20;
	unsigned int b = 10;
	printf("%d\n", a + b);
	return 0;
}*/
/*//3.
int main()
{
	char a = 128;// 超出范围了所以就是 char的有符号类型范围是-128-127 所以是127+1 = -128	他和第二题一样
	printf("%u\n", a);
	return 0;
}*/
/*//2.
//-128
//100000
//10000000000000000000000010000000 - 原码
//11111111111111111111111101111111 - 反码
//11111111111111111111111110000000 - 补码
//整型提升
//11111111111111111111111110000000
//11111111111111111111111110000000 = 4294967168
//char 有符号数-128-127
//char 无符号数0-255
int main()
{
	char a = -128;
	printf("%u\n", a);//4294967168
	return 0;
}*/
/*//练习：下面会输出什么？
//1.
int main()
{
	char a = -1;//char 是1个字节
				//char 只能存放8个bit位所以只能存放8个数字 所以从后面取8个数字
				//然后 整型提升 意思是 一共有32个数 缺多少到32 补多少 
				//怎么补呢 当然是 有符号 高位补符号位，无符号，高位补0
				//前面两个ab是 111111111111111111111111这里开始补11111111
				//最后一个c是  000000000000000000000000这里开始补11111111
				//所以答案是 -1 -1 255
	signed char b = -1;
	unsigned char c = -1;//无符号按照补码来输出 这里会发生整型提升
						//有符号 高位补符号位，无符号，高位补0
						//为什么要整型提升呢 因为：char类型要用%d来打印 所以要整型提升
	printf("a = %d,b = %d,c = %d", a, b, c);// -1 -1 255 
	return 0;
}*/

/*//指针类型的意义：
//1. 指针类型决定了指针解引用提作符能访问几个字节charp; p 访问了1个字节，intp;p 4个字节
//2. 指针类型决定了指+1，-1，加的或者减的是几个字节char *p; p+1,跳过一个字符，int*p，p+1,跳过一个整形 4个字节
int main()
{
	int a = 0x11223344;
	//int* p = &a;
	//*p = 0;
	char* p = &a;
	*p = 0;
	return 0;
}*/
/*int check_sys()
{
	int a = 1;
	return *(char*) & a;
	//返回1，小端
	//返回0，大端
}

int main()
{
	//写一段代码告诉我们当前机器的字节序是什么
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}*/

/*int main()
{
	int a = 1 + (-1);//他是怎么算的呢
	//得到1的补码 然后因为1是正数 所以原 反 补 都相同
	// 1 的补码：00000000000000000000000000000001
	// -1的补码：11111111111111111111111111111111
	// 然后相加：100000000000000000000000000000000 然后 只能存储32位 所以直接省略左边的数
	// 最终得到：00000000000000000000000000000000  是不是很神奇  想出来补码的人真的好厉害啊
	// 最终得数是：0

	// -1的原码：10000000000000000000000000000001
	// -1的反码：11111111111111111111111111111110
	// -1的补码：11111111111111111111111111111111
	return 0;
}*/

/*int main()
{
	//在内存中存储是补码
	int a = 20;//4个字节 32bit位         原反补都一样是因为 正数的原、反、补码都相同。   也称 无符号
	//00000000000000000000000000010100 - 原码
	//00000000000000000000000000010100 - 反码
	//0000 0000 0000 0000 0000 0000 0001 0100 - 补码
	//在内存中每四位相当于一个数  内存中是16进制      
	//0x00000014 在内存中这样存储的
	int b = -10;//						原反补不一样是因为	负数的原、反、补都不相同					
	//10000000000000000000000000001010 - 原码
	//11111111111111111111111111110101 - 反码
	//1111 1111 1111 1111 1111 1111 1111 0110 - 补码
	//在内存中每四位相当于1个数    内存中是16进制
	//0xfffffff6 在内存中是这样存储的
	return 0;
}*/