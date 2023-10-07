#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int length;

   do
   {
    length = get_int("Length: ");
   }
   while
   (length < 1);

    int doubled[length];
      doubled[0] = 1;
      printf("%i\n", doubled[0]);

    for(int i = 1; i < length; i++)
    {
        doubled[i] = 2 * doubled[ i - 1 ];
        printf("%i\n", doubled[i]);
    }

}