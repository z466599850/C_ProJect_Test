#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//补一下之前的strlen的分数 这样写可以达成满分 面试官一看哇塞小伙子不错哦！
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//保证指针的有效性
	while (*str != '\0')
	{
		count++;//计数
		str++;
	}
	return count;
}
int main()
{;
	char arr[] = "abcdef";
	int ret = my_strlen(arr);//调用函数
	printf("ret = %d\n", ret);
	return 0;
}
//F5-启动调试-和F9配合使用的
//按F9 红点就是断点  F9切换断点 断点的作用是 把断电前面的代码执行完，到断点的地方 跳到问题可能出现的区域
//F10 - 按一下走一步

/*void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')//这组代码 在面试的时候只能给你 6分 那在改进一下吧
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
}*/

/*void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)// 7分 那在改进一下吧
	{
		;
	}
}*/


/*void my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);//断言     //找到错误并说明哪里错了
	assert(src != NULL);//断言

	while (*dest++ = *src++)// 8分 加上那两句话断言给8分那在改进一下吧
	{
		;
	}
}*/

/*int main()
{
	int num = 10;
	int n = 100;
	int* p = &num;
	//const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p(num) 的值 称常量指针
	//const 放在指针变量的*右边是修饰的是指针变量p本身，P不能被改变了 // 称指针变量
	//简单理解就是 const 放在哪里 谁就不能被改变
	//也可以写成 const int* const p = &num;   这样*p 和p都改变不了
	//如果写成 const int* p = &num;  p = &num; p = 20; 这个时候 就会改变num的值  但是*p改变不了 写成上面的两个都不会被改变

	*p = 20;
	p = &n;
	p = 100;
	printf("%d\n", num);
	return 0;
}*/


/*void my_strcpy(char* dest, const char* src)//注意这里的const必须写在*的左边，表示数据只读，而不是指针只读 //谁的前面由const 就代表这个语句的值不能被改 
											//const 是用来修饰指针的 const修饰谁，谁就改不了呗
{											
	assert(dest != NULL);//断言
	assert(src != NULL);//断言

	while (*dest++ = *src++)// 10分 加上那两句话断言 在加上 const 给8分那在改进一下吧 const 解释在上面
	{
		;
	}
}
int main()
{
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);//strcpy 是字符串拷贝
	printf("%s\n", arr1);
}*/
/*int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");//nice 公司出过这道面试题
		arr[i] = 0;//会造成死循环 因为在内存中分为栈区 堆区 静态区 然后在栈区是先使用高地址处的空间在使用低地址处的空间
					//            i就一定在高地址创建 arr数组一定在i的下面创建随着数组下标的增长由低到高变化的，所以我
		           //             认为数组合适的往后越界在越界的过程中遇到i，然后在改变数组元素的时候，就有可能把i改变了   
		           //             就有可能会导致我们的程序死循环
	}    
	return 0;
}*/

/*int main()//计算n的阶乘   5！    5×4×3×2×1=120
{
	int i = 0;
	int n = 0;
	int sum = 0;//最后的值
	int ret = 0;//暂时存放
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i;j++)
		{
			ret *= j;//ret = ret * j;
		}
		sum =  ret;//计算阶乘
		//sum += ret; //计算阶乘相加//sum = sum + ret;
	}
	printf("sum = %d", sum);
	return 0;
}*/

/*int Add(int a, int b)
{
	return a + b;
}
int main()
{
	printf("hehe\n");
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d", c);
	return 0;
}*/
/*int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d ", i);
	}
	for (i = 0; i < 100; i++)
	{
		printf("%d ", 10 - i);
	}
	return 0;
}*/

/*int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for(i=0;i<=12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}*/
/*int main()
{
	int i = 0; 
	for (i = 0; i < 100; i++)
	{
		printf("%d ",i);
	}
	system("pause");//system 执行系统文件 pause 暂停 写入这个代码 在文件夹中可以打开
	return 0;
}*/

