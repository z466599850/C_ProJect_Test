#include <stdio.h>

//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//ok
//	}
//	printf("a = %d\n", a);//error
//	return 0;
//}

//int main()
//{
//	//δ�����ı�ʶ��
//	//����extern �ⲿ���ŵ� �������²���һ�� �ļ��� Ҳ��������
//	extern int g_val;
//
//
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//
////ȫ�ֱ��������ﶼ��ʹ�� ֻҪ�����������������
//int global = 2020;
//void test()
//{
//	printf("test()--  %d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	{
//		//�ֲ������������� ��˼���� �ĸ����� ����������
//		int num = 0;
//		printf("num = %d\n", num);
//	}
//
//	return 0;
//}







//int main()
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf
//	scanf_s("%d%d", &num1, &num2);;// & ����ȡ��ַ���� //��scanf������ Ҫ����_s ������������ ����Ϊʲô��Ҳ��֪��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ�����������ʾ
//	printf("%d\n", a);
//	
//}
//int num2 = 2; //ȫ�ֱ���-������({ })֮��ı��� ���ǲ�������������֮��
//int main()
//{
//	int num1 = 10; // �ֲ�����- �����ڴ����({ })�ڲ� ����������������֮�ڵĽоֲ�����
//	return 0;
//}
//int main()
//{
//	short age = 20; //���ڴ�����2���ֽ�=16bitλ �������20
//	float weight = 95.6f; //�Ӹ�f����ϵͳ֪�� ���ǵ����ȸ����� ���ڴ�����4���ֽڣ����С��
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));//
//	printf("%d\n", sizeof(short int));//
//	printf("%d\n", sizeof(int));//
//	printf("%d\n", sizeof(long));//
//	printf("%d\n", sizeof(long long));//
//	printf("%d\n", sizeof(float));//
//	printf("%d\n", sizeof(double));//
//}
//int main()
//{
//	//char ch = 'A'; //�ڴ�
//	//printf("%c\n", ch); //%c- ��ӡ�ַ���ʽ������
//	// short int - ������
//	// int - ����
//	//int age = 20;
//	// printf("%d\n", age); //%d -- ��ӡ����ʮ��������
//	//long num = 100;
//	//printf("%d\n", num); 
//	//float f = 5.0;
//	//printf("%f\n", f);
//	//double d = 3.14;
//	//printf("%lf\n", d);
//
//	return 0; 
//
//}
