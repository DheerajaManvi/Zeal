/*

Basic array programs.

*/

#include<stdio.h>
main() {

   int i,idx;
   int n;
   int r[100];

   printf("Enter any number:");
   scanf("%d",&n);

   i = 1; idx = 0;

   while ( i <= n) {
  
      printf("Enter %d number:",i);
      scanf("%d",&r[idx]);
      i++;
      idx++;
   } 
}
