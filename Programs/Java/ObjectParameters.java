

class ObjectParameters {

   int a,b ;

   ObjectParameters( int i , int j ) {

      a = i ;
      b = j ;
   }

   boolean equals(ObjectParameters op)  {

      if( op.a == a && op.b == b ) return true ;
      else return false ;
   }

   public static void main ( String[] args ) {

      ObjectParameters op1 = new ObjectParameters(100,22) ;
      ObjectParameters op2 = new ObjectParameters(100,22) ;
      ObjectParameters op3 = new ObjectParameters(-1,-1) ;

      System.out.println("op1 == op2: " + op1.equals(op2) ) ;
      System.out.println("op1 == op3: " + op1.equals(op3) ) ;
   }
}


