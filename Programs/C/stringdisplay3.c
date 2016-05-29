#include<stdio.h>

main() {

   char ch[100],ch1[100],ch2[100],*p,*q,*r,*q1,*p1 ;

   p = ch ;
   q = ch1 ;
   r = ch2 ;

   printf("Enter any string : ") ;
   scanf("%[^\n]s",p) ;

   printf("Enter the delimiter : ") ;
   scanf("%s", q ) ;

   while( *p != '\0') {

   q1 = q ;
   p1 = p ; 

   while( *p1 == *q1 && p1++ && q1++ ) ;

   if( *q1 != '\0' ) {

      *r = *p ;
       r++ ;
   } 

   else if( *q1 == '\0' ) {

      *r = '\0' ;
       p = p1 - 1 ;
       r = ch2 ;

       printf("\nWord : %s",r) ;
   } 

     p++ ;
   }

   *r = '\0' ;
    r = ch2 ;

    printf("\nWord : %s",r) ;

    printf("\n\n") ;

}
