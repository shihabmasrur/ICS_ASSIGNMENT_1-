#include <stdio.h>

int main(){
    printf("Input height in centimeter: ");
    int c;
    scanf("%d",&c);
    int m = c / 100;
    int centimeter = (c - m*100);
    printf("%d meters %d centimeters",m,centimeter);
    return 0;
}
