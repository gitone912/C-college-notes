#include <stdio.h>
// #include <conio.h>

main(){
    int a=0,n;
    printf("enter any number");
    scanf("%d",&n);
    for (int i = 0; i < n; i=i+2)
    {
        a=a+i;
        
    }
    printf("sum of all even numbers are : %d",a);
    
}