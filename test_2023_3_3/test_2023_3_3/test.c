#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	�󳤷��ε����

	��������Ҫ֪����͸ߣ�Ȼ�����������
*/

int main()
{
	puts("�󳤷��ε������");
	int width, height;
	
	//֪����͸�
	printf("�������");
	scanf("%d", &width);
	printf("������ߣ�");
	scanf("%d", &height);

	//�������
	printf("�����ε�����ǣ�%d", width * height);
	return 0;
}


/*int main()
{
	puts("����������������");
	int num1, num2;
	printf("����1��");
	scanf("%d", &num1);
	printf("����2��");
	scanf("%d", &num2);
	printf("���ǵĳ˻��ǣ�%d", num1 * num2);
	return 0;
}*/

/*int main()
{
	puts("��");
	puts("��");
	puts("��");

	return 0;
}*/




/*int main(void)
{
	int no;
	puts("��������������.");
	printf("����������Ҫ��ֵ��");
	scanf("%d", &no);
	printf("����������ǣ�%d", no);
	return 0;
}
*/