#include<stdio.h>
void concat(char s1[],char s2[]);
int main()
{
        char s1[20];
        char s2[10];
        printf("Enter the strings\n");
        scanf("%s%s",s1,s2);
        concat(s1,s2);
        printf("Concated string is :%s\n",s1);
        return 0;
}
void concat(char s1[],char s2[])
{
        int i=0,j=0;
        while(s1[i]!='\0')
        {
                i++;
        }
        while(s2[j]!='\0')
        {
                s1[i++]=s2[j++];
        }
        s1[i]='\0';
 }
