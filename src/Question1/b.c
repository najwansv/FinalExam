#include<stdio.h>
 
int main()
{

    int p, n;
    float interest_rate, value;
 
    p = 1000;
    n = 3;
    interest_rate = 0.32;
 
    value = ( p * n * interest_rate ) / 100;
 
    printf("%f\n",value);
}