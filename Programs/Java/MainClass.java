

class MainClass {


   public static void main(String args[]) {

       int letter = 0;

       try {

       System.out.print("Type a letter and press Enter: ");
       letter = System.in.read();
       System.out.println("You typed: " + letter);
       System.out.println("You typed: " + (char) letter);
       System.out.println("--------");

       } catch ( Exception e ) { 
       }

        //while((letter = System.in.read ()) != '\n') {
        //  System.out.println((char) letter);
        //}

   }
}
