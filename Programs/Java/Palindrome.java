/*

*/

import java.util.Scanner ;

class Palindrome {

   int n1, rn ;
   boolean palin = false ;

   public Palindrome() {

   }

   public Palindrome( int n ) {

      n1 = n ;
      palin  = checkPalindrome ( ) ;
   }

   public boolean isPalindrome() {

      return palin ;

   }

   public boolean checkPalindrome ( ) {

      return checkPalindrome ( n1 ) ;
   }


   public static boolean checkPalindrome(int n) {
   
      int temp = 0 ;
      int t = n ;

      while ( n != 0 ) {

          temp = (temp * 10) + n % 10 ;
          n = n /10 ; 
       }

       if ( temp != t ) { return False ; }

       return true ;
   }


   public static void main ( String[] args ) {

      Scanner sc = new Scanner ( System.in ) ;

      System.out.print ( "Enter a number: " ) ;
      Palindrome pal = new Palindrome(sc.nextInt()) ;
      System.out.println ( pal.isPalindrome() ) ;   

   }
}
