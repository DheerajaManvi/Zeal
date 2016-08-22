/*


*/

#include<stdio.h>

main() {

   char s[100] ;
   int i,done,opcode,num1,num2, result;
   int first,eval, gotopcode, prevOpcode ;
   int onlyonce = 1, gotnext = 0 ;

   eval = -1 ;
   gotopcode = 0 ; 
   opcode = 0 ;
   i = 0 ;
   first = 0 ;

   num1 = 0 ;
   num2 = 0 ;

   printf("\nEnter any string : ") ;
   scanf("%[^\n]s",s) ;

   while( s[i] != '\0' ) {

      if ( s[i] >= '0' && s[i] <= '9' ) {
         num2 = num2 * 10 + (s[i] - '0') ; 
      }


      switch ( s[i] ) {

         case '+':  opcode = 1 ; gotopcode++ ; gotnext = 1 ; break ;
         case '-':  opcode = 2 ; gotopcode++ ; gotnext = 1 ; break ;
         case '*':  opcode = 3 ; gotopcode++ ; gotnext = 1 ; break ;
         case '/':  opcode = 4 ; gotopcode++ ; gotnext = 1 ; break ;
         case '%':  opcode = 5 ; gotopcode++ ; gotnext = 1 ; break ;

      }
 

      if ( gotopcode == 1 && onlyonce == 1  ) {
         result = num2 ;
         num2 = 0 ;
         prevOpcode = opcode ;
         onlyonce = 0 ;
      }


      if  ( gotopcode > 1 && gotnext ) {

         switch ( prevOpcode ) {

            case 1: result = result + num2 ;
                      break;
            case 2: result = result - num2 ;
                      break;
            case 3: result = result * num2 ;
                      break;
            case 4: result = result / num2 ;
                      break;
            case 5: result = result % num2 ;

         }

         prevOpcode = opcode ;
         num2 = 0 ;
         gotnext = 0 ;

      }

      i++ ;

   }

     switch ( prevOpcode ) {

      case 1: result = result + num2 ;
              break;
      case 2: result = result - num2 ;
              break;
      case 3: result = result * num2 ;
              break;
      case 4: result = result / num2 ;
              break;
      case 5: result = result % num2 ;

   } 

   printf ("\nExpr Eval : %s = %d", s, result ) ; 
   printf("\n\n") ;

}


