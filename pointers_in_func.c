#include <stdio.h>
#include <string.h>

void square(int n)
{
    printf("square is %d", n * n);
}
void _square(int *n)
{
    printf("square is %d", *n * *n);
}

int main()
{
    int num = 7;
    square(num);
    printf("value num is %d", num);

    _square(&num);
    printf("value of ref num %d", num);
}