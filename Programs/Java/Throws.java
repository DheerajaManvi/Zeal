


class Throws {


   public static void main ( String[] args ) {

      try {
         throw new ArithmeticException("My arthemic exception.") ; 
      } catch (ArithmeticException ae) {
           System.out.println( ae ) ;
      }
   }
} 
