/*

Program to remove spaces.

*/

#include<stdio.h>
#include<stdlib.h>

main() {

   char *c,*c1, *d1, *d ;

   c =  ( char * ) calloc ( sizeof (char) , 100 ) ;
   d =  ( char * ) calloc ( sizeof (char) , 100 ) ;

   c1 = c ;
   d1 = d ;

   printf("Enter any string : ") ;
   scanf("%[^\n]s",c) ;


   while( *c1 != '\0') {

      if ( *c1 == ' ' ) {

         while ( *c1 == ' ' && c1++ ) ;
         
         *d1++ = ' ' ;

      }

      *d1++ = *c1++ ;

   }

   printf("\nNew string : %s", d ) ;
   printf("\n\n") ;
}
