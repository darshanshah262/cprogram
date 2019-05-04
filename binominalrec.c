#include<stdio.h>
int fact(int n);
int main()
{
        int n,r,q,ncr;
        printf("Enter the value of n and r\n");
        scanf("%d %d",&n,&r);
        q=n-r;
        if(n<r)
                printf("INVALID INPUT\n");
        else
        {
                ncr=fact(n)/(fact(r)*fact(q));
                printf("%d",ncr);
        }
}
int fact(int n)
{
        if(n==0)
                return 1;
        else
                return n*fact(n-1);
}
