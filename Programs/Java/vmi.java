class vmi {

   public void hello() {

      System.out.println ( "Hello..." ) ;
   }

   public String toString() {
      System.out.println ( "From toString() " ) ;
      return "" ;
   }

   public static void main ( String[] a ) {

      vmi v = new vmi() ;

      v.toString() ;
      v.hello() ;

      Object o = v ;
      o.toString() ;

      //o.hello() ;
   }

}


class vmiA extends vmi {

   public String toString() {
      System.out.println ( "From toString()...from vmiA " ) ;
      return "" ;
   }

   public static void main ( String[] args ) {

      vmiA va = new vmiA() ;
      va.hello() ;
      va.toString() ;

      Object o = va ;
      o.toString() ;
      //o.hello() ;

      vmi v = va ;
      v.hello() ;
      v.toString() ;      
     
   }


}
