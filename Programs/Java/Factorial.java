/*

*/

class Factorial {

  int fact  ;

  public Factorial() {

  }
 
  public static int dofact(int n ) { 

     fact = 1 ; 
     int i ;

     for( i = 1 ; i <= n ; i++ ) {

       fact = fact * i ;
     }

     return fact ;
  } 

  public void print() {

    //System.out.println( fact ) ; 
  }

  public static void main( String[] args ) {

     Factorial fac = new Factorial() ;
     fac.dofact(8) ;

     System.out.println( fact ) ;
     fac.print() ;
  }
}
