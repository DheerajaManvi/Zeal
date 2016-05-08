/* 

Print numbers in the following pattern

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9

*/

#include<stdio.h>
main() {

   int i,ci,s,si;
      i = 1;

   while (i <= 9) {

      ci = 1;

      while (ci <= i) {

         printf("%d",i);
         ci++;
      }
         printf("\n");
         i++;
   }
}











         

      
