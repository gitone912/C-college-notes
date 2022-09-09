#include <stdio.h>

void swap_values(int a , int b){
int c = b;
a=b;
b=9;
}

void swap_references(int* a, int* b){
int c = *a;
*a=*b;
*b=c;
}
int main(){

    int x= 5;
    int y= 8;
    swap_references(&x,&y);
    printf("values are x = %d , y = %d",x,y);
    swap_values(x,y);
    printf("values are x = %d , y = %d",x,y);
}