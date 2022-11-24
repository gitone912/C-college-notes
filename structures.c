#include <stdio.h>
#include <string.h>

int main(){

    struct std
    {
        char name[50];
        int roll;
        float decimal;
    };
    struct std s1={"frozen",23,34.5};
    printf("%s",s1.name);
    
}