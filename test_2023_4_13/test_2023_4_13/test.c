#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
/*
 1 1
 2 3   每天2个
 3 4 5 每天3个
 6 7 8 9 每天4个

 1   1
 2 2
 3 3
 4 4
*/
int main()
{
    int n = 0;
    scanf("%d", &n);
    int sum = 0;
    int i = 0;
    int count = 0;
    int j = 0;
    for (i = 1; i <= n ; i++)
    {

        for (j = 0; j < i; j++)
        {
            sum += i;
            count++;
            if (count == n)
            {
                goto here;
            }
        }
       
    }
    here: printf("%d", sum);

    return 0;
}