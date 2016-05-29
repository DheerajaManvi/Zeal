/*

*/

#include<stdio.h>

int readVal ( int *pn ) {

    printf ("\nAddress in func: %p", pn ) ;   
   *pn = 1111 ;

   return ( 2222 ) ;
}

void change2 ( int *p1, float *p2  ) {

   printf ("\n\nFunc2: n=%d, f=%.2f", *p1, *p2  ) ;
   *p1 = 33 ;
   *p2 = 44.44 ;
   printf ("\n\nFunc2: n=%d, f=%.2f", *p1, *p2  ) ;

}

void change1 ( int n, float f ) {

   printf ("\nFunc1: n=%d, f=%.2f", n, f ) ;
   n = 33 ;
   f = 44.44 ;
   printf ("\nFunc1: n=%d, f=%.2f", n, f ) ;

}


int main() {

   int n ;
   float f ;

   n = 20 ;
   f = 99.99 ;
   printf ("\nn=%d, f=%.2f", n, f ) ;

   change1 ( n, f ) ;

   printf ("\n1++n=%d, f=%.2f", n, f ) ;

   change2 ( &n, &f ) ;

   printf ("\n2++n=%d, f=%.2f", n, f ) ;

   readVal( &n ) ;
   printf ("\nAddress= %p, RetVal = %d, %d", &n, readVal (&n), n ) ;

   printf ("\n\n");
   
}



