import java.io.* ;
import java.util.* ;

class TestFileInputStream {

   public static void main ( String[] args ) {

      Scanner sc = new Scanner ( System.in ) ;
      System.out.print ("Enter a File Name: " ) ;
      String fname = sc.nextLine() ;

      int line_count = 0 ; 
      int word_count = 0 ;
      int letter_count = 0 ;
      int alphabet_count = 0 ;

      FileInputStream  fis = null ;
      FileOutputStream fos = null ;
 
      int b ;

      try {

         fis = new FileInputStream( fname ) ;
         fos = new FileOutputStream ( fname + ".duplicate" ) ;

         while( ( b = fis.read() ) != -1 ) {

            letter_count++ ;
            //System.out.print((char)b) ;

            if( b == '\n' ) { line_count++ ; }
            if ( b == ' ' || b == '\n' ) { 
               word_count++ ; 
               System.out.println ( ) ;
            }
            if ( b != ' ' && b != '\n' ) {  
               System.out.print( (char)b ) ;
            }
            if ( b >= 'a' && b <= 'z' || b >= 'A' && b <= 'Z' ) { alphabet_count++ ; }
            fos.write ( b ) ;
         }

      } catch ( FileNotFoundException fnfe ) {
         System.out.println ( fnfe ) ;
      } catch ( IOException ioe ) {
         System.out.println ( ioe ) ;
      } catch ( Exception e ) {
         System.out.println ( e ) ;
      } finally {

         try {
            if ( fis != null ) { fis.close() ; }
            if ( fos != null ) { fos.close() ; }
         } catch ( Exception e ) { } 
      }

      System.out.println("\nNumber of lines     : " +line_count ) ;
      System.out.println("Number of words       : " +word_count ) ;
      System.out.println("Number of letters     : " +letter_count ) ;
      System.out.println("Number of alphabets   : " +alphabet_count ) ;

   }
}
