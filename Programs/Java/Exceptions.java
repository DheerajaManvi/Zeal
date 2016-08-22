class Exceptions {

   public static void main ( String[] args ) {

      test() ;
   }

   public static void test() {

      int  n,d,i ; 

      try {

         n = 12 ;
         d = 1 ;
         i = n / d ;
      } catch(ArithmeticException ae ) {
         System.out.println( "Divide by zero: " + ae ) ; 
         System.out.println( "Divide by zero: " + ae.toString() ) ; 
         System.out.println( "Divide by zero: " + ae.getMessage() ) ; 
         ae.printStackTrace() ; 
         //ae.getCause().printStackTrace() ;
         System.out.println ( "=======================" ) ;
         Throwable th = ae ;
         th.printStackTrace() ;
      } catch( Exception e ) {
         System.out.println("Exception") ;
      } finally {
          System.out.println( "I am done for today..lets go and have sambar idli" ) ;
      }

      try {

      } catch( Exception e ) {


      } finally {

           System.out.println("Finally") ;
        }

   }
}

