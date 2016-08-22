import java.io.* ;
import java.util.*;

/*

Method: getSumFromNumbersInFile:
Method: getSumFromDecimalsInFile:
Method: getReverseOfNumbersInFile:
       

*/

class TestInputStreamLogic {


   public static void main( String[] args) {

      //getSumFromNumbersInFile() ;
      //getSumFromDecimalsInFile() ;
      getReverseOfNumbersInFile() ;

   }

   public static void getSumFromNumbersInFile() {

      int b, tn, sum = 0 ;

      try {

         FileInputStream fis = new FileInputStream("input.txt") ;

         tn = 0 ;

         while( (b = fis.read() ) != -1 ) {

            if ( b >= '0' && b <= '9' ) {

                tn = tn * 10 + (b - '0') ;

            } else {
  
               sum = sum + tn ;
               tn = 0 ;

            }

         } 

      } catch ( FileNotFoundException fnfe ) {  

      } catch (IOException ioe ) { 

      } finally {

         System.out.println ( "Sum : " + sum ) ;

      }
   }

   public static void getSumFromDecimalsInFile() {

      String s ;
      int b,div = 1 ;  
      boolean digit = false ;
      boolean dot   = false ;
      boolean done = true ;
      double sum = 0, tn = 0 ;
      FileInputStream fis = null ;

      Scanner sc = new Scanner(System.in) ;
      System.out.println("Enter a file name : ") ;

      s = sc.nextLine() ;

     try {

         fis = new FileInputStream(s) ;

         while ( ( b = fis.read() ) != -1 ) {

            done = true ;

            if( b >= '0' && b <= '9' ) {

               done = false ;

               if( digit == true && dot == true ) { div = div * 10 ; }

               tn = tn * 10 + (b - '0') ;
               digit = true ;
            }

            if( b == '.' ) { dot = true ; done = false ; }

            if ( done == true ) {

              sum = sum + ( tn / div ) ; 
              tn = 0 ; div = 1 ;
              digit = false ;
              dot = false ;

            } 
         }
      } catch (Exception e ) {

      } finally {
         try { if ( fis != null ) { fis.close() ; } } catch ( Exception e ) { } 
         System.out.println ( "Sum(double)= " + sum ) ;
      }
   }

   public static void  getReverseOfNumbersInFile() {

      String s ;
      int b,tn = 0,n = 0 ,rem ;
      boolean digit = false ;
      boolean reverse = false ;
      
      FileInputStream fis = null ;

      Scanner sc = new Scanner(System.in) ;
      System.out.print("Enter a file name : ") ;
      s = sc.nextLine() ;

      try {

         fis = new FileInputStream(s) ; 

         while ( ( b = fis.read() ) != -1 ) {
  
            digit = false ;
            reverse = false ;

            if( b >= '0' && b <= '9' ) {
               digit = true ;
               n = (n * 10) + (b - '0') ;
            }

            while ( digit == false &&  n != 0 ) {

               rem = n % 10 ;
               tn = ( tn * 10) + rem ;
               n = n/10 ;
               reverse = true ;
            }

            if ( digit == false  ) {
               if ( reverse == true ) { System.out.print ( tn ) ; tn = 0 ; n = 0 ; } 
               System.out.print ( (char)b ) ;
            }
        }

      } catch( Exception e ) {

      } finally {

         try { if ( fis != null ) { fis.close() ; } } catch (Exception e ) { } 

      } 

   }

}
