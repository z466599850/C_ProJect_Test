#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
描述
    KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，
    如果今天是“双11”（11月11日）则这件衣服打7折，
    “双12” （12月12日）则这件衣服打8折，
    如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。

数据范围：衣服价格满足

输入描述：
    一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份
    、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。 注：
    输入日期保证只有“双11”和“双12”。
输出描述：
    一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）

*/

#include <stdio.h>
/*
    在一家店铺看重了一件衣服，他了解到，如果今天是双11 (11月11日)
    11打7折
    12打8折
    优惠卷额外减 50 元
    优惠卷只能在 11 或 12 使用
    求 kiki最终花的钱

输入描述
    一行四个数字
    第一个 看衣服的加个
    第二 三 分别表示 当天的月份、当天的日期
    第四个 表示是否有优惠卷 有用1 无用0

    //分析完毕，开始答题

*/
int main()
{
    double money;
    int day, day1;
    int roll;
    scanf("%lf%d%d%d", &money, &day, &day1, &roll);

    if (day == 11 && day1 == 11)
    {
        money = (money * 0.7) - (50 * roll);
    }
    else if (day == 12 && day1 == 12)
    {
        money = (money * 0.8) - (50 * roll);
    }

    if (money < 0)
    {
        money = 0.00;
    }

    printf("%.2lf", money);

    return 0;
}

/*//输入10个整数，分别统计输出正数、负数的个数。
int main()
{
    int i = 0;//循环几次
    int p = 0;//正数++
    int n = 0;//负数++
    int arr[10] = { 0 };//创建数组 元素个数为10个
    //循环10次
    for (i = 0; i < 10; i++)
    {
        //输入
        scanf("%d", &arr[i]);
        //进行判断
        if (arr[i] > 0)
        {
            p++;//大于0的话p++
        }
        else {
            n++;//小于0的话n++
        }
    }
    printf("positive:%d\n", p);
    printf("negative:%d\n", n);
    return 0;
}*/


/*
    输入一个整数
    判断这个整数能被 2 3 7哪几个数输出
    并按升序输出，
    如果不能被2 3 7任意一个整除 则输出n

*/
/*int main()
{
    int a;
    int i = 0;
    int count = 0;
    int arr[3] = { 2,3,7 };
    scanf("%d", &a);

    for (; i < 3; i++)
    {
        if (a % arr[i] == 0)
        {
            printf("%d ", arr[i]);
            count++;
        }
    }

    if (count == 0)
    {
        printf("n");
    }
    return 0;
}*/

/*int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：");//输入密码，并存放在password数组中
	scanf("%s", password);
	while ((ch = getchar()) != '\n')//注意不加getchar后面的括号会先执行！=，加了括号就先执行括号里的过
	{
		;
	}
	printf("请确认(Y/N)：");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("放弃确认");
	}


}*/


/*
	KiKi想判断输入的字符是不是字母，请帮他编程实现。

	输入描述：
	多组输入，每一行输入一个字符。
	输出描述：
	针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。

*/

/*int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if (c != '\n')//主要就是判断回车
        {
            if ((c >= 'A' && c <= 'z'))
            {
                printf("%c is an alphabet.\n", c);
            }
            else {
                printf("%c is not an alphabet.\n", c);
            }
        }
    }

    return 0;
}*/