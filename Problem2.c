#include <stdio.h>

int main(){
    printf("Input two integers: ");
    int a,b;
    scanf("%d%d",&a,&b);
    int sum = a+b;
    int sub = a-b;
    int mult = a*b;
    int div = a/b;
    int rem = a%b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,mult);
    printf("%d / %d = %d\n",a,b,div);
    printf("%d %% %d = %d\n",a,b,rem);

    return 0;
}
