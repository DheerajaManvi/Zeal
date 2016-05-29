/*  

Program for converting string array into integer array. 

*/

#include<stdio.h>

main() {

   char ch[100];
   int   s[100], len, i ;

   printf("Enter any String: " ) ;
   scanf("%s" , ch ) ; 

   for( i = 0 ; ch[i] != '\0' ; i++ ) { 

       s[i] = ch[i] ;  

       printf("%d ",s[i]) ;

   }

  printf("\n\n");
   
}
