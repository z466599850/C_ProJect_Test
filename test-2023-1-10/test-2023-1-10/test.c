#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{

	return 0;
}
/*/好孩子 -- 孩子
//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//整形数组
	//字符数组
	//指针数组
	int arr[10];
	int* arr2[3] = { &a,&b,&c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}*/

/*int main()
{
	int a = 10;
	int* pa = &a;//一级指针
	int* * ppa = &pa;//ppa二级指针// *ppa 意思是我是个指针变量 int*指的是ppa指项pa的类型是int*
	int*** pppa = &ppa;//三级指针
	**ppa = 20;
	printf("%d", **ppa);
	printf("%d", a);
}*/

/*int main()
{
	int arr[10] = { 0 };
	int* p = arr;//p存放的是数组首元素的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		//printf("%d ", arr[i]);
		printf("%d ", *(p + i));
	}
	return 0;
}*/
/*int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//地址 - 首元素的地址
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);// &数组名 取的是整个数组的地址
	printf("%p\n", &arr + 1);
	//1.&arr- &数组名 数组名不是首元素的地址-数组名表示整个数组  &数组名 取的是整个数组的地址
	//2.sizeof(arr) - sizeof(数组名) - 数组名表示的是整个数组 - sizeof(数组名)计算的是整个数组的大小

	return 0;
}*/


/*int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	//strlen - 求字符串长度
	//递归- 模拟实现了strlen - 计数器的方式1 ， 递归的方式2
	//
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}*/

/*int main()
{
	char ch[5] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d",& arr[9] - &arr[0]);//指针减去指针 指针减去指针得到的是中间元素的个数  打印出来的是9
									//想得到元素个数一定要大地址减小地址得到中间的个数;
									//指针减指针一定要在他的空间去减

	printf("%d", &arr[9] - &ch[0]); //千万不要去这样写//err 错误的写法
	return 0;
}*/

/*#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float* vp;
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;	
	}
	return 0;
}*/

/*int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr[9];
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *p);// 1 2 3 4 5 6 7 8 9 10
		p = p + 1;
		//p++;
		//p += 1;
		//上面都是一样的
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *p);//10 8 6 4 2
		p -= 2;
	}
	return 0;
}*/

/*int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;
	//要是不想用他了
	pa = NULL;//他没有指向任何的有效空间 //相当于是直接删除联系方式，撇清关系 高啊
	//pa就和他们两清了
	//pa是指针变量，存地址的，*pa是取地址里存的值 加*时引用地址里的内容，不加时指指针本身
	//*pa是解引用操作符，我们只是释放指针所以不需要加*号，如果加*号就相当于把int a 的值改成了NULL
	//定义指针的时候需要加*，不定义的时候加*是取地址里面的值
	//*可理解为取指针变量里的值
	//* 是对地址里的值进行操作，可取出来赋给*pa或对值进行修改然后赋给*pa
	//因为pa存的是地址值，所以pa=null就是地址等于null
	//*pa改的是里面存的值，pa改的是地址
	//*pa = 10;//假如我设置了NULL 还要去修改他的值 
	if (pa != NULL);//去判断
	return 0;
}*/

/*int main()
{
	int b = 0;//就跟这个变量一样 不知道放什么的时候就给个0
	int a = 10;
	int* pa = &a;
	int* p = NULL;//NULL - 当不知道放什么时候的就用这个 - 用来初始化指针的，给指针赋值
					//NULL其实是0 只是强制类型转换了 ((void) 0)强制类型转换
	return 0;
}*/

/*//数组越界导致的野指针问题
int main()
{
	int a[10] = { 0 };
	int i = 0;
	int* p = a;
	for (i = 0; i <= 12; i++)
	{
		//*p = i;
		//p++;
		*p++ = i;//这个和上面是一个意思相同，先使用 后++
	}
}*/

/*int main()
{
	//未初始化的指针变量
	int* p;//局部变量不初始化，里边默认放的是一个随机值
	*p = 20;//在内存随便找个地址把20放进去了 称为野地址  非法访问

	return 0;
}*/