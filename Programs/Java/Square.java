/*


*/

class Square {

   int s,a,p ;

   public void setS(int si) { s = si ; }
   public void setA(int ai) { a = ai ; }
   public void setP(int pi) { p = pi ; }

   public int getS() { return s ; }
   public int getA() { return a ; }
   public int getP() { return p ; }

   public void findarea() {

      a = s * s ;
   }  

   public void findperi() {

      p = 4 * s ;
   }

   public void print() {

      System.out.println("side      : " +s ) ;
      System.out.println("Area      : " +a ) ;
      System.out.println("Perimeter : " +p ) ;
   } 

   public static void main( String[] args ) {

      Square sqr = new Square() ;
 
      sqr.setS(13) ;

      sqr.findarea() ;
      sqr.findperi() ;
      sqr.print() ;

   }

}
