#include<stdio.h>
int main(){
    int number, mm, dd, yyyy;
    float price;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter the date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t\t%.2d/%.2d/%.4d\n", number, price, mm, dd, yyyy);
}