#include<stdio.h>
int main(){
    float radius = 0;
    int side = 0;
    float circle = 0;
    int square = 0;

    printf("Enter radius of circle : ");
    scanf("%f", &radius);
    printf("Enter side of square : ");
    scanf("%d", &side);

    circle = 3.14 * radius * radius;
    square = side * side;

    printf("Area of Circle is: %.2f\n", circle);
    printf("Area of Square is: %d", square);

return 0;
}