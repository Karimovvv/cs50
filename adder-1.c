#include <cs50.h>
#include <stdio.h>

int two_adder_ints(int a ,int b);

int main (void)
{
 int x = get_int("Number first: ");
 int y = get_int("Number second: ");
 int z = two_adder_ints(x, y);

 printf("The result of %i and %i is %i!\n" , x,y,z);
}

int two_adder_ints(int a, int b)
{
    int result = a + b;
    return result;
}

