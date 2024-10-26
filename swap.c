#include<stdio.h>
int main()
{
int n,i;
printf("enter the value of n & i : ");
scanf("%d%d",&n,&i);
int f1,f2;
f1=0;
f2=1;
int f3;
while(i<(n-3))
{
f3=f1+f2;
f1=f2;
f3=f2;
printf("sum of seies is %d",f3);
i++;
}
return 0;    
}
