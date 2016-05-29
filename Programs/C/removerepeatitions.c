/*

Program to print repeated characters consecutively.

*/


#include<stdio.h>
#include<stdlib.h>

main() {

   char *c,*c1, *d1, *d, t;
   int n,cntr ;

   c =  ( char * ) calloc ( sizeof (char) , 100 ) ;
   d =  ( char * ) calloc ( sizeof (char) , 100 ) ;

   c1 = c ;
   d1 = d ;

   printf("Enter any string : ") ;
   scanf("%[^\n]s",c) ;

   n = 0 ;

   while( *c1 != '\0' ) {

      cntr = 0 ;

      while ( *c1 == *(c1 + 1) && c1++) {
          cntr++ ;
      }
     
      if( cntr > n ) {
         n = cntr ;
         t = *(c1 - 1) ;
      }
   
      c1++ ;
   } 

   printf("%c is the character repeated %d times." , t,n) ;
   printf("\n\n") ;
}
