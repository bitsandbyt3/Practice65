#include <stdio.h>

/*
 * *************************************
 * ** This function draws a table to ***
 * ** to help calculate the price ******
 * *************************************
 */
void table(double p1) {

    for (int y = 1; y <= 5; y++) {
        if (y == 1) {
            printf("Amount\t\tPrice\n");
            printf("%6d\t%8.2f Euro\n", y, (p1 * y));
        } else if (y == 5) {
            printf("%6d\t%8.2f Euro\n\n", y, (p1 * y));
        } else {
            printf("%6d\t%8.2f Euro\n", y, (p1 * y));
        }
    }
}

/*
 * **************************************
 * ** This function helps to calculate **
 * ** the average price and returns it **
 * **************************************
 */

double averagePrice (double priceOne, double priceTwo) {
    return ((priceOne + priceTwo)/2);
}

int main() {
    double priceApple = 1.45;
    double pricePear = 0.85;
    double priceBanana = 0.75;

    table(priceApple);
    table(pricePear);
    table(priceBanana);

    printf("the average price of an apple and a banana is: %.2f Euro\n", averagePrice(priceApple, priceBanana));
}
