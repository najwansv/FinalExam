#include<stdio.h>

int main(){

    int bodyWeight, bodyHeight;
    printf("Enter Body Weight: ");
    scanf("%d", &bodyWeight);

    printf("Enter Body Heigh: ");
    scanf("%d", &bodyHeight);

    printf("Your Body Weight is %d Kg\n", bodyWeight);
    printf("Your Body Height is %d Ft\n\n", bodyHeight);

    if (bodyHeight > 40 || bodyHeight < 6){
        printf("true");
    } else {
        printf("false");
    }
}