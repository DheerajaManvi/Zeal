class ReturnTest {

   public int one() { return 1 ; }
   public int one(int i ) { return 10 * i ; }
   public double one(int i, int k ) { return 11 * k ; }
   public int two() { return 2 ; }
   public int three() { return 3 ; }

   public String get() { return "Hello"; } 

   public void doTest() {

      int cc = 0;
      int on1 = one() ;
      int tw2 = two() ;
      int th3 = three() ;

      int tt = one() * two() * three() ;
      System.out.println ( get() + " : " + tt ) ;

      tt = one ( 5 ) * two() * three() ;
      System.out.println ( get() + " : " + tt ) ;
   }
   static public void main ( String[] argsaasdjkasjdkasd ) {
      new ReturnTest().doTest() ;
   }
}

