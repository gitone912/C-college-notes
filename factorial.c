#include <stdio.h>

int facto(int n){
    int a;
    a=1;
    for (int i = 1; i <= n; i++)
    {
        a=a*i;
    }
    
    return a;
}

int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("factorial is %d",facto(n));
}