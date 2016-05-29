/*


Program to display all the words in the given 
string.

*/


#include<stdio.h>

main() {

   char ch[100],*p ;
   int i ;

   p = ch ;
   i = 0 ;

   printf("Enter any string : ") ;
   scanf("^\n%s",p) ;

   while( *(p + i) != '\0' ) {

      printf("\n%c",*(p + i) ) ;
      i++ ;
   }

   printf("\n\n") ;
} 
