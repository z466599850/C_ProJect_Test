#define _CRT_SECURE_NO_WARNINGS 1


#include <string.h>
#include "game.h"//使用自己创建的头文件
//测试三子棋游戏


void menu()
{
	printf("***********************************\n");
	printf("******* 1 . play    0 . exit ******\n");
	printf("***********************************\n");
}


//游戏的整个算法实现
void game()
{
	char ret = 0;
	//数组- 存放玩家和电脑走出的棋盘信息
	char board[ROW][COL]= {0};// 全部空格 board 棋盘 ROW 行 COL列 在头文件去定义
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
	//开始下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);//PlayerMove玩家移动的意思
		DisplayBoard(board, ROW, COL);//打印棋子
		//判断玩家是否赢
		ret = Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);//ComputerMove 电脑下棋的意思
		DisplayBoard(board, ROW, COL);//电脑打印棋子
		//判断电脑是否赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//srand不能随便改 生成随机值
	do
	{
		menu();//菜单
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择");
				break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}