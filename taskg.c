#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
{
    printf(" the given number is even");
}else
printf("\n the given number is odd");
return 0;
}