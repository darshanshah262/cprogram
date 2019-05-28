#include<stdio.h>
int main()
{
        int *a,*b,x,y,temp;
        printf("Enter the values of A and B\n");
        scanf("%d%d",&x,&y);
        a=&x;
        b=&y;
        printf("Before Swap\n");
        printf("%d  %d",*a,*b);
        temp=*a;
        *a=*b;
        *b=temp;
        printf("After Swap\n");
        printf("%d  %d",*a,*b);
}
