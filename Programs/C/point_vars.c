/*


*/

#include <stdio.h>

int main() {

   int n ;
   float f;
   double d;
   char c ;
   int *pn ;
   float *pf ;

   printf ("\nAddress: n= 0x%p, f=0x%p, d=0x%p, c=0x%p", &n, &f, &d, &c ) ;

   f = 11 ;
   printf ("\nAddress: f = 0x%p, val f= %d", &f , f ) ;

   f = 99 ;
   printf ("\nAddress: f= 0x%p, Val f=%f", &f, f  ) ;

   n = 10 ;
   printf ("\nAddress: n= 0x%p, Val n=%d", &n, n  ) ;

   *&n = 22 ;
   printf ("\nAddress: n= 0x%p, Val n=%d", &n, n  ) ;

   pn = &n ;
   *(pn) = 33;

   printf ("\nAddress: n= 0x%p, Val n=%d", &n, n  ) ;
   printf ("\nAddress: n= 0x%p, f=0x%p, d=0x%p, c=0x%p", &n, &f, &d, &c ) ;

   printf ("\n\n") ;

}
