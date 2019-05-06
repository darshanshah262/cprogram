#include<stdio.h>
int fib(int n);
int main()
{
    int n,i,r;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
     r=fib(i);
     printf("%d\t",r);
    }
}
int fib(int n)
{
    if(n==0)
    {
        return n;
    }
    if (n==1)
    {
        return n;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}
