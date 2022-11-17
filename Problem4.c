#include <stdio.h>

int main(){
    printf("Input four integers: ");
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int operation_1 = a * b;
    int operation_2 = (a - c) / d;
    int operation_final = operation_1 + operation_2 + b;

   //a * b + (a – c) / d + b;
    printf("%d * %d + (%d - %d) / %d + %d = %d",a,b,a,c,d,b, operation_final);
    return 0;
}
