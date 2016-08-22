import java.util.* ;

class Testz {

   public static void main ( String[] args ) {

      HashMap[] hm = new HashMap[5] ;

      hm[0] = new HashMap<Integer,Integer>() ;
      hm[1] = new HashMap<String,String>() ;
      hm[2] = new HashMap<String,Object>() ;
      hm[3] = new HashMap<Integer,String>() ;
      hm[4] = new HashMap<Object,Integer>() ;

      hm[0].put(111,222) ;
      hm[1].put("This","String");
      hm[2].put("String","obj") ;
      hm[3].put(1,"String") ;
      hm[4].put("obj",2) ;

      for( int i = 0 ; i < 5 ; i++ ) {

         System.out.println(hm[i]) ;

      }  

      System.out.println( hm[0].get(111) ) ;
      System.out.println( hm[1].get("This") ) ;
      System.out.println( hm[2].get("String") ) ;
      System.out.println( hm[3].get(1) ) ;
      System.out.println( hm[4].get("obj") ) ;

   }




}
