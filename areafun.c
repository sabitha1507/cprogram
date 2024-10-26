#include <stdio.h>

// Function to calculate the area of a square
float calculateArea(float side) {
    return side * side;
}

// Function to calculate the perimeter of a square
float calculatePerimeter(float side) {
    return 4 * side;
}

int main() {
    float side, area, perimeter;

    // Input the side length of the square
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Call the functions to calculate area and perimeter
    area = calculateArea(side);
    perimeter = calculatePerimeter(side);

    // Display the results
    printf("Area of the square: %.2f\n", area);
    printf("Perimeter of the square: %.2f\n", perimeter);

    return 0;
}
