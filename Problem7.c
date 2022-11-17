#include <stdio.h>

int main(){
    printf("Input the values of u,a and t: ");
    int u,a,t;
    scanf("%d%d%d",&u,&a,&t);
    int v = u + (a*t);
    printf("%d",v);
    return 0;
}
