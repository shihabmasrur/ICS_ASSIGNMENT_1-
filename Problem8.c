#include <stdio.h>

int main(){
    printf("Input the values of u,a and t: ");
    float u,a,t;
    scanf("%f%f%f",&u,&a,&t);
    float s = (u * t)+0.5*a*pow(t,2);
    printf("%f",s);
    return 0;
}
