#include<stdio.h>
int main()
{
    int a,i;
    unsigned long long f =1;
    printf("enter the number: ");
    scanf("%d", &a);
    if(a < 0){
    printf("zero and negative numbers does't have the fractical ");
    }
    else 
    {
        for(i = 1; i <= a; i++)
        f = f * i;
    }
    printf("Factorical of %d is: %llu \n", a, f);
return 0;

}