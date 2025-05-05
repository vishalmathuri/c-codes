#include<stdio.h>
#define PI 3.14
#define Area_of_rectangle(l, b) (l * b)
#define Area_of_square(a) (a*a)
#define Area_of_circle(r) (PI*r*r)
int main(){
    float length, breadth, side, radius;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Area of the rectangle: %.2f\n", Area_of_rectangle(length, breadth));

    printf("Enter side of square: ");
    scanf("%f", &side);
    printf("Area of the square: %.2f\n", Area_of_square(side));

    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of the circle: %.2f\n", Area_of_circle(radius));

    return 0;
}

// #include <stdio.h>
// #define PI 3.14159

// #define AREA_RECTANGLE(l, b) (l * b)
// #define AREA_SQUARE(s) (s * s)
// #define AREA_CIRCLE(r) (PI * r * r)

// int main() {
//   float length, breadth, side, radius;

//   printf("Enter the length and breadth of the rectangle: ");
//   scanf("%f %f", &length, &breadth);
//   printf("Area of the rectangle: %.2f\n", AREA_RECTANGLE(length, breadth));

//   printf("Enter the side of the square: ");
//   scanf("%f", &side);
//   printf("Area of the square: %.2f\n", AREA_SQUARE(side));

//   printf("Enter the radius of the circle: ");
//   scanf("%f", &radius);
//   printf("Area of the circle: %.2f\n", AREA_CIRCLE(radius));

//   return 0;
// }

