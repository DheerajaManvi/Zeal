/*

compare two strings using poiters.

*/

#include<stdio.h>

main() {

   char ch[100],ch1[100],*c,*c1 ;
   int cl,chl,i,p ;

   c = ch ;
   c1 = ch1 ;
   cl = 0 ;
   chl = 0 ;

   printf("\nEnter String 1 : ") ;
   scanf("%s",c) ;

   printf("\nEnter String 2 : ") ;
   scanf("%s",c1) ;

   i = 0 ;

   while( *(c + i) != '\0' ) {

      cl = cl + 1 ;
      i++ ;
   }  

   i = 0 ;
   while( *(c1 + i) != '\0' ) {

      chl = chl + 1 ; 
      i++ ;
   } 

   if( cl != chl ) {

      printf("\nThe Strings are not similar.") ; 

   } else { 

      p = 1 ;
  
      for( i = 0 ; i < cl ; i++ ) {

         if( *(c + i) != *(c1 + i) ) {

            p = 0 ;
            break ;
         } 
      }

      printf("\nThe strings are") ; 

      if( p == 0 ) { printf (" not"); }

      printf (" similar") ;

   }
  
   printf("\n\n") ;

}
