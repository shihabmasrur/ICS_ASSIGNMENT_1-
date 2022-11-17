#include <stdio.h>

int main(){

    printf("Input two integers: ");
    float a,b;
    scanf("%f%f",&a,&b);
    float sum = a+b;
    float sub = a-b;
    float mult = a*b;
    float div = a/b;

    printf("%f + %f = %f\n",a,b,sum);
    printf("%f - %f = %f\n",a,b,sub);
    printf("%f * %f = %f\n",a,b,mult);
    printf("%f / %f = %f\n",a,b,div);

    return 0;

}
