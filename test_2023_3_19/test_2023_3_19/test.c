#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    double d = 0;
    scanf("%lf", &d);
    if (d >= 0)
    {
        int a = d + 0.5;
        printf("%d", a);
    }
    else {
        int a = d - 0.5;
        printf("%d", a);
    }
    return 0;
}
/*int main()
{
    double d = 0;
    scanf("%lf", &d);

    printf("%d", d);
    return 0;
}*/

/*int main()
{
    int i = 0;
    char c = 0;
    int n = 3;
    scanf("%c", &c);

    for (i = 1; i <= 3; i++)
    {
        int j = 0;
        for (j = 0; j <  n - i; j++)
        {
            printf(" ");
        }

        for (j = 0; j < i * 2 - 1; j++)
        {
            printf("*");
            
        }
        printf("\n");
    }

    for (i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (j = 0; j < 2 * (3 - i) - 1; j++)
        {
            printf("*");

        }
        printf("\n");
    }

    return 0;
}*/

/*int main()
{
	printf("practice makes perfect!");
	return 0;
}*/

/*int main()
{
	int a = 16;
	int b = a >> 1;
	//00000000000000000000000000000000101
	//×óÒÆ²Ù×÷·û£º×ó±ß¶ªÆú£¬ÓÒ±ß²¹0	 Ïò×óÒÆ¶¯ÓÐ¡Á2µÄÐ§¹û
	printf("%d", b);
	return 0;
}
*/