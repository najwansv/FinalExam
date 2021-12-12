#include<stdio.h>

int main(){

    char Employed;
    int worklength;

    scanf("%c", &Employed);
    scanf("%i", &worklength);

    if (Employed == 'Y' && worklength >= 3)
    {
        printf("Your loan is accepted");
    }else if (worklength < 3)
    {
        printf("Please provide a guarantore");
    }else if (Employed ='N')
    {
        printf("Your loan is rejected");
    }
}