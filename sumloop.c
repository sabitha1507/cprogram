#include<stdio.h>
int main()
{
    int i=1;
    int n;
    printf("enter the value of n : \n");
    scanf("%d",&n);
    int sum=0;

    while(i<=n)
    {
        sum=sum+i;
i++;
    }
    printf("enter the sum of series : %d \n",sum);
    return 0;
}