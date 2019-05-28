#include<stdio.h>
void swaap(int *a,int *b);
int main()
{
        int x,y;
        printf("Enter the values of A and B\n");
        scanf("%d%d",&x,&y);
        printf("Before Swap\n");
        printf("%d  %d",x,y);
        swaap(&x,&y);
        printf("After Swap\n");
        printf("%d  %d",x,y);
}
void swaap(int *a, int *b)
{
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
}
