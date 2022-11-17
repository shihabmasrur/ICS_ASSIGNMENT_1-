#include <stdio.h>

int main(){
    printf("Input four floats: ");
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float operation_1 = a + b - c;
    float operation_2 = operation_1 * d;
    float operation_3 = operation_2 - (a/d);



   //(a + b – c) * d – a / d.
    printf("(%f + %f - %f) * %f - %f / %f = %f",a,b,c,d,a,d, operation_3);
    return 0;
}
