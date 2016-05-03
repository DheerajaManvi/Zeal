/*

Print pyramid.

*/

#include<stdio.h>
main() {

   int r,ri,c,ci,ls,lsi,ns,nsi;

   printf("Enter the no of rows:");
   scanf("%d",&r);

   ri = 1;
   ci = 1;
   ls = 60;
   ns = 1 ;

   while( ri <= r) {
      
      lsi=1;

      while( lsi <= ls) {

         printf(" ");
         lsi = lsi + 1;
      }

      nsi = 1; 

      while ( nsi <= ns) {

         printf("*");
         nsi = nsi + 1;

      }

   printf("\n");

   ri = ri + 1;
   ls = ls - 1;
   ns = ns + 2;

   }

   printf("\n");

}

   

	 
