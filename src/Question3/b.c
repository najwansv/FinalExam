#include<stdio.h>

int main(){
    
    int Temperature;
    
    printf("input Temperature = "); 
    scanf("%d",&Temperature);

    printf("\nValue %d > 30 is %d\n",Temperature,Temperature>30);
}