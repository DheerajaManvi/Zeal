/*


*/

class Circle {

   double b,l ;
   double a ;

   public void setB( int bi ) { b = bi ;  }
   public void setL( int li ) { l = li ;  }
   public void setA( int ai ) { a = ai ;  }

   public double getB() { return b ; }
   public double getL() { return l ; }
   public double getA() { return a ; }

   public void calarea() {

     a = 0.5 * b * l ; 
     
   }  

   public void print() {

      System.out.println( "Height   : " +l ) ;
      System.out.println( "Breadth  : " +b ) ;

   }

   public static void main ( String[] args ) {

      Circle cr = new Circle() ;

      cr.setB(10) ;
      cr.setL(34) ;

      cr.print() ;
      cr.calarea() ;

      System.out.println("Area     : " + cr.a) ;
   }

}


