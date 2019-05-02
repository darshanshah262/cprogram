#include<stdio.h>
int get()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    return a;
}
int logic(int a,int b, int c)
{
    if(a>b)
    {
        if(a>c)
         return a;
        else
         return b;
    }
    
    if(b>a)
    {
        if(b>c)
         return b;
        else 
         return c;
    }
   
}
void main()
{
    int a,b,c,s;
    a=get();
    b=get();
    c=get();
    s=logic(a,b,c);
    printf("the greatest of three is %d\n",s);
}
