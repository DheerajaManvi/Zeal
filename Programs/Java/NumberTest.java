import java.lang.Integer ;
/*
class NumberTest extends Number {


   public static void main ( String[] args ) {

      Number a = new  Integer ( 10 ) ;

   }

   public double doubleValue() { return 1 ;} 
   public float  floatValue() { return 1 ;} 
   public long   longValue() { return 1 ;} 
   public int    intValue() { return 1 ;} 

}
*/


class NumberTest {

   public static void main ( String[] args ) {

      PrintIntergerFields() ;
      PrintIntergerInstance() ;
      methodBitCount() ;
      methodDecode() ;
      methodGetInteger() ;
      methodLeadingZeros() ;

   }

   public static void PrintIntergerFields () {

      System.out.println ( "Integer Max Value: " + Integer.MAX_VALUE ) ;
      System.out.println ( "Integer Min Value: " + Integer.MIN_VALUE ) ;
      System.out.println ( "Integer Size Value: " + Integer.SIZE ) ;

   }

   public static void PrintIntergerInstance () {

      Integer i = new Integer ( 1000 ) ;
      System.out.println ( "Integer i Value: " + i ) ;
      System.out.println ( "Integer i Value: " + i.toString() ) ;

      Integer si = new Integer ( "1234" ) ;
      System.out.println ( "Integer si Value: " + si ) ;
      System.out.println ( "Integer si+4 Value: " + (si+4) ) ;
      System.out.println ( "Integer si+4 Value: " + si+4 ) ;
      System.out.println ( 5 + 5 + 5 + 5 + 5 + 5 ) ;
      System.out.println ( 5 + 5 + 5 + 5 + 5 + 5 + "") ;
      System.out.println ( "" + 5 + 5 + 5 + 5 + 5 + 5 + "") ;

   }


   public static void methodBitCount () {

      System.out.println ( "population count:(1-bits count): " + Integer.bitCount( -1) ) ;
      System.out.println ( "population count:(1-bits count): " + ( 1 << 31 ) ) ;

      int ii = 1 ;
      for ( int b = 0 ; b < 31 ; b++ ) {
         ii = (ii << 1) + 1 ; 
      }
      System.out.println ( "all Bits: " + Integer.bitCount ( ii ) + ", Value: " + ii) ;

   }

   public static void methodDecode() {

      System.out.println ( "Decode of 111 : " + Integer.decode("111") ) ;
      System.out.println ( "Decode of 0xffff : " + Integer.decode("0xffff") ) ;
      System.out.println ( "Decode of 0XFFFFFFFF : " + Integer.decode("0xfffffff") ) ;

   } 

   public static void methodGetInteger() {

      for ( String s : System.getProperties().stringPropertyNames() ) {

          System.out.println ( s + "= " + System.getProperty( s ) ) ;

      } 

      System.out.println ( "Prop 'java.num.value': " + Integer.getInteger ("java.class.version", 9999) ) ;
      System.out.println ( "Prop 'sun.arch.data.model': " + Integer.getInteger ("sun.arch.data.model",-111) ) ;

   }

   public static void methodLeadingZeros() {

       System.out.println("Leading zeros : " + Integer.numberOfLeadingZeros( 2 ) ) ;
   }

}

