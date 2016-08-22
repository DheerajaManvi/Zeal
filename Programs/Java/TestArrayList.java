import java.util.* ;
import java.io.* ;

class TestArrayList {

   ArrayList al = null ;
   public static Scanner sc = new Scanner ( System.in ) ;

   public TestArrayList() {

      al = new ArrayList() ;

   } 

   public TestArrayList(int initCapacity) {

      al = new ArrayList( initCapacity ) ;

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
      System.out.println("\t0. Exit") ;
      System.out.println("==============================") ;
      System.out.print  ("\tChoice: " ) ;

   }

   public int readChoice() {

      displayOptions() ;
      return sc.nextInt() ;

   }

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

         }

      }

   }


   public void removeAt() { 

      int alSize = al.size() ;

      System.out.println("\n\n") ;

      if ( alSize == 0 ) { 
         System.out.println ("Warn: Empty List..." ) ;
         return ;
      }

      System.out.print("Enter an index [0, " + (alSize-1) + "]: " ) ;
      int n = sc.nextInt() ;

      if ( n < 0 || n >= alSize ) {
         System.out.println ("Error: Index " + n + " out of range." ) ;
         return ;
      } 

      al.remove ( n ) ;
   }

   public void removeAll() { 
      al.clear() ;
   }

   public void addString() {

      sc.nextLine() ;
      System.out.print("\nEnter a String: " ) ;
      al.add ( sc.nextLine() ) ;

   }
 
   public void display() {

      System.out.println( "\n\n" ) ;
      System.out.print ("\nArray List Elements are: " ) ;

      if ( al.size() == 0 ) {
         System.out.print ( " [EMPTY] " ) ;
      }

      System.out.println ( ) ;


      for ( int i = 0 ; i < al.size() ; i++ ) {

         System.out.println ( (i+1) + ". " + al.get(i) ) ;

      }

      System.out.println( "\n\n" ) ;


   }

   public void removeFirst() {

      // What happens when there are no elements in the ArrayList.
      // This will throw an exception
      // you should always check for element at the index before removing it.

      if ( al.size() > 0 ) { al.remove( 0 ) ; }
   }

   public void removeLast() {

      // Where is variable 'alsize' 
      // you should get the size of the Array List
      // then check thr value is more than 0
      // otherwise you will try to remove element at index -1
      // throws an exception...

      if ( al.size() > 0 ) { al.remove( al.size() - 1 ) ; }

   }

   public void addAt() {

      // You should check index, > 0 and < size
      // you cannot insert at arbitary index,
      // Else, it throws IndexOutOfBoundsException

      System.out.print("Enter an index : ") ;
      int index = sc.nextInt() ;

      sc.nextLine() ;
      System.out.print("Enter any String : ") ;
      String s = sc.nextLine() ;

      al.add( index , s ) ; 

   }

   public void getAt() {

       System.out.print("Enter an index of the required string : ") ;
       int index = sc.nextInt() ;
    
       System.out.print("The string at the index " + index +" is : " + al.get(index) ) ; 
   }

   public void replaceAt() {

      System.out.print("Enter an index for string replacement : ") ;
      int index = sc.nextInt() ;

      sc.nextLine() ;
      System.out.print("Enter the string to be replaced : ") ;
      String s = sc.nextLine() ;

      al.add(index,s) ; //al.set(index,s) ;
   }

   public void getIndexOf() {
  
      sc.nextLine() ;
      System.out.print("Enter the string : ") ;
      String s = sc.nextLine() ; 

      System.out.println("The given string is at the index: " + al.indexOf ( s )  ) ;
   }

   public void getLastIndexOf() {
  
      sc.nextLine() ;
      System.out.print("Enter the string : ") ;
      String s = sc.nextLine() ; 

      System.out.println("The given string is at the index: " + al.lastIndexOf ( s )  ) ;
   }

   public void getArray() {

      Object[] str_array = al.toArray() ;

      int size = str_array.length ;

      System.out.println("\n=========================") ;

      for( int i = 0 ; i < size ; i++ ) {
         System.out.println( "\t" + str_array[i] ) ; 
      }
      
      System.out.println("=========================") ;

   }

   public void getSubList() {

      System.out.print("Enter the from index : " ) ;
      int from = sc.nextInt() ;

      System.out.print("Enter the to index : " ) ;
      int to = sc.nextInt() ;

      System.out.println( al.subList( from , to ) ) ; 
   }


   public static void main ( String[] args ) {

      new TestArrayList().processChoice() ; 

   }

}
