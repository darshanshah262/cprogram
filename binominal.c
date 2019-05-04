#include<stdio.h>
int main()
{
        int n,r,q,rf=1,nf=1,nrf=1,ncr,i;
        printf("Enter the value of n and r respectively\n");
        scanf("%d %d",&n,&r);
        q=n-r;
        if(n<r)
                printf("INVALID INPUT\n");
        else
        {
         for(i=2;i<=n;i++)
                 nf=nf*i;
         for(i=2;i<=r;i++)
                 rf=rf*i;
         for(i=2;i<=q;i++)
                 nrf=nrf*i;
         }
        ncr=nf/(rf*nrf);
        printf("The binomial coefficient is:%d\n",ncr);
        return 0;
}


