#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };//�����������
	for (i = 0; i < 3; i++)//С��3�β��ܵ�¼
	{
		printf("�������룺");
		scanf("%s", password);//�ַ�
		if (strcmp(password, "123456")==0)//strcmp���ڱȽ������ַ��������ݱȽϽ������������������ʽΪstrcmp(str1,str2)����str1=str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�����
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("������������������˳�����\n");
	return 0;
}


/*int main()
{
	char arr1[] = "welcome to bit!!!!!!";//����һ������
	char arr2[] = "####################";//����һ������ ��Ϊ��Ҫ������
	int min = 0;//����һ����ߵ�ֵ
	int max = strlen(arr1) - 1;//����һ���ұߵ�ֵ strlen���ַ����� strlen ��һ������������������ָ���ַ��� str �ĳ���
	while (min <= max)//С�ڵ����������ܽ�ȥ
	{
		arr2[min] = arr1[min];//�����Ҫһ��һ������ ���Ծ��൱��arr1��ֵ��arr2 ���� arr2 =arr1
		arr2[max] = arr1[max];//ͬ��
		printf("%s\n", arr2);//��ӡ�ַ������õ�%s
		Sleep(1000);// ��Ϣһ�����˼  Sleep()���浥λ��ms��sleep()���浥λ��s��"s"��Сд��ͬ����λҲ��ͬ ͷ�ļ��� #include <Windows.h>
		system("cls");////ִ��ϵͳ�����һ������- cls - �����Ļ  ͷ�ļ���#include <stdlib.h>
		min++;
		max--;
	}
	printf("%s\n", arr2);
	return 0;
}*/




//���ö����㷨 ����һ������
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ��� 40/4=10  //�������С/ÿ��Ԫ�صĴ�С=����Ԫ�ظ�����
	int min = 0;//���  Ҳ�������������Сֵ
	int max = sz-1;//�ұ� -1����ΪҪ�����±� ��Ϊ��10���� -1���ܵ���9 �������������߾���9
	while (min <= max)//С�ڻ��ߵ��ڲ��ܽ�ȥ �������Ļ� ���Ǿͻύ����ɲ�������˺�
	{
		int mid = (min + max) / 2;//���mid�м�ֵ
		if (arr[mid] > k)//���ұߵĻ� ��-1 ��max
		{
			max = mid - 1;
		}
		else if (arr[mid] < k)//����ߵĻ� ��+1��min //�ܽ� ��ΪҪ�ӽ��м�ֵ���ԲŻ�+1 -1
		{
			min = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}

	}
	if (min > max)//���ʱ���Ѿ������� ���Ծ���û���ҵ���ֵ
	{
		printf("�Ҳ���\n");
	}
	
}//�����㷨�ж����㷨  ��һ���ǳ����õ�һ���㷨*/

/*int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	// 1 + 2 + 6 = 9
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		//n�Ľ׳�
		sum = sum + ret;
	}
	//ret  = 1*1 =1
	//ret  = 1*1*2 =2
	//ret  = 1*1*2*3 =6
	printf("sum = %d\n", sum);
	return 0;
}*/

/*int main()
{
	int ret = 1;
	int i = 0;
	int n = 0;
	int s = 0;
	for (i = 1; i <= 3; i++)
	{
		ret = ret * i ;
		s = s + ret;
	}
	printf("s = %d", s);
}*/

/*int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	//��n�Ľ׳ˣ�n���û���������ֵ����Ҫ�ⲿ����������scanf����n��ȡ��ַn
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d", ret);
}*/

/*int main()
{
	int i = 0;
	do
	{
		if (i == 5)
			break;
		//break �������0 1 2 3 4
		//continue ������� 0 1 2 3 4 ��ѭ��
		printf("%d ",i);
		i++;
	} while (i <= 10);
}*/


/*int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; k++, i++)
		//����ȥѭ�� ��Ϊ�ж� k=0  0Ϊ��  Ϊ���˻�ѭ����ʲô ����ѭ�����
	{
		k++;
	}
	return 0;
}*/

/*int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
		//&&���ҵ���˼  Ҫͬʱ������������������ѭ�� ����ֻҪһ����������ôѭ���ͽ���
	{
		printf("hehe\n");
	}
	return 0;
}*/

/*int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
		//���ѭ��һ�Σ��ڲ�forѭ��ȫ��ִ������ٽ�������һ��ѭ����
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d\n",i,j);
		}
	}
	return 0;
}
// ����ѭ����ȥ����ѭ�� ��ѭ��i==0 i<10 ������������ ��ѭ�� Ȼ��j ==0 С��<10 ��ʼѭ�� 0 1 2 3 4 5 6 7 8 9 ���ǵ�һ��ѭ��
// Ȼ���ȥ �ڽ��뵽��ѭ�� i++ 0+1����1 ���������ڽ��뵽��ѭ�� ��ʼѭ�� ���ʱ�� j�ǵ���0 �� ��� 0 1 2 3 4 5 6 7 8 9 
*/

/*int main()
{
	int i = 0;
	for (;;)
	{
		printf("hehe\n");
	}
	return 0;
}*/


/*int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//�����Ǵ�0��ʼ 0 1 2 3 4 5 6 7 8 9 ��Щ��Ϊ�±�
	int i = 0;
	//10 ��ѭ��
	//10�δ�ӡ
	//10��Ԫ��
	for (i = 0; i < 10; i++)
		//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
		// = ���Ǳ����� < ���ǿ�����
	{
		printf("%d ", arr[i]);
		//0-9��С��10 ����һ���ӡ�� 9��Ӧ����10
	}
	return 0;
}*/

/*int main()
{
	int i = 0;
	//  ��ʼ��    �ж�   ����
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}*/

/*int main()
{
	int i = 0;//��ʼ��
	while (i < 10)//�ж�
	{
		//......
		//i++  //����
	}
}*/


/*int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')// ||���ߵ���˼        //���������� �Ժ���
		    continue;//���治����
		putchar(ch);
	}
	return 0;
}*/

/*int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("���������룺");//�������룬�������password������
	scanf("%s",password);
	while ((ch = getchar()) !='\n')//ע�ⲻ��getchar��������Ż���ִ�У�=���������ž���ִ��������Ĺ�
	{
		;
	}
	printf("��ȷ��(Y/N)��");
	ret = getchar();
	printf("ȷ�ϳɹ�");
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("����ȷ��");
	}


}*/


/*int main()
{
	int ch = 0;
	//EOF - end of file �ļ�������־
	while ((ch = getchar()) != EOF)//getchar ����
	{
		putchar(ch);//putchar ���
	}
	return 0;
}*/