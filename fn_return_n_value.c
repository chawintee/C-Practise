#include<stdio.h>

void pricePart(double totalPrice, double *price, double *vat){
    *vat = totalPrice * 7.0 / 107;
    *price = totalPrice - *vat;
}


typedef struct {
    double price;
    double vat;
} PriceType;

PriceType pricePart2(double totalPrice){
    PriceType p;//p is structure
    p.vat = totalPrice * 7.0 / 107;
    p.price = totalPrice - p.vat;
    return p;
}

int main(){
// total price = 107 , price = 100, VAT = 7



    double totalPrice, price, vat;
    totalPrice = 1070;
    pricePart(totalPrice, &price, &vat);
    printf("total price = %.2f, price = %.2f, vat = %.2f\n", totalPrice, price, vat);
    PriceType p = pricePart2(totalPrice);
    printf("total price = %.2f, price = %.2f, vat = %.2f\n", totalPrice, p.price, p.vat);
    




    return 0;
}