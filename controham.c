#include <stdio.h>

void init(int *px, int *py);
int main(){
    int ix, iy;
    init(&ix, &iy);
    printf("x= %d \n y=%d ", ix, iy);
    return 0;
}

void init(int *px, int *py){
    *px=3;
    *py=5;
}