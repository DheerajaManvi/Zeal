import java.io.* ;


class JavaSer implements Serializable {

  int i ; 
  String s ;
  int age ;
  transient int x = i * age ;


  public String toString() {

     System.out.println ( s ) ;
     return "" ;
  }

  public void doX() { x = i * age ; }

  public void hello () {

     System.out.println ( s + " : " + i + " : " + age ) ;

  }

}


class JavaSerA extends JavaSer {

   public void t () { } 

}


class TestSer {


   public static void main (String[] s ) throws Exception {

      JavaSerA js = new JavaSerA() ;

      js.i = 10 ;
      js.age = 21 ;
      js.s = "Dheeru"; 

      js.doX() ;
      js.hello() ;
      System.out.println ( "x: " + js.x ) ; 

      FileOutputStream fos = new FileOutputStream ( "/tmp/javaser.ser" ) ;
      ObjectOutputStream oos = new ObjectOutputStream ( fos ) ;

      oos.writeObject ( js ) ;

      oos.close(); fos.close() ;

      ObjectInputStream ois = new ObjectInputStream ( new FileInputStream ( "/tmp/javaser.ser" ) ) ;

      JavaSer o = (JavaSer ) ois.readObject() ;

      o.hello() ;
      o.toString() ;
      System.out.println ( "x: " + o.x ) ; 
      o.doX() ;
      System.out.println ( "x: " + o.x ) ; 

   }

}
