#include<stdio.h>
void main()
{
    int n,i,p=0,q=1,r;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("%d\t%d\t",p,q);
    for(i=2;i<n;i++)
    {
        r=p+q;
        printf("%d\t",r);
        p=q;
        q=r;
    }
}
