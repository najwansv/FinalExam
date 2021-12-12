#include<stdio.h>

int main(){
    
    int days, quarantine=14;
    
    printf("input days = "); 
    scanf("%d",&days);
    printf("\nValue %d > %d is %d\n",days,quarantine,days>quarantine);
}