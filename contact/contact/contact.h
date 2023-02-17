#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 1000//存放一千个人的信息

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum option//枚举
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6 跟菜单对应起来了
};

struct PerInfo//人的信息
{
	char name[MAX_NAME];//名字
	int  age;//年龄
	char sex[MAX_SEX];//性别
	char tele[MAX_TELE];//电话
	char addr[MAX_ADDR];//地址
};

//通讯录类型
struct Contact
{
	struct PerInfo data[MAX];//存放一千个信息
	int size;//记录当前已经有的元素个数
};



//声明函数
void InitContact(struct Contact* ps);//初始化通讯录的函数

void AddContact(struct Contact* ps);//增加信息到通讯录

void ShowContact(const struct Contact* ps);//打印通讯录中的信息

void DelContact(struct Contact* ps);//删除指定的联系人

void SearchContact(const struct Contact* ps);//查找指定的联系人

void ModfyContact(struct Contact* ps);//修改联系人