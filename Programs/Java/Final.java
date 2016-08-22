

class Final {

   final int i = 3 ;
   private double d ; 
   final static public  long l = 2 ;

   int pi = 1234 ;

   Integer ii = pi ;   
   int aa = ii ;

   public  void oneMethod() {
      System.out.println("Test") ;
   }
}


class TestFinal extends Final {

    int  i  ;
    int  d   ;

   public final  void oneMethod() { }

   public void print() {

     i = 4;   
     d = 4 ;
   }

   public static void main ( String[] args ) { 

      TestFinal tf = new TestFinal() ; 
      Final f  = new Final() ;

      //System.out.println(tf.i) ;
      System.out.println(f.i) ;

      tf.print() ;

   }
}
