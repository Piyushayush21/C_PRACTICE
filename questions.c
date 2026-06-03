//  write a program to calculate area of a square 

// # include<stdio.h>
// int main () {
//     int side_1 , side_2;
//     printf("ENTER YOUR FIRST SIDE:");
//     scanf("%d" , &side_1);

//     printf("ENTER YOUR SECOND SIDE");
//     scanf("%d" , &side_2);

//     int sum = side_1 * side_2;
//     printf("AREA OF SQUARE IS  %d", sum);
//     return 0;


// }

// write a program to calcuate area of a circle 
//  3.14159 pi ki value 

#include <stdio.h>

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;          

    printf("Area of the circle = %.2f\n", area);

    return 0;
}