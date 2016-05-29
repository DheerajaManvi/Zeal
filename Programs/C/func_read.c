/*

Reading in functions

*/

#include <stdio.h>

int readInt(char prompt[]) {

   int rn ;
   printf("\n%s",prompt) ;
   scanf("%d",&rn ) ;
   return(rn);
}


float readFloat(char prompt[]) {

   float f ;
   printf("\n%s",prompt);
   scanf("%f",&f);
   return(f);
}

void readString(char prompt[] ,char dh[]) {
   printf("\n%s",prompt);
   scanf("%s",dh) ;
} 

/* 
char[] readString(char prompt[], ) {
   char ch[100] ;
   printf("\n%s",prompt);
   scanf("%s",ch) ;
   return(ch);
} 
*/

int main() {

   int n, fl ;
   char c[100] ;

   n = readInt("Enter an Ineteger Number: " ) ;
   printf ("Entered Number is : %d", n );

   printf ("Entered Number is :%.4f", readFloat("Enter a float Number: " ) ) ; 

   readString("Enter a string : ",c);
   printf("Entered string is : %s", c); 

   printf ("\n\n");
}

