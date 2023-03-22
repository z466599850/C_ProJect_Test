#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdio.h>
#include <stdio.h>

#include <stdio.h>

int main()
{
    int a = 0;
    int tmp = 0;
    scanf("%d", &a);

    while (a % 2 != 0)
    {
        tmp += a;
    }
    printf("%d", tmp);
    return 0;
}

/*int main()
{
    int month;
    scanf("%d", &month);
    if (month <= 0 || month > 12)
    {
        printf("²»ºÏ·¨");
    }
    else {
        switch (month)
        {
        case 3:
        case 4:
        case 5:
            printf("´º¼¾");
            break;
        case 6:
        case 7:
        case 8:
            printf("ÏÄ¼¾");
            break;
        case 9:
        case 10:
        case 11:
            printf("Çï¼¾");
            break;
        case 1:
        case 2:
        case 12:
            printf("¶¬¼¾");
            break;

        }
    }
    return 0;
}*/

/*int main()
{
    double weight;
    double height;
    double BMI;
    scanf("%lf%lf", &weight, &height);

    BMI = weight / (height * height);
    if (BMI < 18.5)
        printf("Æ«ÊÝ");
    else if (BMI >= 18.5 && BMI < 20.9)
    {
        printf("ÃçÌõ");
    }
    else if (BMI >= 20.9 && BMI <= 24.9)
    {
        printf("ÊÊÖÐ");
    }
    else if (BMI > 24.9)
    {
        printf("Æ«ÅÖ");
    }
    return 0;
}*/

/*int main()
{
    double money;
    scanf("%lf", &money);
    //¼ÆËã´òÕÛ
    if (money >= 100 && money < 500)
    {
        printf("%.1lf", money * 0.9);
    }
    else if (money >= 500 && money < 2000)
    {
        printf("%.1lf", money * 0.8);
    }
    else if (money >= 2000 && money < 5000)
    {
        printf("%.1lf", money * 0.7);
    }
    else
    {
        printf("%.1lf", money * 0.6);
    }
    return 0;
}*/

/*int main()
{

    int a, b;
    scanf("%d%d", &a, &b);


    printf("%d", a + b);
    printf("%d", a - b);
    printf("%d", a * b);
    printf("%d", a / b);
    printf("%d", a % b);

    return 0;
}*/