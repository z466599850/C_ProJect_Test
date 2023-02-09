#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = { 0 };//10个整型元素的数组
	int sz = 0; 
	//int是整数型的标志但整数型占4个字节 所以=4    //10*sizeof(int) = 40 
	printf("%d\n", sizeof(arr));       //arr有10个int类型的，一个int类型是4byte，所以sizeof(arr)=40个byte
	//                                   ，求长度：总（10个int各有4byte）除以个（一个int，有4byte）等于10*4/1*4=10
	//计算数组的元素个数
	//个数 = 数组总大小/每个元素的大校
	sz = sizeof(arr) / sizeof(arr[0]); //我有n个苹果/一个红色的苹果=n个==10/1=10（这里数的是几个int））
	printf("sz=%d\n", sz);
	return 0;
	//int a = 10;
	////sizeof 计算的是变量/类型所占空间的大小，单位是字节
	//printf("%d\n", sizeof(a));//4  //int是整数型的标志但整数型占4个字节 所以=4
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a); //他可以因为他是变量名
	//printf("%d\n", sizeof int);//他不行 因为他是整型
}




//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+ 是（操作符） + 号的左右 都有值 所以叫双目操作符
//	//c语言中我们表示真假
//	//0-假
//	//非0-真
//	int a = 0;
//	//int a = -2;
//	//int b = -a;
//	//int c = +3;//+正号都会省略
//	printf("%d\n", a);
//	printf("%d\n", !a);// !的意思是真的变成假的  假的变成真的 默认为1
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	a = 20;//= 赋值  == 判断相等
//	a = a + 10;//1  1-2意思相同
//	a += 10;//2
//	a = a - 20;//1
//	a -= 20;//2
//	a = a & 2;//1
//	a &= 2;//2
//	//复合赋值符
//	// += -= *= /= %= >>= <<= &= |= ^=
//
//	printf("%d\n", a);
//	return 0;
//}


/*int main()
{
	int a = 3;
	int b = 5;
	//int c = a & b;//按位与
	//int c = a | b;//按位或
	//int c = a ^ b;//按位异或
	//口诀 与：全一则一    或：有一则一    异或：有零或一，全一或零，则零
	//    011      011        011
	//    101      101        101
	//与：001  或：111  异或：110
   //结果：1        7          6
	printf("%d\n", c);
	return 0;
}*/


/*int main()
{
	//移(2进制)位操作符
	// << 左移
	// >> 右移
	int a = 1;
	//整型1占四个字节-32bit位
	//000000000000000000000000000001
	int b = a << 2;
	//左丢右补0  意思是 左丢了2位 右边就补两个0
	//然后 000000000000000000000000000100 二进制在转换十进制就是1*2^2 等于4
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}*/




/*int main()
{
	int arr[10] = { 1,2,3.4,5,6,7,8,9,10 };
	//0-9
	int i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	//printf("%d\n", arr[4]); //打印出来的是5  下标的方式访问元素 下标是从0开始 所以 0对应的就是1 1对应的是2
	// 怎么访问数组呢 用arr[下标]；
	//char ch[20];
	//float arr2[5];
	return 0;
}*/




/*int Add(int x, int y)
{
	int z = x + y;
	return z;
}


int main()
{
	//计算两个数的和   自定义函数 设计
	//库函数
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	int a = 100;
	int b = 200;
	sum = Add(num1, num2);
	sum = Add(a, b);
	sum = Add(2, 3);
	printf("sum = %d\n", sum);
	return 0;
}*/
/*int main()
{
	int line = 0;//line代表行
	printf("加入比特\n");
	while (line <= 20000)//while循环语句
	{
		printf("敲两万行代码 %d\n",line);//加上%d  line就是出现行数
		line++;// line++就是line=line+1 ++表示在原来基础上+1
	}
	if (line>=20000) 
	printf("好offer\n");
	return 0;
}*/

