/*

printing amstrong number

*/

#include<stdio.h>

void main() {

    int t,n,rem,s=0;

    printf("Enter any number: ");
    scanf("%d", &n);

    t=n;
  
    while( t!= 0 ) {

        rem = t % 10 ;
        s = s + ( rem * rem * rem);
        t=t/10;
      }

   if(s==n) {
      printf("Amstrong\n"); 
   } else {
      printf("Not an amstrong\n");
   }

}







