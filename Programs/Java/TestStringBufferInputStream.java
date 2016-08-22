
import java.io.* ;

class TestStringBufferInputStream {

    public static void main ( String[] args ) {

       String s = "This is Hp written by JKRowling" ;
       int b ;

       StringBufferInputStream sbis = new StringBufferInputStream( s ) ;

       while ( ( b = sbis.read() ) != -1 ) {
           System.out.print ((char)b) ; 
       }  

       System.out.println() ; 
        
    }


} 
