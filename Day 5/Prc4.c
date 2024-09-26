#include <stdio.h>

int main(){
    float radius = 0;
    float Volume ;
    float pi = 3.14159;
    

    printf("Welcome to Sphere Volume Calculator! \n") ;
    printf("Enter the radius of the sphere: ");
    scanf("%f",&radius);
    
    Volume = (4.0/3.0)*pi*radius*radius*radius;
    
    printf("Volume of the sphere is: %.2f cubic units",Volume);
    return 0;
}