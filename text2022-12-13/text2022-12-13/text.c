#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };//输入多少密码
	for (i = 0; i < 3; i++)//小于3次不能登录
	{
		printf("输入密码：");
		scanf("%s", password);//字符
		if (strcmp(password, "123456")==0)//strcmp用于比较两个字符串并根据比较结果返回整数。基本形式为strcmp(str1,str2)，若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码输入错误，请退出程序\n");
	return 0;
}


/*int main()
{
	char arr1[] = "welcome to bit!!!!!!";//创建一个数组
	char arr2[] = "####################";//创建一个数组 因为需要覆盖吗
	int min = 0;//创建一个左边的值
	int max = strlen(arr1) - 1;//创建一个右边的值 strlen是字符串的 strlen 是一个函数，它用来计算指定字符串 str 的长度
	while (min <= max)//小于等于了他才能进去
	{
		arr2[min] = arr1[min];//下面的要一个一个覆盖 所以就相当于arr1赋值给arr2 所以 arr2 =arr1
		arr2[max] = arr1[max];//同上
		printf("%s\n", arr2);//打印字符所以用到%s
		Sleep(1000);// 休息一秒的意思  Sleep()里面单位是ms，sleep()里面单位是s，"s"大小写不同，单位也不同 头文件是 #include <Windows.h>
		system("cls");////执行系统命令的一个函数- cls - 清空屏幕  头文件是#include <stdlib.h>
		min++;
		max--;
	}
	printf("%s\n", arr2);
	return 0;
}*/




//利用二分算法 查找一个数字
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数 40/4=10  //总数组大小/每个元素的大小=数组元素个数”
	int min = 0;//左边  也就是这里面的最小值
	int max = sz-1;//右边 -1是因为要等于下标 因为有10个数 -1才能等于9 在这个数组中最高就是9
	while (min <= max)//小于或者等于才能进去 不这样的话 他们就会交叉造成不可逆的伤害
	{
		int mid = (min + max) / 2;//求出mid中间值
		if (arr[mid] > k)//在右边的话 就-1 给max
		{
			max = mid - 1;
		}
		else if (arr[mid] < k)//在左边的话 就+1给min //总结 因为要接近中间值所以才会+1 -1
		{
			min = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}

	}
	if (min > max)//这个时候已经交叉了 所以就是没有找到数值
	{
		printf("找不到\n");
	}
	
}//这种算法叫二分算法  是一个非常好用的一个算法*/

/*int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	// 1 + 2 + 6 = 9
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		//n的阶乘
		sum = sum + ret;
	}
	//ret  = 1*1 =1
	//ret  = 1*1*2 =2
	//ret  = 1*1*2*3 =6
	printf("sum = %d\n", sum);
	return 0;
}*/

/*int main()
{
	int ret = 1;
	int i = 0;
	int n = 0;
	int s = 0;
	for (i = 1; i <= 3; i++)
	{
		ret = ret * i ;
		s = s + ret;
	}
	printf("s = %d", s);
}*/

/*int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	//求n的阶乘，n是用户给定的数值，需要外部输入所以用scanf输入n，取地址n
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d", ret);
}*/

/*int main()
{
	int i = 0;
	do
	{
		if (i == 5)
			break;
		//break 输出的是0 1 2 3 4
		//continue 输出的是 0 1 2 3 4 死循环
		printf("%d ",i);
		i++;
	} while (i <= 10);
}*/


/*int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; k++, i++)
		//进不去循环 因为判断 k=0  0为假  为假了还循环干什么 所以循环零次
	{
		k++;
	}
	return 0;
}*/

/*int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
		//&&并且的意思  要同时满足这两个条件才能循环 否则只要一个不成立那么循环就结束
	{
		printf("hehe\n");
	}
	return 0;
}*/

/*int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
		//外层循环一次，内层for循环全部执行完成再进行外层的一次循环；
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d\n",i,j);
		}
	}
	return 0;
}
// 从外循环进去到内循环 外循环i==0 i<10 条件成立进到 内循环 然后j ==0 小于<10 开始循环 0 1 2 3 4 5 6 7 8 9 这是第一遍循环
// 然后出去 在进入到外循环 i++ 0+1等于1 条件成立在进入到内循环 开始循环 这个时候 j是等于0 的 输出 0 1 2 3 4 5 6 7 8 9 
*/

/*int main()
{
	int i = 0;
	for (;;)
	{
		printf("hehe\n");
	}
	return 0;
}*/


/*int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//数组是从0开始 0 1 2 3 4 5 6 7 8 9 这些称为下标
	int i = 0;
	//10 次循环
	//10次打印
	//10个元素
	for (i = 0; i < 10; i++)
		//建议for语句的循环控制变量的取值采用“前闭后开区间”写法
		// = 号是闭区间 < 号是开区间
	{
		printf("%d ", arr[i]);
		//0-9都小于10 所以一起打印了 9对应的是10
	}
	return 0;
}*/

/*int main()
{
	int i = 0;
	//  初始化    判断   调整
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}*/

/*int main()
{
	int i = 0;//初始化
	while (i < 10)//判断
	{
		//......
		//i++  //调整
	}
}*/


/*int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')// ||或者的意思        //这组有问题 稍后解答
		    continue;//后面不运用
		putchar(ch);
	}
	return 0;
}*/

/*int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：");//输入密码，并存放在password数组中
	scanf("%s",password);
	while ((ch = getchar()) !='\n')//注意不加getchar后面的括号会先执行！=，加了括号就先执行括号里的过
	{
		;
	}
	printf("请确认(Y/N)：");
	ret = getchar();
	printf("确认成功");
	if (ret == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("放弃确认");
	}


}*/


/*int main()
{
	int ch = 0;
	//EOF - end of file 文件结束标志
	while ((ch = getchar()) != EOF)//getchar 输入
	{
		putchar(ch);//putchar 输出
	}
	return 0;
}*/