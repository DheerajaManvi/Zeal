/*

Program for changing upper case to lower case and 
vice versa.

*/

#include<stdio.h>
#include<stdlib.h>

main() {

   char ch[100],*c ;
   int i ;


   c = ch ;

   printf("\nEnter any string : ") ;
   scanf("%s", c) ;

   i = 0 ;

   while( *(c + i) != '\0' ) {

       if( (*(c + i) >= 'a')  && (*(c + i) <= 'z') ) {

          *(c + i) = *(c + i) - 32 ;

       } else if ( (*(c + i) >= 'A') && (*(c + i) <= 'Z') ) {
   
          *(c + i)  = *(c + i) + 32 ;
       }
     
       i++ ;
   }

   printf("\n%s", c) ;

   printf("\n\n") ;
} 
