/*


*/


#include<stdio.h>
#include<stdlib.h>

main() {

   int *p ;

   p =  ( int * ) malloc ( sizeof (int) *  1000 ) ;

   *p = 10 ;

   --(*p) ;
   printf("\n\n") ;
   printf("%d\n",*p) ;
   printf("Adress --> %d",p) ;

   --*p ;
   printf("%d\n",*p) ;
   printf("Adress --> %d",p) ;

   printf("\n\n") ;
}
