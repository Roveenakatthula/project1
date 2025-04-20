#include<stdio.h>
int main()
{
    int q = 10,b = 4;
    q = q ^ b;
    b = q ^ b;
    q = q ^ b;
    printf("q value: %d\n", q);
    printf("b value:%d", b);
    return 0;
}