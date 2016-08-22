import java.util.* ;
import java.io.*   ;

class PropertiesTest {

  public static void main( String[] args ) throws Exception  {

     Properties p = new Properties() ;
     p.load(new BufferedInputStream( new FileInputStream ( "DheeruProperties.txt" ) ) ) ;
     System.out.println( p.getProperty("Name1") ) ;
     p.list(System.out) ;

     Iterator it =  p.stringPropertyNames().iterator() ;
     while ( it.hasNext() ) {

        String s = (String) it.next() ;
        System.out.println ( s + " => " + p.getProperty ( s ) ) ;

     }
  }
}
