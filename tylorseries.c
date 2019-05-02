#include<stdio.h>
void main()
{
    float x,degree,term,sum;
    int i,n;
    printf("Enter the value of degree\n");
    scanf("%f",&degree);
    printf("enter the number of terms\n");
    scanf("%d",&n);
    x=degree*3.1416/180;
    term=x;
    sum=term;
    for(i=3;i<=n;i=i+2)
    {
        term=-term*x*x/(i-1)*i;
        sum=sum+term;
    }
    printf("the sum of tylors serries %f\n",sum);
}
