#include<stdio.h>

void SalePrice(float productCost, float markup){
    float sale = productCost * markup;
    float total = sale + productCost;
    printf("The product cost is : %f", total);

}

int main(){
    float productCost;
    float markup = 0.5;

    scanf("%f", &productCost);
    SalePrice(productCost,markup);

}