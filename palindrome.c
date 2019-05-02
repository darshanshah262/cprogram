#include<stdio.h>
main()
{
    int rev=0,n,temp,digit;
    printf("enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        rev=digit+10*rev;
    }
    printf("The reversed number is %d\n",rev);
    if(rev==temp)
    {
        printf("the number is palindrome\n");
    }
    else 
    {
        printf("the number is not palindrome\n");
    }
}
