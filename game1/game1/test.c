#define _CRT_SECURE_NO_WARNINGS 1


#include <string.h>
#include "game.h"//ʹ���Լ�������ͷ�ļ�
//������������Ϸ


void menu()
{
	printf("***********************************\n");
	printf("******* 1 . play    0 . exit ******\n");
	printf("***********************************\n");
}


//��Ϸ�������㷨ʵ��
void game()
{
	char ret = 0;
	//����- �����Һ͵����߳���������Ϣ
	char board[ROW][COL]= {0};// ȫ���ո� board ���� ROW �� COL�� ��ͷ�ļ�ȥ����
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board,ROW,COL);//��ӡ����
	//��ʼ����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);//PlayerMove����ƶ�����˼
		DisplayBoard(board, ROW, COL);//��ӡ����
		//�ж�����Ƿ�Ӯ
		ret = Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);//ComputerMove �����������˼
		DisplayBoard(board, ROW, COL);//���Դ�ӡ����
		//�жϵ����Ƿ�Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//srand�������� �������ֵ
	do
	{
		menu();//�˵�
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��");
				break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}