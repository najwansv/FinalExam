#include<stdio.h>
int CubeVolume(int Sidelength){
    int Volume;
    Volume = Sidelength * Sidelength * Sidelength;
    return Volume;
}
int main(){
    int sidelength;
    printf("Insert side length of cube: ");
    scanf("%i", &sidelength);

    int res = CubeVolume(sidelength);
    printf("%i", res);

}