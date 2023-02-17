#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 1000//���һǧ���˵���Ϣ

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum option//ö��
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6 ���˵���Ӧ������
};

struct PerInfo//�˵���Ϣ
{
	char name[MAX_NAME];//����
	int  age;//����
	char sex[MAX_SEX];//�Ա�
	char tele[MAX_TELE];//�绰
	char addr[MAX_ADDR];//��ַ
};

//ͨѶ¼����
struct Contact
{
	struct PerInfo data[MAX];//���һǧ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};



//��������
void InitContact(struct Contact* ps);//��ʼ��ͨѶ¼�ĺ���

void AddContact(struct Contact* ps);//������Ϣ��ͨѶ¼

void ShowContact(const struct Contact* ps);//��ӡͨѶ¼�е���Ϣ

void DelContact(struct Contact* ps);//ɾ��ָ������ϵ��

void SearchContact(const struct Contact* ps);//����ָ������ϵ��

void ModfyContact(struct Contact* ps);//�޸���ϵ��