class Divide {

   int a , b , c;

   public int getA() { return a ; }
   public int getB() { return b ; }
   public int getC() { return c ; }

   public void setA( int ai ) { a = ai ; }
   public void setB( int bi ) { b = bi ; }
   public void setC( int ci ) { c = ci ; }

   public void divideAB() {

      c = a / b ;
   }

   public void printABC() {

 
      System.out.println("--------------") ;
      System.out.println("A : " + a ) ;
      System.out.println("B : " + b ) ;
      System.out.println("C : " + c ) ;
   }


   public static void main( String[]  args ) {

      Divide div = new Divide() ;

      div.setA(12) ;
      div.setB(10) ;

      div.divideAB() ;
      div.printABC() ;


      System.out.println( "Divisor : " +div.getC() ) ;

      div.setA(11) ;
      div.setB(2)  ;

      div.divideAB() ;
      div.printABC() ;

      System.out.println( "Divisor : " + div.getC() ) ;
   }
}

