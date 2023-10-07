#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int n);

int main(void)
{
       int n = get_size();
       print_grid(n);

    int rows = 8;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

int get_size(void)
{
  int n;
  do
 {
    n = get_int("height: ");
 }
  while(n > 8 || n < 0);
  return n;
}

void print_grid(int n){
    for(int i = 1; i <= n; i++)
    {
         for(int l = 0; l <= i - 1; l++)
        {
            printf("#");
        }
          for(int j = 0; j < i / 2 + 1; j++)
        {
            printf(" ");
        }
     printf("\n");
    }
}
