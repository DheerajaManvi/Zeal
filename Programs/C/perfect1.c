/*

To print perfect numbers

*/

#include<stdio.h>
main() {

   int d, r1,r2,sum=0,n,i;
   
   printf("enter the range:");
   scanf("%d %d", &r1,&r2); 

   i=r1;

   while( i<=r2 ) {

      d = 1 ; 
      sum = 0 ;

      // printf ("\n%d.", i ) ;
      while ( d < i ) {

         if (i%d==0) {
            sum=sum+d;
         }
         d=d+1;
      }

      if (sum==i) {
         printf("%d\n",i);
      }
                
      i = i + 1 ;
   }

   printf ("\n");

}




