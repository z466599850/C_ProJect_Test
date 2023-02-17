#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("************************************\n");
	printf("****  1.add           2.del     ****\n");//add 增加 del 删除
	printf("****  3.search        4.modify  ****\n");//search 查找		modify 修改
	printf("****  5.show          6.sort    ****\n");//show 显示 sort 排序
	printf("****  0.exit                    ****\n");//exit 退出
	printf("************************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);//结构体传参最好传地址
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;	
		case MODIFY:
			ModfyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}