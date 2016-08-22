/*


*/

import java.util.* ;

class HashMapTest {


   public static void main( String[] args ) {

      int[] ia = new int[5];   
      ia[0]    = 0;
      ia[1]    = 1;
      ia[2]    = 2;
      ia[3]    = 3;
      ia[4]    = 4;

      for( int i = 0 ; i< 5 ; i++) {
         System.out.println( ia[i] ) ;  
      }

      Map <Integer , Integer> ii = new HashMap<Integer,Integer>() ;
       
      ii.put(0,1) ;
      ii.put(1,4) ;
      ii.put(2,5) ;
      ii.put(99,-111) ;

      System.out.println ( ii ) ;

      Set<Integer> ss = ii.keySet() ;
      Iterator itr = ss.iterator() ;

      while ( itr.hasNext() ) {
         int k = ((Integer) itr.next()).intValue() ;
         int v = ((Integer) ii.get (k)).intValue() ;
         
         System.out.println ( k + " => " + v );

      }

   }




}
