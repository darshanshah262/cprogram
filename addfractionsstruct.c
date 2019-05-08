#include<stdio.h>
struct frac
{
        int num;
        int den;
};
 struct frac input()
{
        struct frac s1;
        printf("Enter the nume and deno \n");
        scanf("%d%d",&s1.num,&s1.den);
        return s1;
}
struct frac get()
{
        struct frac s2;
        printf("Enter the num and deno for second fraction\n");
        scanf("%d%d",&s2.num,&s2.den);
        return s2;
}
struct frac compute(struct frac p,struct frac q)
{
        struct frac s3;
        s3.num=(p.num*q.den)+(q.num*q.den);
        s3.den=p.den*q.den;
        return s3;
}
struct frac gcd(struct frac s)
{
        struct frac j;
        int i;
        if(s.num<s.den)
                i=s.num;
        if(s.dem<s.num)
                i=s.den;
        for(;i<=s.num && i<=s.den;i--)
        {
                if(s.num%i==0 && s.den%i==0)
                {
                        j.num=i;
                        j.den=i;
                        s.num=s.num/j.num;
                        s.den=s.den/j.den;
                        return s;
                }
        }
        return s;
}
int main()
{

        struct frac s,s1,s2,s3;
        s=input();
        printf("%d/%d\n",s.num,s.den);
        s1=get();
        printf("%d/%d\n",s1.num,s1.den);
        s2=compute(s,s1);
        s3=gcd(s2);
        printf("The fraction is: %d/%d",s3.num,s3.den);
}

