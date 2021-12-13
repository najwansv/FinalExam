#include<stdio.h>

int main(){
    float average, sum;
    int x, i, y;
    float large, small;

    float rainfall[12]; // A

    for(i=0; i<12; i++){ // B untill lane 13
        printf("Month %i : ", i+1);
        scanf("%f",&rainfall[i]);
    }

    for(x=0; x<12; x++){
        printf("Years 2020 Month %i : ", x+1);
	    printf("%.2f \n", rainfall[x]) ;
        sum += rainfall[x];        
    }

    average = sum / 12; // C until lane 22
    printf("Average of this year = %.2f\n", average);

    large=small=rainfall[0]; // D until lane 39

    for(y=0;y<12;y++)
    {
        if(rainfall[y]>large){
        large = rainfall[y];
        }
        
        if(rainfall[y]<small){
        small = rainfall[y];
        }
    }

    printf("The largest element is %.2f",large);
    printf("\nThe smallest element is %.2f",small);
}
