#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("************************************\n");
	printf("****  1.add           2.del     ****\n");//add ���� del ɾ��
	printf("****  3.search        4.modify  ****\n");//search ����		modify �޸�
	printf("****  5.show          6.sort    ****\n");//show ��ʾ sort ����
	printf("****  0.exit                    ****\n");//exit �˳�
	printf("************************************\n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);//�ṹ�崫����ô���ַ
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}