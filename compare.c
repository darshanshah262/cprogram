#include<stdio.h>
int compare(char s1[],char s2[]);
int main()
{
        int s=0;
        char s1[10],s2[10];
        printf("Enter the strings\n");
        scanf("%s%s",s1,s2);
        s=compare(s1,s2);
        printf("%d",s);
        return 0;
}
int compare(char s1[],char s2[])
{
        int s,i=0,j=0;
        while(s1[i]!='\0' || s2[j]!='\0')
        {
                if(s1[i]>s2[j])
                        s=s1[i]-s2[j];
                else if(s1[i]==s2[j])
                        s=0;
                else if(s1[i]<s2[j])
                        s=-s2[j]+s1[i];
                i++;
                j++;
        }
        return s;
}
