#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = { 0 };//10������Ԫ�ص�����
	int sz = 0; 
	//int�������͵ı�־��������ռ4���ֽ� ����=4    //10*sizeof(int) = 40 
	printf("%d\n", sizeof(arr));       //arr��10��int���͵ģ�һ��int������4byte������sizeof(arr)=40��byte
	//                                   ���󳤶ȣ��ܣ�10��int����4byte�����Ը���һ��int����4byte������10*4/1*4=10
	//���������Ԫ�ظ���
	//���� = �����ܴ�С/ÿ��Ԫ�صĴ�У
	sz = sizeof(arr) / sizeof(arr[0]); //����n��ƻ��/һ����ɫ��ƻ��=n��==10/1=10�����������Ǽ���int����
	printf("sz=%d\n", sz);
	return 0;
	//int a = 10;
	////sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(a));//4  //int�������͵ı�־��������ռ4���ֽ� ����=4
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a); //��������Ϊ���Ǳ�����
	//printf("%d\n", sizeof int);//������ ��Ϊ��������
}




//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+ �ǣ��������� + �ŵ����� ����ֵ ���Խ�˫Ŀ������
//	//c���������Ǳ�ʾ���
//	//0-��
//	//��0-��
//	int a = 0;
//	//int a = -2;
//	//int b = -a;
//	//int c = +3;//+���Ŷ���ʡ��
//	printf("%d\n", a);
//	printf("%d\n", !a);// !����˼����ı�ɼٵ�  �ٵı����� Ĭ��Ϊ1
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	a = 20;//= ��ֵ  == �ж����
//	a = a + 10;//1  1-2��˼��ͬ
//	a += 10;//2
//	a = a - 20;//1
//	a -= 20;//2
//	a = a & 2;//1
//	a &= 2;//2
//	//���ϸ�ֵ��
//	// += -= *= /= %= >>= <<= &= |= ^=
//
//	printf("%d\n", a);
//	return 0;
//}


/*int main()
{
	int a = 3;
	int b = 5;
	//int c = a & b;//��λ��
	//int c = a | b;//��λ��
	//int c = a ^ b;//��λ���
	//�ھ� �룺ȫһ��һ    ����һ��һ    ��������һ��ȫһ���㣬����
	//    011      011        011
	//    101      101        101
	//�룺001  ��111  ���110
   //�����1        7          6
	printf("%d\n", c);
	return 0;
}*/


/*int main()
{
	//��(2����)λ������
	// << ����
	// >> ����
	int a = 1;
	//����1ռ�ĸ��ֽ�-32bitλ
	//000000000000000000000000000001
	int b = a << 2;
	//���Ҳ�0  ��˼�� ����2λ �ұ߾Ͳ�����0
	//Ȼ�� 000000000000000000000000000100 ��������ת��ʮ���ƾ���1*2^2 ����4
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}*/




/*int main()
{
	int arr[10] = { 1,2,3.4,5,6,7,8,9,10 };
	//0-9
	int i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	//printf("%d\n", arr[4]); //��ӡ��������5  �±�ķ�ʽ����Ԫ�� �±��Ǵ�0��ʼ ���� 0��Ӧ�ľ���1 1��Ӧ����2
	// ��ô���������� ��arr[�±�]��
	//char ch[20];
	//float arr2[5];
	return 0;
}*/




/*int Add(int x, int y)
{
	int z = x + y;
	return z;
}


int main()
{
	//�����������ĺ�   �Զ��庯�� ���
	//�⺯��
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	int a = 100;
	int b = 200;
	sum = Add(num1, num2);
	sum = Add(a, b);
	sum = Add(2, 3);
	printf("sum = %d\n", sum);
	return 0;
}*/
/*int main()
{
	int line = 0;//line������
	printf("�������\n");
	while (line <= 20000)//whileѭ�����
	{
		printf("�������д��� %d\n",line);//����%d  line���ǳ�������
		line++;// line++����line=line+1 ++��ʾ��ԭ��������+1
	}
	if (line>=20000) 
	printf("��offer\n");
	return 0;
}*/

