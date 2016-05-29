/*

Printing string reverse using pointers.

*/

#include<stdio.h>

main() {

   char ch[100],*c,temp ;
   int i,l ;

   c = ch ;
   l = 0 ; 
   i = 0 ;

   printf("Enter any string : ") ;
   scanf("%s" , c) ;

   while( *(c+l) != '\0' ) {

      l = l + 1 ;
      
   }
  
   i = 0 ; 
   while( i < l/2 ) {

     temp = *(c + i) ;
     *(c + i) = *(c + l-1-i) ;
     *(c + l-1-i) = temp ;
    
      i++ ;
   }

   printf("The reverse string is : %s",c) ;
   
   printf("\n\n") ;
}
