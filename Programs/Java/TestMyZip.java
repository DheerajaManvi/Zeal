import java.io.* ;

class TestMyZip {

   public static void main ( String[] args ) {

      MyZip mzip = new MyZip ( "test.zip", "/tmp/testzip" ) ;
      int opt ;

      while ( true ) {
      try {
         opt = mzip.readOption() ;

         if ( opt == -1 ) { break ; }

         if ( ! mzip.extract ( opt ) ) {
            System.out.println ( "Unable to process file at : " + opt ) ;
         }
      } catch ( FileNotFoundException fnfe ) {
      } catch ( IOException ioe ) {
      }
      }

   }

}
