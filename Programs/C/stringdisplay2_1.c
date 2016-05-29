/*

Program to print a string with word as a delimiter.

*/

#include<stdio.h>

main() {

   char p[100],s[100],r[100],*a,*b,*c,*b1 ;
   int cnt ;

   char tt[100], *rtt ;

   a = p ;
   b = s ;
   c = r ;
   rtt = tt ;

   printf("Enter any string : ") ;
   scanf("%[^\n]s",a) ;

   printf("Enter the delimiter : ") ;
   scanf("%s",b) ;

   while( *a != '\0' ) {

      b1 = b ;
      rtt = tt ;
      *rtt = '\0' ;

      while( *a == *b1 && *b1 != '\0' ) {

          *rtt++ = *a ;
          *rtt = '\0' ;
           a++ ;
           b1++ ; 
           
     }

     if( *b1 == '\0' ) {

          c = c  - cnt ;
         *c = '\0' ;
          c = r ; 

          printf("\nWord : %s ",c) ; 
     }

    if( *a != *b1 ) {

       *c = *a ;
        printf ("%c", *c ) ;
        c++ ;

    }

    a++ ;
   }
  
   printf("\n\n") ; 
} 
