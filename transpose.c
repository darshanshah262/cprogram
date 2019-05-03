#include<stdio.h>
void main()
{
    int n,a[10][10],b[10][10],i,j;
    printf("Enter the size of array that must be a square matrix\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The entered matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("The transposeed matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    
}

