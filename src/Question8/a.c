#include<stdio.h>

int calculate2number(float x, float y){
    return x+y;
}

int main(){

    float x = 15;
    float y = 10;
    float res = calculate2number(x, y);
    
    printf("%f", res);
}