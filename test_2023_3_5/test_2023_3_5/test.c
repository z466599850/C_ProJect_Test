#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

/*
	��дһ�γ���������������ȡ��ʾ��ߵ�����
	ֵ����ʾ����׼���ص�ʵ��ֵ����׼���ظ��ݹ�
	ʽ(���-100)x0.9���м��㣬���ý������һλС����
*/

int main()
{
	int height;
	
	printf("������������ߣ�");
	scanf("%d", &height);

;
	printf("���ı�׼�����ǣ�%.1f����", ((height - 100) * 0.9));
	return 0;
}

/*int main()
{
	double x, y;
	puts("������������");
	printf("ʵ��vx��");
	scanf("%lf", &x);
	printf("ʵ��vy��");
	scanf("%lf", &y);

	printf("vx + vy = %f\n", x + y);
	printf("vx - vy = %f\n", x - y);
	printf("vx * vy = %f\n", x * y);
	printf("vx / vy = %f\n", x / y);
	return 0;
}*/

/*int main()
{
	//��дһ�γ���������������ȡ����������Ȼ����ʾ��ǰ���Ǻ��ߵİٷ�֮����
	int x, y;
	puts("����������������");
	printf("����x��");
	scanf("%d", &x);
	printf("����y��");
	scanf("%d", &y);
	printf("x��ֵ��y��%d%%", x * 100 / y);

	return 0;
}*/

/*int main()
{
	int a = 0;
	int b = 0;
	printf("����������������\n");
	printf("����a��");
	scanf("%d", &a);
	printf("����b��");
	scanf("%d", &b);
	printf("%d / %d = %d �� %d ", a,b,a / b, a % b);
	return 0;
}*/

/*int main()
{
	int num = 0;
	printf("������һ��������");
	scanf("%d", &num);
	printf("���һλ�ǣ�%d", num % 10);
	return 0;
}*/

/*int main()
{
	int vx, vy;
	printf("��������������\n");
	printf("����vx��");
	scanf("%d", &vx);
	printf("����vy��");
	scanf("%d", &vy);

	//����
	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx / vy = %d\n", vx / vy);
	printf("vx %% vy = %d\n", vx % vy);//ֻ�����%%��ʱ�򣬾ͱ���д��%% ���򲻻���ʾ%
	return 0;
}*/