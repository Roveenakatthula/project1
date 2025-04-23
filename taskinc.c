#include<stdio.h>
int main()
{
    int a[100], b[100], c[200], d, e, i, j;
    printf("Enter the first array :");
    scanf("%d", &d);
    printf("Enter the %d of array numbers : ", d);
    for(i = 0; i < d; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter the second array : ");
    scanf("%d", &e);
    printf("Enter the %d of array numbers : ", e);
    for(i = 0; i < e; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i = 0; i < d; i++)
    {
        c[i] = a[i];
    }
    for(j = 0; j < e; j++)
    {
        c[i + j] = b[j];
    }
    printf("merged arrays are : \n");
    for(i = 0; i < d + e; i++)
    {
        printf("%d ", c[i]);
    }
return 0;
}