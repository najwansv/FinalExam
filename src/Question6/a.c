#include<stdio.h>

int main(){

    float SquareSide, process, output;
    scanf("%f", &SquareSide);

    float phi = 3.142;

    process = SquareSide*SquareSide;
    float circleArea;
    circleArea = phi * ((SquareSide/4)*(SquareSide/4));

    output = process - (4 * circleArea);

    printf("%f", output);
}