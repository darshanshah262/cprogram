#include<stdio.h>
#include<math.h>
int main()
{
        float a[10],*ptr,mean,std,sum=0,sumstd=0;
        int n,i;
        printf("Enter the number of elements\n");
        scanf("%d",&n);
        printf("Enter Array elements\n");
        for(i=0;i<n;i++)
                scanf("%f",&a[i]);
        ptr=a;
        for(i=0;i<n;i++)
        {
                sum=sum+*ptr;
                ptr++;
        }
        mean=sum/n;
        ptr=a;
        for(i=0;i<n;i++)
        {
                sumstd=sumstd+pow((*ptr-mean),2);
        }
        std=sqrt(sumstd/n);
        printf("Sum=%.3f\n",sum);
        printf("Mean=%.3f\n",mean);
        printf("Standard Deviation=%.3f\n",std);
}
