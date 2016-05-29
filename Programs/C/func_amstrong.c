/*

Amstrong using functions.

*/

#include<stdio.h>
main() {

   int a,retval ;

   printf( "Enter any number : " ) ;
   scanf( "%d" , &a ) ;

   retval = checkAms(a) ;

   if ( retval == 1 ) {
      printf("The given number is Armstrong number: %d", a) ;
   } else {

      printf("The given number is not Armstrong number: %d", a) ;

   }


   printf ("\n\n");
}


int checkAms(int n) {

   int r,sum ;
   int tn = n ;

   sum = 0 ;
   r = 0 ;

   while( n != 0 ) { 

      r = n % 10 ;
      sum = sum + ( r * r * r ) ;
      n = n / 10 ;
   }

   if ( sum == tn ) { return (1) ; }

   return ( 0 ) ;
}

