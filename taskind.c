#include<stdio.h>
int main()
{
    char a[100], temp;
    int len = 0, i;
    printf("Enter the string :");
    scanf("%s", &a);
    while (a[len] != '\0')
    {
        len++;
    }
    for ( i = 0; i <= len/2; i++ )
    {
    temp = a[i];
    a[i] = a[len -1 - i];
    a[len - 1 - i] = temp;
    }
    printf("the reversed string is: %s", a);
    return 0;
}