#include <stdio.h>

void print_hello(){
    printf("hello mfs ");
}
void square_of_number(){
    int a;
    printf("enter the number you want to square : ");
    scanf("%d",&a);
    printf("square of entered number is %d",a*a);
}
int main(){
    print_hello();
    square_of_number();
}