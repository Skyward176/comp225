#include<stdio.h>
int main(void) {
    double input;  
    printf("Please input a dollar amount> ");
    scanf("%lf", &input);
    long cents = input*100.0;
    long dollars=0, quarters=0, dimes=0, nickels=0, pennies =0;
    if(cents>= 100) {
        dollars = cents/100;
        cents = cents %100;
    }
    if(cents>=25) {
        quarters = cents/25;
        cents = cents%25;
    }
    if(cents>= 10) {
        dimes = cents/10;
        cents = cents%10;
    }
    if(cents>= 5) {
        nickels = cents/5;
        cents = cents%5;
    }
    pennies = cents;
    printf("This amount breaks down into > %ld dollars, "
            "%ld quarters, "
            "%ld dimes, "
            "%ld nickels, "
            "%ld pennies \n", dollars, quarters, dimes, nickels, pennies);
    return 0;
}
