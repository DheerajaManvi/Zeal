/*


*/

#include<stdio.h>

main() {

   char s[100] ;
   int i,done,opcode,num1,num2, result;

   opcode = 0 ; 
   i = 0 ;
   done = 0 ;

   num1 = 0 ;
   num2 = 0 ;

   printf("\nEnter any string : ") ;
   scanf("%[^\n]s",s) ;

   while( s[i] != '\0' ) {

      if ( s[i] >= '0' && s[i] <= '9' ) {
         num2 = num2 * 10 + (s[i] - '0') ; 
      } else {

         if ( done == 0 ) {
            num1 = num2 ;
            num2 = 0 ;
            done = 1 ;
         }

         if ( s[i] == '+' ) { opcode = 1 ; }
         if ( s[i] == '-' ) { opcode = 2 ; }
         if ( s[i] == '*' ) { opcode = 3 ; }
         if ( s[i] == '/' ) { opcode = 4 ; }
         if ( s[i] == '%' ) { opcode = 5 ; }
         
      }

      i++ ;

   }

   result = 0 ;
  
   switch ( opcode ) {

      case 1: result = num1 + num2 ;
                      break;
      case 2: result = num1 - num2 ;
                      break;
      case 3: result = num1 * num2 ;
                      break;
      case 4: result = num1 / num2 ;
                      break;
      case 5: result = num1 % num2 ;

   } 

   printf ("\nExpr Eval : %s = %d", s, result ) ; 
   printf("\n\n") ;

}


