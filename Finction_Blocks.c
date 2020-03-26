#include <stdio.h>
#include <cs50.h>

int blocks(void)
{
  int n;
  do
  {
    n=get_int("width: ");
  }
  while(n < 1);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("#");
    }
  printf("\n");
  }
  return n;
}
int main (void)
{
  blocks();
}
