#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

//函数声明 然后在game.c里实现代码
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//告诉我们四种游戏的状态
//玩家赢 - '*'
//电脑赢 - '#'
//平局   - 'Q'
//继续   - 'C'
char Iswin(char board[ROW][COL],int row,int col);