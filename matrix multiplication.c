#include<stdio.h>
int main()
{
    int m,n,p,q,a1[10][10],a2[10][10],product[10][10],temp=0;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the first matrix: ");
    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    } printf ("Enter the rows and columns of second matrix: ");
    scanf("%d%d",&p,&q);
    if (n!=p)
    {
        printf("Invalid input");
    }
    else
    {
        printf("Enter the second matrix: ");
        for (int i=0 ; i<p ; i++)
        {
            for (int j=0 ; j<q ; j++)
            {
                scanf("%d",&a2[i][j]);
            }
        }
        for (int i=0 ; i<m ; i++)
        {
            for (int k=0 ; k<q ; k++)
            {
                for (int j=0 ; j<n ; j++)
                {
                    temp=temp+a1[i][j]*a2[j][k];
                }
                product[i][k]=temp;
                temp=0;
            }
        }
        printf("\nProduct is: "); for (int i=0 ; i<m ; i++)
        {
            for (int k=0 ; k<q ; k++)
            {
                printf("%d\t",product[i][k]);
            }
        }
    }
    printf("\nAKSHITA DAS");
    return 0;
}