/*int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗?(1/0)>:");
	scanf("%d", &input);
	//scanf就是输入函数，接收你在控制台输入的东西
	if (input == 1) //if 相当于如果的意思  如果你选1 就是好offer 
		//在C语言中如果是一个等号的话相当于是赋值(把右边的值赋值给左边 例如：a = 3 是赋值3给a)，两个等号才是等于
		//关系运算符==，判断前后值是否相等，成立为true，不成立为false
	    printf("好offer\n");
	else
		printf("卖红薯\n");
	return 0;
}*/



//int main()
//{
//	printf("%c\n", '\x61');
//	x61十六进制转换为十进制 ->97 在ASCII码表对应的是 a 所以跑出来的是a
//	printf("%d\n", strlen("c:\text\32\test.c"));
//	 //strrlen 字符串的长度 c : \t e x t \32 \t e s t . c
//	\32 -- 32是2个8进制数字
//	32作为八进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	32 -- > 10进制 26 ->作为ASCII码值代表的字符
//	printf("%c\n", '\132');
//	132八进制转换为10进制 90 90对应的ASCII码值是 Z 所以跑出来的是Z
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\text\32\text.c"));
//	return 0;
//}



//int main()
//{
//	printf("c:\\text\\32\\test.c");
//	printf("%c\n", '\''); //转义字符字符
//	printf("%s\n", "\""); //转义字符
//	//\t - 水平制表符 
//	//要把他转成普通的就在\t前面加个\ 因为不加的话他是一个水平制表符 加一个\ 就变回普通的了 就是转义字符的意思
//	return 0;
//}

//int main()
//{
//	printf("abc\n"); //不加\n就会显示abc请按任意键继续
//					 //加\n 请按任意键继续就在下一行了 
//                    //\n换行的意思
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//3
//	// arr1的内容：a b c \0 
//	char arr2[] = { 'a','b','c','\0'}; //随机值 跑出来是42 因为他找找找啊到了42才找到了\0  
//	//要是放\0的话就是3就结束了
//	//没有放\0 arr2的内容：a b c 未知未知... \0  \0只是结束标志
//	printf("%d\n", strlen(arr1));//strlen - string length- 计算字符串的长度
//	printf("%d\n", strlen(arr2));
//}

//int main()
//{
//	数据在计算机上存储的时候，存储的是2进制
//	 #av$
//	 a - 97 那97代表的就是a   
//	 A - 65
//	 ...
//	 ASCII 编码
//	 ASCII 码值
//	char arr1[] = "abc";//数组
//	//先按F10 在点调试 窗口 然后就会发现 arr1多出了个0  arr2 没有0
//	//"abc" -- 'a','b','c' '\0' -- '\0'字符串的结束标志 字符串 默默偷偷放了个0
//	char arr2[] = { 'a','b','c','\0'};
//	//'\0' - 0
//	//'a' - 97 ASCII码
//	//'a''b''c'
//	printf("%s\n", arr1); //打印字符串用 %s
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	"abcdefg";
//	"hello bit";
//	"";//空字符
//	return 0;
//}


//int main()
//{
//	//const - 常属性
//	const int n = 10; //n是变量，但是又有常属性，所以我们说n是常变量
//	/*int arr[n] = { 0 };*/
//	n = 20;  
//
//
//	//const修饰的常变量
//	//const int num = 4;   //加了const 他就变不了了 意思就是 他是一个变量 而const是一个常 他原来是变量加上const就是常变量了
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	//
//	//3;//字面常量
//	//100;
//	//3.14;
//	return 0;
//}











//4.枚举常量
// 性别：男，女，保密
// 三原色：红、黄、蓝
// 星期：1，2，3.4，5，6，7
 
// 枚举关键 - enum

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = RED;
//	return 0;
//}





//enum Sex
//{
//	MALE,
//	FAMALE,    //在这个大括号里的叫枚举常量
//	SECRET
//};
////MALE,FAMALE,SECRET - 枚举常量
//int main()
//{
//	//enum Sex s = FAMALE:
//	printf("%d\n", MALE);//0
//	printf("%d\n", FAMALE);//1
//	printf("%d\n", SECRET);//2
//}




////3. #define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

