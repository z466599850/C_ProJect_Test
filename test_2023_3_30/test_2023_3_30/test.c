#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
����
    KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽��
    ��������ǡ�˫11����11��11�գ�������·���7�ۣ�
    ��˫12�� ��12��12�գ�������·���8�ۣ�
    ������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ����

���ݷ�Χ���·��۸�����

����������
    һ�У��ĸ����֣���һ������ʾС�����е��·��۸񣬵ڶ��͵����������ֱ��ʾ������·�
    ����������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ���� ע��
    �������ڱ�ֻ֤�С�˫11���͡�˫12����
���������
    һ�У�С��ʵ�ʻ���Ǯ����������λС����������ʾ����Ҫָ���̼ҵ�����Ǯ��

*/

#include <stdio.h>
/*
    ��һ�ҵ��̿�����һ���·������˽⵽�����������˫11 (11��11��)
    11��7��
    12��8��
    �Żݾ������ 50 Ԫ
    �Żݾ�ֻ���� 11 �� 12 ʹ��
    �� kiki���ջ���Ǯ

��������
    һ���ĸ�����
    ��һ�� ���·��ļӸ�
    �ڶ� �� �ֱ��ʾ ������·ݡ����������
    ���ĸ� ��ʾ�Ƿ����Żݾ� ����1 ����0

    //������ϣ���ʼ����

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

/*//����10���������ֱ�ͳ����������������ĸ�����
int main()
{
    int i = 0;//ѭ������
    int p = 0;//����++
    int n = 0;//����++
    int arr[10] = { 0 };//�������� Ԫ�ظ���Ϊ10��
    //ѭ��10��
    for (i = 0; i < 10; i++)
    {
        //����
        scanf("%d", &arr[i]);
        //�����ж�
        if (arr[i] > 0)
        {
            p++;//����0�Ļ�p++
        }
        else {
            n++;//С��0�Ļ�n++
        }
    }
    printf("positive:%d\n", p);
    printf("negative:%d\n", n);
    return 0;
}*/


/*
    ����һ������
    �ж���������ܱ� 2 3 7�ļ��������
    �������������
    ������ܱ�2 3 7����һ������ �����n

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
	printf("���������룺");//�������룬�������password������
	scanf("%s", password);
	while ((ch = getchar()) != '\n')//ע�ⲻ��getchar��������Ż���ִ�У�=���������ž���ִ��������Ĺ�
	{
		;
	}
	printf("��ȷ��(Y/N)��");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("����ȷ��");
	}


}*/


/*
	KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�

	����������
	�������룬ÿһ������һ���ַ���
	���������
	���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ���������������������

*/

/*int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if (c != '\n')//��Ҫ�����жϻس�
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