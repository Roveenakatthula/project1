#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter the celsius: ");
    scanf("%f",&c);
    f = (c * 9 / 5)  + 32;
    printf("the fahrenheit is: %.2f\n", f);
    return 0;
}