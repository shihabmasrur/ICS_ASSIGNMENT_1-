#include <stdio.h>

int main(){
    printf("Enter time in seconds: ");
    int s;
    scanf("%d",&s);
    int hour = s / 3600;
    int minute = (s-hour*3600) / 60;
    int seconds = s - hour*3600 - minute*60;

    printf("%d hour %d minutes %d seconds",hour,minute,seconds);
    return 0;
}
