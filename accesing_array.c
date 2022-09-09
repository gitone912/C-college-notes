#include <stdio.h>

int main()
{
    int age = 34;
    int *ptr = &age;

    int _age = 56;
    int *_ptr = &_age;

    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    ptr = ptr - _ptr;
    printf("%u\n", ptr);
    ptr = &_age;
    printf("%d\n", ptr == _ptr);
    return 0;
}