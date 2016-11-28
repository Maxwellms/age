#include <stdio.h>

int age1;

int main( void )
{
// Receives your age
    printf("Hello, type your age: ");
    scanf(" %d", &age1);
    
// Prints your age 5 years into the future
    printf("You will be %d in 5 years", age1+5);
    return 0;
}
