 #include<stdio.h>

int main(){

    float sum = 0.0, val = 8.0;
    int count = 7;
    for (; count <= 8 ; count++) {
        sum = sum + val;
        printf("sum is : %.2f\n", sum);
    }

    sum = sum /(count + 1);
    printf("Sum now is : %.2f\n", sum);

}