#include<stdio.h>
main()
{
    int i,j,space,rows,c;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(space=1;space<rows-i;space++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i==0||j==0)
            {
                c=1;
            }
            else
            {
                c=c*(i-j+1)/j;
            }
            printf("%d",c);
            printf(" ");
        }
        printf("\n");
    }
}
