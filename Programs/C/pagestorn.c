/*

Finding the pages torn.

*/

#include<stdio.h>
main() {

   int i, t_pages,pgsum,pgstrt,sum,temp ;

   pgstrt = 1 ;

   printf("Enter the number of pages : ") ;
   scanf("%d",&t_pages) ;

   printf("Enter the torn pages sum : ") ;
   scanf("%d",&pgsum) ;

   while(pgstrt < t_pages) {

      sum = 0 ;
      temp = pgstrt ;
 
      while( sum < pgsum ) {

         sum = sum + temp ;
         temp++ ;
      }

      temp--;

      if( sum == pgsum ) {

         printf("\nPage start : %d",pgstrt) ;
         printf("\nPage end : %d",temp) ;

         sum = 0 ;
         for ( i = pgstrt ; i <= temp; i++ ) { sum += i ; }
         printf ("\nThe Sum of Pages torn : %d", sum ) ;
      }

      pgstrt++ ;
   }

   printf("\n\n") ;
}
