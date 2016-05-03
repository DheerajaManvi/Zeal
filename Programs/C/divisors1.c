/*

Print the number of divisors and * in the place 
of divisors.

*/

#include<stdio.h>
main() {

   int i,n,num,d,s;
   
   printf("Enter any num:");
   scanf("%d",&n);

   i=1;

   while(i<=n) {

      d=1;
      num=0;

      printf("\n%d -> ",i);

      while(d<=i) {

         if (i%d==0) {
            num=num+1;
         }

         d=d+1;
      }

      printf ("%d =>", num ) ;

      s=1;
        
      while(s<=num) {
         printf("* ");
         s=s+1;
      }

      i=i+1;
   }

}
