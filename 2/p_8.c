#include<stdio.h>
int main(){
    float amount, rate, payment;
    float first, second, third;

    printf("Enter an amount of load: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    rate /= 1200;
    first = (amount - payment) * (1 + rate);
    printf("Balance remaining after first payment: %.2f\n", first);
    second = (first - payment) * (1 + rate);
    printf("Balance remaining after first payment: %.2f\n", second);
    third = (second - payment) * (1 + rate);
    printf("Balance remaining after first payment: %.2f\n", third);
}