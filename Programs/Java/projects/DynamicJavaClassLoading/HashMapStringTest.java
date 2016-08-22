import java.util.* ;

class HashMapStringTest {

   public static void main( String[] args ) {

      Scanner sc = new Scanner(System.in) ;
      String key = null ;
      String value = null;

      Map<String,String> ms = new HashMap<String,String>() ;

      while ( true ) {

          System.out.print ("Enter Key: " ) ;
          key = sc.nextLine() ;
  
          if ( key.equals("done") ) { break; }

          System.out.print ("Enter value for '" + key + "': " ) ;
          value = sc.nextLine() ;

          ms.put ( key, value ) ;

      }

      Set<String> ss = ms.keySet() ;
      Iterator<String> itr = ss.iterator() ;

      while ( itr.hasNext() ) {

         key = itr.next() ;
         value = ms.get ( key ) ;

         System.out.println ( key + " => " + value ) ;

      }

      System.out.println() ;

   } 
}
