/*

Print patterns with reading rowas and coloumns

*/

#include<stdio.h>
main() {

   int r,c,sn,ri,ci;

   printf("Enter the number of rows:");
   scanf("%d", &r);

   printf("Enter the number of coloumns:");
   scanf("%d", &c);

   ri = 1;
   ci = 0; 
   sn = 1;

   while ( ri <= r) {

      printf("%3d",sn);

      sn = sn+1;
      ci = ci+1;

      if( ci % c == 0) {
         printf("\n");
         ri = ri+1;
      }

   }

   printf ("\n");

} 