/*int main()
{
	int input = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
	scanf("%d", &input);
	//scanf�������뺯�����������ڿ���̨����Ķ���
	if (input == 1) //if �൱���������˼  �����ѡ1 ���Ǻ�offer 
		//��C�����������һ���ȺŵĻ��൱���Ǹ�ֵ(���ұߵ�ֵ��ֵ����� ���磺a = 3 �Ǹ�ֵ3��a)�������ȺŲ��ǵ���
		//��ϵ�����==���ж�ǰ��ֵ�Ƿ���ȣ�����Ϊtrue��������Ϊfalse
	    printf("��offer\n");
	else
		printf("������\n");
	return 0;
}*/



//int main()
//{
//	printf("%c\n", '\x61');
//	x61ʮ������ת��Ϊʮ���� ->97 ��ASCII����Ӧ���� a �����ܳ�������a
//	printf("%d\n", strlen("c:\text\32\test.c"));
//	 //strrlen �ַ����ĳ��� c : \t e x t \32 \t e s t . c
//	\32 -- 32��2��8��������
//	32��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	32 -- > 10���� 26 ->��ΪASCII��ֵ������ַ�
//	printf("%c\n", '\132');
//	132�˽���ת��Ϊ10���� 90 90��Ӧ��ASCII��ֵ�� Z �����ܳ�������Z
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\text\32\text.c"));
//	return 0;
//}



//int main()
//{
//	printf("c:\\text\\32\\test.c");
//	printf("%c\n", '\''); //ת���ַ��ַ�
//	printf("%s\n", "\""); //ת���ַ�
//	//\t - ˮƽ�Ʊ�� 
//	//Ҫ����ת����ͨ�ľ���\tǰ��Ӹ�\ ��Ϊ���ӵĻ�����һ��ˮƽ�Ʊ�� ��һ��\ �ͱ����ͨ���� ����ת���ַ�����˼
//	return 0;
//}

//int main()
//{
//	printf("abc\n"); //����\n�ͻ���ʾabc�밴���������
//					 //��\n �밴���������������һ���� 
//                    //\n���е���˼
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//3
//	// arr1�����ݣ�a b c \0 
//	char arr2[] = { 'a','b','c','\0'}; //���ֵ �ܳ�����42 ��Ϊ�������Ұ�����42���ҵ���\0  
//	//Ҫ�Ƿ�\0�Ļ�����3�ͽ�����
//	//û�з�\0 arr2�����ݣ�a b c δ֪δ֪... \0  \0ֻ�ǽ�����־
//	printf("%d\n", strlen(arr1));//strlen - string length- �����ַ����ĳ���
//	printf("%d\n", strlen(arr2));
//}

//int main()
//{
//	�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	 #av$
//	 a - 97 ��97����ľ���a   
//	 A - 65
//	 ...
//	 ASCII ����
//	 ASCII ��ֵ
//	char arr1[] = "abc";//����
//	//�Ȱ�F10 �ڵ���� ���� Ȼ��ͻᷢ�� arr1����˸�0  arr2 û��0
//	//"abc" -- 'a','b','c' '\0' -- '\0'�ַ����Ľ�����־ �ַ��� ĬĬ͵͵���˸�0
//	char arr2[] = { 'a','b','c','\0'};
//	//'\0' - 0
//	//'a' - 97 ASCII��
//	//'a''b''c'
//	printf("%s\n", arr1); //��ӡ�ַ����� %s
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	"abcdefg";
//	"hello bit";
//	"";//���ַ�
//	return 0;
//}


//int main()
//{
//	//const - ������
//	const int n = 10; //n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	/*int arr[n] = { 0 };*/
//	n = 20;  
//
//
//	//const���εĳ�����
//	//const int num = 4;   //����const ���ͱ䲻���� ��˼���� ����һ������ ��const��һ���� ��ԭ���Ǳ�������const���ǳ�������
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	//
//	//3;//���泣��
//	//100;
//	//3.14;
//	return 0;
//}











//4.ö�ٳ���
// �Ա��У�Ů������
// ��ԭɫ���졢�ơ���
// ���ڣ�1��2��3.4��5��6��7
 
// ö�ٹؼ� - enum

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = RED;
//	return 0;
//}





//enum Sex
//{
//	MALE,
//	FAMALE,    //�������������Ľ�ö�ٳ���
//	SECRET
//};
////MALE,FAMALE,SECRET - ö�ٳ���
//int main()
//{
//	//enum Sex s = FAMALE:
//	printf("%d\n", MALE);//0
//	printf("%d\n", FAMALE);//1
//	printf("%d\n", SECRET);//2
//}




////3. #define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

