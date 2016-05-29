/*

Program to print index and it's address.

*/ 

#include<stdio.h>
#include<stdlib.h>

main() {

   int *i,n ;
   char *c ;

   i = ( int * ) calloc ( sizeof (int) , 100 ) ;
   c = ( char * ) calloc ( sizeof (char) , 100 ) ;

   while( n <= 10 ) {
   
          printf("\nInt Index %d --> Int Address %p",n,i) ;
          i++ ;
          n++ ;
   }

   printf("\n\n") ;

   n = 0 ; 

   while( n <= 10 ) {

      printf("\nChar Index %d --> Char Address %p",n,c) ;
      c++ ;
      n++ ;
   }

   printf("\n\n") ;

}
