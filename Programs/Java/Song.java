import java.net.*;
import java.io.*;
import java.util.*;
import javax.print.attribute.EnumSyntax;
import javax.media.* ;


class Song {

   public static void main( String[] args ) {

      File ff = new File("01 - Baby Ko Bass Pasand Hai - DownloadMing.SE.mp3" ) ;
      ff.getPath() ;

      final Player p = Manager.createRealizedPlayer(ff.toURI().toURL());   
      p.start();

      Scanner s = new Scanner(System.in);
      String st = s.nextLine();

      if(st.equals("s"))
      {
         p.stop();
      }
   }
}
