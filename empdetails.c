#include<stdio.h>
struct employee
{
        int empid;
        char empname[20];
        float empsalary;
};
int main()
{
        int n,i;
        printf("Enter the number of employees\n");
        scanf("%d",&n);
        struct employee s[n];
        for(i=0;i<n;i++)
        {
                printf("Enter the %d employee id, name, salary\n",i+1);
                scanf("%d",&s[i].empid);
                scanf("%s",s[i].empname);
                scanf("%f",&s[i].empsalary);
        }
        printf("The details of employee whose salary is above Rs. 10000 is:\n");
        for(i=0;i<n;i++)
        {
                if(s[i].empsalary>=10000)
                {
                        printf("The employee name is:%s\n",s[i].empname);
                        printf("The employee id is:%d\n",s[i].empid);
                }
        }
}
