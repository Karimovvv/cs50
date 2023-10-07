#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int count_letters(string letters);
int count_words(string letters);
int counter_sentences(string letters);

int main(void)
{
  string letters = get_string("Type anything: ");

  int letter = count_letters(letters);
  int words = count_words(letters);
  int sentences = counter_sentences(letters); 

  float L = (float)letter / words * 100;
  float S = (float)sentences / words * 100;

  int totalgrade = round(0.0588 * L - 0.296 * S - 15.8);


 if(totalgrade < 1 )
  {
    printf("Before Grade 1\n");
  }
  else if(totalgrade >= 16)
  {
    printf("Grade 16+\n");
  }
  else
  {
    printf("Grade %i\n", totalgrade);
  }
}



int count_letters(string letters)
{
  int n = 0;
   for(int i = 0, len = strlen(letters); i < len; i++)
   {
    if(isalpha(letters[i]))
    {
      n++;
    }
   }
  return n;

}

int count_words(string letters)
{
    int calculate = 1;
    int len = strlen(letters);
    for( int i = 0; i < len; i++)
    {
        if(letters[i] == ' ')
        {
          calculate++;
        }
    }
    return calculate;
}

int counter_sentences(string letters)
{
  int countSentences = 0;
  for(int i = 0, n = strlen(letters); i < n; i++)
  {
    if(letters[i] == '!' || letters[i] == '.' || letters[i] =='?')
    {
        countSentences++;
    }
  }
  return countSentences;
}