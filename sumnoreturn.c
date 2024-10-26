#include <stdio.h>

void add(int a, int b);

int main()
{
    int x, y;


    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    
    add(x, y);

    return 0;

printf("The sum of %d and %d is: %d\n", a, b, a + b);
}