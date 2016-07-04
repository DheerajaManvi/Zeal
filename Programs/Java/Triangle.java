/*


*/

class Triangle {

   double a,r ;

   public void setR( double ri ) { r = ri ; }
   public void seta( double ai ) { a = ai ; }

   public double getR() { return r ; }
   public double getA() { return a ; }

   public void findarea() {

      a = 3.14 * r * r ;
   }  

   public void print() {

      System.out.println("Radius : " +r) ;
   }

   public static void main( String[] args) {

       Triangle tri = new Triangle() ;

       tri.setR(12) ;
    
       tri.print() ;
       tri.findarea() ; 

       System.out.println("Area of a circle : " +tri.a ) ;
   }

}

