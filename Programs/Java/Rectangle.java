/*


*/

class Rectangle {

   int l,b,a,p ;

   public void setL(int li) { l = li ; } 
   public void setB(int bi) { b = bi ; }
   public void setA(int ai) { a = ai ; }
   public void setP(int pi) { p = pi ; }

   public int getL() { return l ; }
   public int getB() { return b ; }
   public int getA() { return a ; }
   public int getP() { return p ; }  

   public void findarea() {

      a = l * b ;
   }

   public void findperi() {

      p = 2 * ( l + b ) ;
   } 

   public void print() {

      System.out.println("Length    : " +l) ;
      System.out.println("Breadth   : " +b) ;
   }

   public static void main( String[] args ) {

      Rectangle rec = new Rectangle() ;

      rec.setL(10) ;
      rec.setB(8) ;

      rec.print() ;
      rec.findarea() ;
      rec.findperi() ;

      System.out.println("Area      : " +rec.a) ;
      System.out.println("Perimeter : " +rec.p) ;

   }
}
