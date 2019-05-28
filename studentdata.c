#include<stdio.h>
struct students
{
        int rollno;
        char name[20];
        float marks;
        char grade;
};
int main()
{
        int n,i,rno;
        printf("Enter the number of students\n");
        scanf("%d",&n);
        struct students s[n];
        for(i=0;i<n;i++)
        {
                printf("Enter the %d students roll number, name and marks off 50\n",i+1);
                scanf("%d",&s[i].rollno);
                scanf("%s",s[i].name);
                scanf("%f",&s[i].marks);
                if(s[i].marks<=10)
                        s[i].grade='F';
                else if(s[i].marks>10 && s[i].marks<20)
                        s[i].grade='D';
                else if(s[i].marks>=20 && s[i].marks<30)
                        s[i].grade='C';
                else if(s[i].marks>=30 && s[i].marks<40)
                        s[i].grade='B';
                else
                        s[i].grade='A';
        }
        printf("Enter the student roll number\n");
        scanf("%d",&rno);
        for(i=0;i<n;i++)
        {
                if(rno==s[i].rollno)
                {
                        printf("The student,s Name Marks and Grade are:\n");
                        printf("Student %s\nMarks  %f\nGrade  %c\n",s[i].name,s[i].marks,s[i].grade);
                        break;
                }
        }
}
