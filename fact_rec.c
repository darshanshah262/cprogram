#include<stdio.h>
int fact(int n);
void main()
{
    int a,s;
    printf("Enter the number\n");
    scanf("%d",&a);
    s=fact(a);
    printf("The factorial of the number %d is %d",a,s);
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
