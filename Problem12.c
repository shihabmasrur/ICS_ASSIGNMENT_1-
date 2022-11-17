#include <stdio.h>

int main(){
    printf("Enter the amount: ");
    int amount;
    scanf("%d",&amount);
    int five_hundred = amount / 500;
    int one_hundred = (amount % 500) / 100;
    int fifty = ((amount % 500) % 100)/50;
    int ten = (((amount % 500) % 100)%50) / 10;
    int five = ((amount % 500) % 100)%10/5;
    int one = ((((amount % 500) % 100)%10)%5)/1;

    printf("%d notes of 500\n%d notes of 100\n%d notes of 50\n%d notes of 10\n%d notes of 5\n%d notes of 1",five_hundred,one_hundred,fifty,ten,five,one);
    return 0;
}
