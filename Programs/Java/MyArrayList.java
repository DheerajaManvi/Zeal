import java.util.* ;
import java.io.* ; 

class MyArrayList extends TestArrayList {

   public MyArrayList() {

      super() ;
   } 

   public MyArrayList(int initCapacity) {

      super(initCapacity) ;
   }   


   public void displayOptions() {


      System.out.println("\n\n\n") ;
      System.out.println("==============================") ;
      System.out.println("\t 1. Add String") ;
      System.out.println("\t 2. Remove At") ;
      System.out.println("\t 3. Clear") ;
      System.out.println("\t 4. Display") ;
      System.out.println("\t 5. Remove First") ;
      System.out.println("\t 6. Remove Last") ;
      System.out.println("\t 7. Add/Insert At") ;
      System.out.println("\t 8. Get At") ;
      System.out.println("\t 9. Replace At") ;
      System.out.println("\t10. Get IndexOf") ;
      System.out.println("\t11. Get LastIndexOf") ;
      System.out.println("\t12. Get Array") ;
      System.out.println("\t13. Get SubList") ;
      System.out.println("\t14. Add Int") ;
      System.out.println("\t15. Add Char") ; 
      System.out.println("\t16. Add String Array") ;
      System.out.println("\t17. Add Integer Array") ;
      System.out.println("\t0. Exit") ;
      System.out.println("==============================") ;
      System.out.print  ("\tChoice: " ) ;

   }

/*
   public int readChoice() {

      displayOptions() ;
      return sc.nextInt() ;
   }
*/
    public void processChoice() {

      while ( true ) {

         int choice = readChoice() ;

         if ( choice == 0 ) { break ; }

         switch ( choice ) {

            case 1  : addString() ;     break ;
            case 2  : removeAt()  ;     break ;
            case 3  : removeAll() ;     break ;
            case 4  : display()   ;     break ;
            case 5  : removeFirst() ;   break ;
            case 6  : removeLast() ;    break ;
            case 7  : addAt() ;         break ;
            case 8  : getAt() ;         break ;
            case 9  : replaceAt() ;     break ;
            case 10 : getIndexOf() ;    break ;
            case 11 : getLastIndexOf(); break ;
            case 12 : getArray() ;      break ;
            case 13 : getSubList() ;    break ;
            case 14 : addInt() ;        break ;
            case 15 : addChar() ;       break ; 
            case 16 : addStringArray() ;break ;
            case 17 : addIntArray() ;   break ;
            case 18 : getIterator() ;   break ;
            case 19 : getAnotherIterator() ;   break ;

         }

      }

   }

/*
   public void getAt() {
   }


   public void addString() {

   }

   public void removeAt() {
   }

   public void removeAll() {
   }


   public void removeFirst() {
   }

   public void removeLast() {

   }

   public void addAt() {

   }

   public void replaceAt() {
   }

   public void getIndexOf() {
   }

   public void getLastIndexOf() {
   }

*/

   public void printObject ( Object o ) {

       if ( o.getClass().getName().startsWith ("[I") ) {

            int[] ts = (int[]) o ;

            System.out.print ( "[ " ) ;

            for ( int j =0 ; j < ts.length ; j++ ) {
               System.out.print ( ts[j] + ", " ) ;
            }

            System.out.println ( " ] => " + o.getClass().getName()  ) ;


         } else if ( o.getClass().getName().startsWith ("[L") ) {

            Object[] ts = (Object[]) o ;

            System.out.print ( "[ " ) ;
            for ( int j =0 ; j < ts.length ; j++ ) {

               System.out.print ( ts[j] + ", " ) ;

            }

            System.out.println ( " ] => " + o.getClass().getName() ) ;

         } else {
            System.out.println ( o + " => " + o.getClass().getName() ) ;
         }


   }
   public void getArray() {

     Object[] int_array = al.toArray() ;  
 
     for ( int i = 0 ; i < int_array.length; i++ ) {

         
         if ( int_array[i].getClass().getName().startsWith ("[I") ) {

            int[] ts = (int[]) int_array[i] ;

            System.out.print ( "[ " ) ;

            for ( int j =0 ; j < ts.length ; j++ ) {
               System.out.print ( ts[j] + ", " ) ;
            }

            System.out.println ( " ] => " + int_array[i].getClass().getName()  ) ;

            
         } else if ( int_array[i].getClass().getName().startsWith ("[L") ) {

            Object[] ts = (Object[]) int_array[i] ;

            System.out.print ( "[ " ) ;
            for ( int j =0 ; j < ts.length ; j++ ) {

               System.out.print ( ts[j] + ", " ) ;

            }

            System.out.println ( " ] => " + int_array[i].getClass().getName() ) ;

         } else {
            System.out.println ( int_array[i] + " => " + int_array[i].getClass().getName() ) ;
         }
     }

   }

   public void addInt() {

      System.out.print("Enter any number : ") ;
      int i = sc.nextInt() ;

      al.add( new Integer(i) ) ;
   }

   public void addChar() {

      sc.nextLine() ;
      System.out.print("Enter any character : ") ;
      String c = sc.nextLine() ;

      al.add( new Character ( c.charAt(0) ) ) ;
   }

   public void addStringArray() {
      
      String[] str_array = new String[5];

      for( int i = 0 ; i < 5 ; i++ )  {

         if ( i == 0 ) { sc.nextLine() ;}
         System.out.print("Enter a String " + (i+1) + ": ") ;
         str_array[i] = sc.nextLine() ;

      }
      al.add(str_array) ;

   }

    public void addIntArray() {

       int[] ia = new int[3] ;

       for( int i = 0 ; i < 3 ; i++ ) {

          System.out.print("Enter an integer " +(i+1)+ ": ") ;
          ia[i] = sc.nextInt() ;

       }

       al.add(ia) ;

    }

    public void getIterator() {

       Iterator it = al.iterator() ;

       while( it.hasNext() ) {

          Object o = it.next() ;
          printObject(o) ;
       }

    }

    public void getAnotherIterator() {

       Iterator it = al.iterator() ;
       for ( Object o : al.toArray() ) {
          printObject(o) ;
       }

    }

   public static void main( String[] args ) {

       new MyArrayList().processChoice() ;
   }

}
