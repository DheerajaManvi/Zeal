/*

Program to insert a text at a point.

*/

#include<stdio.h>
#include<stdlib.h>

main() {

   char *p,*p1,*d, *d1, c,del ;
   int cntr,n ;

   p = ( char * ) malloc ( sizeof (char) * 100 ) ;
   d = ( char * ) malloc ( sizeof (char) * 100 ) ;

   printf("\nEnter any string : ") ;
   scanf("%[^\n]s",p) ;

   printf("Enter a position to be replaced : ") ;
   scanf("%d" , &n) ;

   scanf ("%c", &del ) ;

   fflush(stdin) ;

   printf("Enter any character : ") ;
   scanf("%c" , &c ) ;

   cntr = 0 ; 
   p1 = p ;
   d1 = d ;

   while( *p1 != '\0' ) { 

      *d1 = *p1 ;

      if( cntr == n ) {
          *d1++ = c ;
           *d1 = *p1 ;
       }

     cntr++ ;
     p1++ ;
     d1++ ;
   }

   printf("\nSource string : %s " , p) ;
   printf("\nNew string : %s ", d) ;
   printf("\n\n") ; 
} 
