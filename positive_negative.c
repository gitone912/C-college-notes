#include <stdio.h>

int main(){
    int i=1,n;
    while (i!=0)
    {   
        printf("enter any number or enter 0 to exit ");
        scanf("%d",&n);
        if (n>0)
        {
            printf("\n %d is positive \n",n);
        }
        else if (n<0)
        {
            printf("\n %d is negative \n",n);
        }
        else if (n==0)
        {
            i=0;
        }
    }
    
}