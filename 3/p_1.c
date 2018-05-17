#include <stdio.h>
int main()
{
    int mm, dd, yy;

    printf("Enter a date (mm/dd/yyyy): ");

    scanf("%d/%d/%d", &mm, &dd, &yy);
    printf("You enter the date %.4d%.2d%.2d", yy, mm, dd);
}