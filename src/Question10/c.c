#include<stdio.h>

int FeetToInches(int Feet){
    int convert;
    convert = 12*Feet;
    return convert; 
}
int main(){
    int Feet;
    printf("Insert feet: ");
    scanf("%i", &Feet);

    int res = FeetToInches(Feet);
    printf("%i", res);
}