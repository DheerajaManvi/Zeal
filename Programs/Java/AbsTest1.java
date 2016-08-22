
class AbsTest1 {

   public final int x = -111  ;
   private final int px = -111  ;

}


class TestAbsTest1 extends AbsTest1 {
   public int x = 123 ;

   static public void main(String[] args ) {

      System.out.println ( new AbsTest1().x ) ;
      System.out.println ( new AbsTest1().px ) ;
      System.out.println ( new TestAbsTest1().x ) ;
   }

}
