/* 

Print numbers in the following pattern

1
22
333
4444
55555
666666
7777777
88888888
999999999

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











         

      
