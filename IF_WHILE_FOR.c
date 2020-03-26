#include <stdio.h>
#include <cs50.h>

int main (void)
{
  int num1 = get_int("enter a valid no : ");
  int num2 = get_int("enter a valid no : ");
  if (num1 > num2)
    {
      printf("num1 is bigger\n");
    }
  else if (num1 < num2)
    {
      printf("num2 is bigger\n");
    }
    else
    {
      printf("num1 or num2 are equal \n");
    }
}
