#include <stdio.h>
#include <string.h>

int main(){

    char name[] = "frozen";
    char n[10]={'f','r','o','z'};
    for (int i = 0; n[i] != '\0'; i++)
    {
        printf("%c",n[i]);
    }
    //slice
    printf("enter your string");
    char f[20];
    char k[20];
    scanf("%s",&f);
    int j=0;
    for (int i = 2; i < 9; i++,j++)
    {
        /* code */
       k[j]= f[i];
    }
    puts(k);
    
}