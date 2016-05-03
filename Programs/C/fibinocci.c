/*

Fibinocci series.

o 1 1 2 3 5 8 12 ....

*/

#include<stdio.h>
main()  {

   int a,b,c,n,i;

   printf("Enter any numberi:");
   scanf("%d",&n);

   a = 0;
   b = 1;
   i = 0;

   while ( i <= n) {

      if ( i <= 1) {

          c = i;
       }

      else {

         c = a + b;
         a = b ; 
         b = c ;
      }

   printf("%d," ,c);
   i = i + 1;
 
   }
   
   printf("\n");

}
