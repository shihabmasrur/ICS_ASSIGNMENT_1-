#include <stdio.h>

int main(){
    printf("Input the radius of the circle: ");
    float r;
    float pi = 3.14159;
    scanf("%f", &r);
    float area = pi * r * r;
    printf("%f",area);
    return 0;
}
