#include<stdio.h>
int getdata(int a)
{
    printf("enter a value\n");
    scanf("%d",&a);
    return a;
}

void add(int a,int b, int *c)
{
    *c=a+b;
}
void main()
{
    int a,b,x,*c;
    a=getdata(x);
    b=getdata(x);
    add(a,b,&c);
     printf("%d\n",a);
     printf("%d\n",b);
     printf(" the sum is %d\n",c);
}
