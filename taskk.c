#include<stdio.h>
int main()
{
    int a,i,j,b;
    printf(" Enter the number :");
    scanf("%d", &a);
    printf(" \n the prime numbers uoto %d are ", a);
    for(i = 2; i <= a; i++)
    {
        b = 1;
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                b = 0;
                break;
            }
        }
        if(b)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}