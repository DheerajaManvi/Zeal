/*

*/

import java.util.* ;

class MyAddressHash  {

   public static void main( String[] args ) {  

      String key   = null ;
      Scanner sc = new Scanner(System.in) ;
      MyAddress madd = null ;
      Map<String, MyAddress> ma = new HashMap<String,MyAddress>() ;
      //Map ma = new HashMap<String,MyAddress>() ;

      while ( true ) {

         System.out.print ("Enter Key: " ) ;
         key = sc.nextLine() ;
         if( key.equals("done") ) { break ; }  

         madd = new MyAddress() ;

         System.out.print ("Name: " ) ;
         madd.setName ( sc.nextLine() );

         System.out.print ("Address1: " ) ;
         madd.setAddressOne ( sc.nextLine() );
         
         System.out.print ("Address2: " ) ;
         madd.setAddressTwo ( sc.nextLine() );

         System.out.print ("Place: " ) ;
         madd.setPlace ( sc.nextLine() );

         System.out.print ("State: " ) ;
         madd.setState ( sc.nextLine() );

         System.out.print ("Country: " ) ;
         madd.setCountry ( sc.nextLine() );

         System.out.print ("Phone: " ) ;
         madd.setPhone ( sc.nextLine() );

         System.out.print ("PIN: " ) ;
         madd.setPin ( sc.nextInt() );

         ma.put(key,madd) ;   
         sc.nextLine() ;
      } 

      Set<String> ss = ma.keySet() ;
      Iterator<String> itr = ss.iterator() ;

      while(itr.hasNext() ) {

         key = itr.next() ;
         madd  = ma.get(key) ;
         System.out.println ( key + "\n" + madd ) ;

      }

   }
}
