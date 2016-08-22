

class ClassTest {

   int i,j,k ;  
}


class ClassTestOne {

   public static void main ( String[] args ) { 

      ClassTest ct = new ClassTest() ;

      int p ;
      ct.i = 10 ;
      ct.j = 11 ;
      ct.k = 12 ;

      p = ct.i * ct.j * ct.k ; 

      System.out.println( "Product is : " + p ) ;

  }
}
