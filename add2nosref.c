#include<stdio.h>
void getdata(int *a,int *b)
{
        printf("Enter the  two value \n");
        scanf("%d%d",a,b);
}
void add(int a,int b, int *c)
{
    *c=a+b;
}
void main()
{
    int a,b,c;
    getdata(&a,&b);
    add(a,b,&c);
     printf("1st no:%d\n",a);
     printf("2nd no:%d\n",b);
     printf(" the sum is %d\n",c);
}



