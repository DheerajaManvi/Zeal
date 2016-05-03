/*

Print the divisors and its sum

*/

#include<stdio.h>
main() {
   int n,i,d,sum;
   
   printf("Enter any number:");
   scanf("%d",&n);

   i=1;

   while(i<=n) {

      printf ("\n%d -> ", i ) ;

      sum=0,d=1;

         while(d <= i) {

            if( i%d == 0 ) {

               printf("%d,",d);
               sum=sum+d;
            }

            d=d+1;
         } 
      printf ("s=%d", sum ) ;
      i=i+1;
    }

    printf ("\n") ;
}

