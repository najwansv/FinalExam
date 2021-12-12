#include<stdio.h>

int main(){
    float sum = 0.0, val = 8.0;
    int count = 7;
    do{
        sum = sum + val;
        count++;
        printf("Sum is : %.2f\n", sum);
    } while (count <= 8);
	    sum = sum/(count + 1);
   	    printf("Sum now is : %.2f\n", sum);

}