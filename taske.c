#include<stdio.h>
int main()
{
    float a,b,pi = 3.1416;
    printf("Enter the circle area: ");
    scanf("%f", &a);
    b = (pi * (a * a));
    printf("\n area of the circle is : %.2f\n", b);
    return 0;
}