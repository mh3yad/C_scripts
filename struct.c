#include <stdio.h>
#include <string.h>

struct human {
   char  name[50];
   char  job[50];
   int  age;
};

int main( ) {

   struct human ayad;        /* Declare ayad  of type human */
   struct human hero;        /* Declare hero of type human */

   /* ayad 1 specification */
   strcpy( ayad.name, "mhayad");
   strcpy( ayad.job, "pentester");
   ayad.age = 18;

   /* hero specification */
   strcpy( hero.name, "heroooo");
   strcpy( hero.job, "Cyber-Security_Researcher");
   hero.age = 20;

   /* print ayad info */
   printf( "first human name is  : %s\n", ayad.name);
   printf( "first human job is   :  %s\n", ayad.job);
   printf( "first human age is   :  %d\n", ayad.age);

   /* print hero info */
   printf( "second human name is : %s\n", hero.name);
   printf( "second human job is  :  %s\n", hero.job);
   printf( "second human age is  :  %d\n", hero.age);

   return 0;
}
