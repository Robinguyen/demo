#include <stdio.h>
#define size 4
void add(int *pr, int inum, int ia);
int main(){
    int array[]=  {0,2,3,4};
    int i, ix=10;
    add(array, size, ix);
    for(i=0; i<size; i++)
        printf("%d ", *(array+i));

    
    return 0;

}

void add(int *pr, int inum, int ia){
    int j;
    for(j=0; j<inum; j++){
        *(pr) = *(pr++) + ia;
    }
}