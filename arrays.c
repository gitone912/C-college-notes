#include <stdio.h>
int marks[4];
int marks_enter()
{
    int n;
        int marks[7];
    for (int i = 0; i < 7; i++)
    {
        printf("enter the marks ");
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        printf(" the marks %d \n",marks[i]);
    }
}

int main()
{   int n;
    marks_enter();
}