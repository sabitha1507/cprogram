#include<stdio.h>
#include<math.h>
int main()
{
int x,n;
int sum;
sum=0;
printf("enter the value of x and n : \n");
scanf("%d%d",&x,&n);
int i=0;
while(i<=n)
{
    sum=sum+power(-1,i)*power(x,i);
    i++;
}
printf("sum of the series is %d",sum);
return 0;

}