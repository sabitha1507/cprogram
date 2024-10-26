#include <stdio.h>


int add();

int main()
{
    int result;

    
    result = add();

    
    printf("The sum of the two numbers is: %d\n", result);

    return 0;
}


int add()
{
    int x, y;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    
    return x + y;
}

