#include<stdio.h>
int main()
{
    int a = 5, b = 4, c, d, e, g;
    float f;
    c = a + b;
    d = a - b;
    e = a * b;
    f = (float)a / b;
    g = a % b;
    printf("add: %d", c);
    printf("\nsub: %d", d);
    printf("\nmul: %d", e);
    printf("\ndiv: %.2f", f);
    printf("\nper: %d", g);
    return 0;
}