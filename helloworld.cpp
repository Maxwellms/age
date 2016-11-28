#include <stdio.h>

int age1;

int main( void )
{
printf("Hello, type your age: ");
    scanf(" %d", &age1);

    printf("you will be %d in 5 years", age1+5);
    return 0;
}