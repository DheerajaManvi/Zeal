/*


*/

#include<stdio.h>

int reverse (int) ;

int main() {

   int n ;
   int r ;

   printf ("\nEnter a Number: " ) ;
   scanf  ("%d", &n ) ;

   r = reverse( n ) ;

   printf ("\nReverse of the given Number(%d): %d", n, r ) ;

   printf ("\n\n");

}


int reverse ( int num ) {

    int result = 0 ;

    while ( num != 0 ) {
       result = result * 10 + num % 10 ;
       num = num / 10 ;
    }

    return ( result ) ;

}
