/* 

To print the length of a string.

*/

#include<stdio.h>
main() {

   char s[100];
   int i;

   printf("Enter any string: ");
   scanf("%s",s);

   for(i = 0; s[i] != '\0'; i++) ;

   printf("Length of the given string : %d \n",i);
}








