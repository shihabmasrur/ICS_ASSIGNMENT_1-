#include <stdio.h>

int main(){
    printf("Input height in inches: ");
    int i;
    scanf("%d",&i);
    int f = i / 12;
    int inches = (i - f*12);
    printf("%d feet %d inches",f,inches);
    return 0;
}
