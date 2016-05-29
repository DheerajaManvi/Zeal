/*

Program to delete a character at the given
position.

*/

#include<stdio.h>
#include<stdlib.h>

main() {

   char *p,*p1,*d, *d1, c;
   int cntr,n ;

   p = ( char * ) malloc ( sizeof (char) * 100 ) ;
   d = ( char * ) malloc ( sizeof (char) * 100 ) ;

   printf("Enter any string : ") ;
   scanf("%[^\n]s",p) ;

   printf("Enter a position to be deleted : ") ;
   scanf("%d" , &n) ;

   cntr = 0 ;
   p1 = p ;
   d1 = d ;

   while( *p1 != '\0' ) {


      if( cntr == n ) {
           p1++ ; 
       }

      *d1 = *p1 ;

     cntr++ ;
     p1++ ;
     d1++ ;
   }

   printf("\nSource   string : %s " , p) ;
   printf("\nModified string : %s ", d) ;
   printf("\n\n") ;
}

