#include<stdio.h>
int main()
{
    int a;
    float b;
    float salary;
    printf("enter the value of a & b: \n");
    scanf("%d%f",&a,&b);
if (a>=50&&b>=60000.0)
{
    salary=b+b*0.05; 
}
else if (a>=50&&b<60000.0)
{
    salary=b+b*0.1;  
}
else if (a<50)
{
    salary=b+b*0.03;
}
else
{
    printf("he is not an employee \n");
}
 printf("salary of the person is : %f \n",salary);
return 0;
}