#include <stdio.h>
int main()
{
    int a[10], i, n;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    printf("enter n values:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n numbers entered are:\n");
    for(i=0;i<n;i++)
        printf("%d", a[i]);

    return 0;
}
