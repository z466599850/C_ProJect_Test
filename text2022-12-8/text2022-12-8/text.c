#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int ch = 0;
	//ctrl + z �ͽ�����
	//EOF  end of file -> -1 �����ڵ���-1
	while ((ch = getchar()) != EOF)//getchar ����
	{
		putchar(ch);//putchar ���s
		//���� ����ʾ����ascll��
	}
	return 0;
}



/*int main()
{
	int i = 0;
	while (i <= 10)
	{
		if (i == 5)
		continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}*/

/*int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//����Ƕ��ʹ��
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf(" m = %d,n = %d", m,n);
	return 0;
}*/



/*int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}*/






/*int main()
{
	int day = 0;
	scanf("%d", &day);//��Ϊdayһ��ʼ��0��scanf�Ǽ������뺯����
	                 //ȡ��ַ֮������ڵ�ַ�� �����������ֵ��Ȼ�����ж��������
	switch (day)
	{
	case 1://case �������
		printf("����һ\n");
		break;//break ��������
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
	case 6:
		break;
		printf("������\n");
	case 7:
		printf("������\n");
		break;
	default:
		printf("������\n");
	}

	return 0;
}*/




/*int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d ", i);
		i += 2;
	}
	//while (i <= 100)
	//{
	//	if (i % 2 != 0)
	//	printf("%d ", i);
	//	i++;
	//}
	//return 0;
}*/



/*int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
	        printf("hehe\n");
	else
			printf("haha\n");    //���������Ҫ  else�����������if�Ľ���ƥ��
	return 0;
}*/






/*int main()
{
	int age = 10;
	if (age < 18)
	{
		printf("δ����\n");
		printf("����̸����\n");
	}
	else
	{
    if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����");
	else
		printf("��������");
	}
	//if (age < 18)
	//	printf("δ����\n");
	//else
	//	printf("����\n");


	//if (age < 19)
	//	printf("δ����\n");
	return 0;
}*/




/*int main()
{
	int a = 10;
	;//�����-�����
	return 0;
}*/









////�ṹ��
////char int double ....
////�� =3.14
////'w'
////�� - ���Ӷ���
////
////����+���+����+��ݺ���+....
////����+����+������+����+���....
////���Ӷ��� -- �ṹ��- �����Լ����������
//
////����һ���ṹ������
//struct Book//Yo�����ȡ������
//{
//	char name[20];//C���Գ������ 20�������е�Ԫ�ظ��� �20���ֵ�����
//	//20������Ĵ�С������ӳ��������������ĳ��ȡ�
//	short price;//55
//};
//
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľ�������
//	struct Book b1 = { "C���Գ������",55 };// struct �ǽ����ؼ���  o�����ȡ�ñ����� 
//	strcpy(b1.name,"c++");//������
//	//strcpy-string copy -�ַ�������-�⺯��-��Ҫ����ͷ�ļ� #include<string.h>
//	printf("%s\n", b1.name);
//	////b1.price = 15;//������
//	// //printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	// // �����Ķ�����ǿ������ģ����ǿɱ��
//	
//
//	//struct Book* pb = &b1;
//	//����pb��ӡ���ҵ������ͼ۸�
//	//.       �ṹ�����.��Ա
//	//->      �ṹ��ָ��->��Ա
//
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	/*pintf("%s\n", (*pb).name)
//	*��.��������������ȼ���.�����ȼ��ǳ��ߣ�����˳��,������ȷ����*��.
//	printf("%d\n",(*pb).price)*/
//
//	//printf("������%s\n", b1.name);//%sȡ�����ַ���
//	//%s  ��Ӧ���Ǵ�ӡ���飬�ͺ�p��d һ����Ӧ��ӡ�Ķ�����ͬ����
//	//printf("�۸�%d\n", b1.price);
//	//b1.price = 15;
//	// �����Ķ�����ǿ������ģ����ǿɱ��
//	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	return 0;
//}













/*int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));

	//double d = 3.14;
	//double* pd = &d;//32-4   64-8
	//printf("%d\n", sizeof(pd));
	//*pd = 5.5;
	//printf("%d\n", d);
	//printf("%d\n", *pd);

	//int a = 10;//������4���ֽڵĿռ�
	//printf("%p\n", &a);
	//int* p = &a;//p��һ������-ָ�����
	//printf("%p\n", p);
	//*p = 20;//* - �����ò�����/��ӷ��ʲ�����
	//printf("a = %d\n",a);
	return 0;
}*/

