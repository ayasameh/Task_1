#include <stdio.h>
#include <stdlib.h>

int main(){

    float pi = 3.14159;
    float radius , Area , Circumference;
    puts("please , enter the radius of a circle :");
    scanf("%f" , &radius);
    Area = pi * radius * radius;
    Circumference = 2 * pi * radius;
    printf("\nArea = %f meters square\nCircumference = %f meters\n" , Area , Circumference);
    return 0;
}
