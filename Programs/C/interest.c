/*

To find interest and total payable for a principal loan amount

Inputs:
   Principal 
   Rate of Interest
   Duration/Time

Output:
   Principal Amount: 
   Rate Of Interest:
   Duration:
   Interest Amount:
   Total Amount:

*/

#include <stdio.h>

main() {

   float p, ri, dur ; /* Inputs: p -> principal, ri -> rate of interest, dur -> duration */
   float ia , ta ;    /* Output: ia -> interest amount, ta -> total amount */

   printf ("\n*** This program is to find the interest for a given ammount ***\n" ) ;

   printf ("\nPrincipal amount: " ) ;
   scanf  ("%f", &p ) ;

   printf ("Rate of Interest: " ) ;
   scanf  ("%f", &ri ) ;

   printf ("Duration(in Yrs): " ) ;
   scanf  ("%f", &dur ) ;

   ia = p * dur * ri / 100 ; /* Simple Interest : pnr/100 */
   ta = p + ia ;             /* Total Amount: p + ia */

   printf ("\n*******************************" ) ;
   printf ("\nPrincipal    :%.2f", p   ) ;
   printf ("\nInterest     :%.2f", ri  ) ;
   printf ("\nDuration     :%.2f", dur ) ;
   printf ("\nInt.Amount   :%.2f", ia  ) ;
   printf ("\nTotal.Amount :%.2f", ta  ) ;
   printf ("\n*******************************" ) ;
   printf ("\n" ) ;

} 

