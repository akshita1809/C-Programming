#include <stdio.h>
int main()
{
    int count=0;
    int num;
    printf("enter number \n");
    scanf("%d",&num);
    for (int i=2; i<num; i++)
    {
        if((num%i)==0)
        {
            count++;
        }
    }
    if(count>0)
        printf("%d is not prime\n",num);
    else
        printf("%d  is prime\n", num);1
        return 0;
}
