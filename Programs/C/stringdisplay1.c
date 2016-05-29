/*

Program to display a string separated by a given
character.

*/

#include<stdio.h>

main() {

   char ch[100],c[100],*p,*q,i, del ;

   p = ch ;
   q = c ;


   printf("Enter any string : ") ;
   scanf("%[^\n]s", p) ;

   scanf ("%c", &del ) ;

   fflush(stdin) ;

   printf("Enter any character : ") ;
   scanf("%c" , &i ) ;


   while( *p != '\0' ) {

      if( *p != i ) {

         *q = *p ;
          q++ ;
         *q = '\0' ;
      }

      if( *p == i ) {
     
         *q = '\0' ;
          q = c ; 

          printf("\nWord = %s", q) ;
      }

    p++ ;

   }


   printf("\nWord = %s",c) ; 
   
   printf("\n\n") ;

} 

