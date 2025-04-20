#include<stdio.h>
int main()
{
    int a = 4, b = 5, temp;
    printf(" before swap\n a : %d, b : %d", a,b);
    temp = a;
    a = b;
    b = temp;
    printf(" \n after swap\n a : %d, b : %d", a,b);
}