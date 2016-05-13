/*

Print ASCII value for the given
string.

*/

#include<stdio.h>
main() {

   char c[100];
   int i;

   printf("Enter any string: ");
   scanf("%s", c);

   for( i = 0 ; c[i] != 0 ; i++) { 
      printf("\n%c -> %d", c[i], c[i] ) ;
   }

   printf ("\n");

}
