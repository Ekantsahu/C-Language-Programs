#include <stdio.h>
#include <conio.h>

int main(){
    printf("Program to find the surface area of a cylinder \n");
    getch();
    float radius,height,surfaceArea;

    printf("Enter the radius : ");
    scanf("%f",&radius);
  
    printf("Enter the height : ");
    scanf("%f",&height);

    surfaceArea = ((2*3.14159)*radius*radius) + ((2*3.14159)*radius*height);
    printf("Radius: %.2f",radius);
    printf("Height: %.2f",height);
    printf("Surface Area: %.2f",surfaceArea);
    

    return 0;
}