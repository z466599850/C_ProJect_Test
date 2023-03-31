#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
    char name[20];
    char phone[20];
    char email[50];
} Contact;

void add(Contact contacts[], int* count);
void search(Contact contacts[], int count);
void modify(Contact contacts[], int count);
void delete(Contact contacts[], int* count);

int main() {
    int option, count = 0;
    Contact contacts[MAX_SIZE];

    while (1) {
        printf("1. Add\n2. Search\n3. Modify\n4. Delete\n5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            add(contacts, &count);
            break;
        case 2:
            search(contacts, count);
            break;
        case 3:
            modify(contacts, count);
            break;
        case 4:
            delete(contacts, &count);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid option.\n");
        }
    }

    return 0;
}

void add(Contact contacts[], int* count) {
    if (*count >= MAX_SIZE) {
        printf("The contact list is full.\n");
        return;
    }

    printf("Enter name: ");
    scanf("%s", contacts[*count].name);

    printf("Enter phone number: ");
    scanf("%s", contacts[*count].phone);

    printf("Enter email: ");
    scanf("%s", contacts[*count].email);

    (*count)++;
    printf("Contact added.\n");
}

void search(Contact contacts[], int count) {
    char name[20];
    int found = 0;

    printf("Enter name to search: ");
    scanf("%s", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Name: %s\nPhone number: %s\nEmail: %s\n",
                contacts[i].name, contacts[i].phone, contacts[i].email);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }
}

void modify(Contact contacts[], int count) {
    char name[20];
    int found = 0;

    printf("Enter name to modify: ");
    scanf("%s", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Enter new phone number: ");
            scanf("%s", contacts[i].phone);

            printf("Enter new email: ");
            scanf("%s", contacts[i].email);

            found = 1;
            printf("Contact modified.\n");
            break;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }
}

void delete(Contact contacts[], int* count) {
    char name[20];
    int found = 0;

    printf("Enter name to delete: ");
    scanf("%s", name);

    for (int i = 0; i < *count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            for (int j = i; j < *count - 1; j++) {
                strcpy(contacts[j].name, contacts[j + 1].name);
                strcpy(contacts[j].phone, contacts[j + 1].phone);
                strcpy(contacts[j].email, contacts[j + 1].email);
            }

            (*count)--;
            found = 1;
            printf("Contact deleted.\n");
            break;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }
    // 打开文件
    FILE* fp = fopen("contacts.txt", "w");
    if (fp != NULL) {
        // 将所有联系人数据写入文件
        for (int i = 0; i < count; i++) {
            fprintf(fp, "%s %s %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
        }
        fclose(fp);
    }

}


/*
描述
    牛牛尝试在蒙住眼睛的情况下拿到旁边的金币，假设的坐标是 (x,y) ，金币的坐标是 (x1,y1) ，金币一定在牛牛在周围，即
​
请你判断牛牛应该往哪个方向伸手。
输入描述：
    第一行输入 x ,y 表示牛牛的坐标。
    第二行输入 x1,y1 表示金币的坐标。保证
​
坐标是整数。
输出描述：
    输出牛牛应该往哪个方向伸手。
例
    (x,y)=(0,0) (x1,y1)=(0,1) ，则牛牛向上伸手，输出 'u' 。
    (x,y) =(0,0) (x1,y1) = (0,-1) ，则牛牛向下伸手，输出 'd'。
    (x,y) =(0,0) (x1,y1) = (1,0) ，则牛牛向右伸手，输出 'r'。
    (x,y) =(0,0) (x1,y1) = (-1,0) ，则牛牛向左伸手，输出 'l'。

*/

/*#include <stdio.h>
/*
    拿到旁边的金币,假设坐标是(x,y),金币的坐标是(x1,y1)
    金币一定在牛牛在周围，即(x1 - x) + (y1 - y) = 1;

*/
/*int main()
{
    int x, x1, y, y1;
    scanf("%d%d", &x, &y);
    scanf("%d%d", &x1, &y1);
    if (x == x1)
    {
        y1 > y ? printf("u") : printf("d");
    }
    if (y == y1)
    {
        x1 > x ? printf("r") : printf("l");
    }
    return 0;
}*/
/*
描述
牛牛正在寄快递，他了解到快递在 1kg 以内的按起步价 20 元计算，超出部分按每 kg 1元计算，不足 1kg 部分按 1kg计算。如果加急的话要额外付五元，请问牛牛总共要支付多少快递费
输入描述：
第一行输入一个单精度浮点数 a 和一个字符 b ，a 表示牛牛要寄的快递的重量，b表示牛牛是否选择加急，'y' 表示加急 ，'n' 表示不加急。
输出描述：
输出牛牛总共要支付的快递费用

*/
/*
* 
* 分析题目:>
    牛牛正在寄快递
    快递在1kg以内的起步价20元计算，
    超出部分按 kg 1元计算，
    不足 1kg部分按 1kg计算，
    加急的话要额外付五元
    牛牛要花多少钱

*/

/*
    牛牛正在寄快递
    快递在1kg以内的起步价20元计算，
    超出部分按 kg 1元计算，
    不足 1kg部分按 1kg计算，
    加急的话要额外付五元
    牛牛要花多少钱

*/
/*int main()
{
    double weight;
    char c = 0;
    int money = 20;
    scanf("%lf %c", &weight, &c);

    if (weight > 0 && weight <= 1)
    {
        if (c == 'y')
        {
            printf("25");
        }
        else
        {
            printf("20");
        }
    }

    if (weight > 1)
    {
        money = money + ceil(weight - 1);//ceil函数:>向上取整的意思
        if (c == 'y')
            printf("%d", money + 5);
        else
            printf("%d", money);
    }

    return 0;
}*/

//ceil的例子
/*#include <stdio.h>
#include <math.h>

int main()
{
    float val1, val2, val3, val4;

    val1 = 1.6;
    val2 = 1.2;
    val3 = 2.8;
    val4 = 2.3;

    //ceil函数 向上取整 
    //C 库函数 double ceil(double x) 返回大于或等于 x 的最小的整数值
    printf("value1 = %.1lf\n", ceil(val1));//2.0
    printf("value2 = %.1lf\n", ceil(val2));//2.0
    printf("value3 = %.1lf\n", ceil(val3));//3.0
    printf("value4 = %.1lf\n", ceil(val4));//3.0

    return(0);
}*/