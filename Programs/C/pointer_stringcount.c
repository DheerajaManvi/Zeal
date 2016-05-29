/*

String count using pointers.

*/

#include<stdio.h>

main() {

   char ch[100],*c ;
   int l,i ;

   c = ch ;
   l = 0 ;
   i = 0 ;

   printf("\nEnter any string : " ) ;
   scanf("%s",c) ;

   while( *(c + i) != '\0' ) {

      l = l + 1 ;
      i++;
   }

   printf("The length of the string : %d" , l ) ;

   printf("\n\n") ;
}

