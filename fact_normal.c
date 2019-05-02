#include<stdio.h>
void main()
{
    int a,s,fact=1,i;
    printf("Enter the number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of the number %d is %d",a,fact);
}
