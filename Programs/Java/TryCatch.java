

class TryCatch {

   public static void main( String[] args ) {

      try {

         int a = 0 ;

         int i = a / 0 ;
      }

      catch ( ArithmeticException ae ) { 
          System.exit(0) ;
          //  return ;
     
      }

      finally { System.out.println( "Final" ) ;}
      System.out.println("Bayata") ;

   }

}
