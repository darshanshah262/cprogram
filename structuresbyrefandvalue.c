#include<stdio.h>
struct var
{
        int a;
        int b;
};
struct var values()
{
        struct var s1;
        printf("Enter first number\n");
        scanf("%d%d",&s1.a,&s1.b);
        return s1;
}
void reference(struct var *s)
{
        int temp;
        temp=s->a;
        s->a=s->b;
        s->b=temp;
        printf("Afher swap\n");
        printf("%d  %d\n",s->a,s->b);
}
int main()
{
        struct var s;
        s=values();
        printf("Before swap\n");
        printf("%d  %d\n",s.a,s.b);
        reference(&s);
}
