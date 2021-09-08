#include<stdio.h>
#include<math.h>
int main()
{
    int n, a[10][10], trace=0, norm=0, temp=0, sum=0;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    printf("Enter the matrix: ");
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        { if (i==j)
            {
                trace=trace+a[i][j];
            }
        }
    }
    printf("\nTrace is %d \n",trace);
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            temp=a[i][j]*a[i][j];
            sum=sum+temp;
        }
    }
    norm=sqrt(sum);
    printf("\nNorm is %d\n",norm); //normal without decimal
    printf("\nAKSHITA DAS");
    return 0;
}
