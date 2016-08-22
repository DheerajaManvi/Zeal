/*

*/

import java.util.* ;

class MyAddress {

   String name    = null ;
   String ad1     = null ;
   String ad2     = null ;
   String place   = null ;
   String phone   = null ;
   String state   = null ;
   String country = null ;
   int pin        = 0 ;

   public void setName(String name) { this.name = name ; }
   public String getName() { return name ; }

   public void setAddressOne(String ad1) { this.ad1 = ad1 ; }
   public String getAddressOne() { return ad1 ; } 

   public void setAddressTwo(String ad2) { this.ad2 = ad2 ; }
   public String getAddressTwo() { return ad2 ; }

   public void setPlace(String place) { this.place = place ; }
   public String getPlace() { return place ; }

   public void setPhone(String phone) { this.phone = phone ; }
   public String getPhone() { return phone ; }
    
   public void setState(String state) { this.state = state ; }
   public String getState() { return state ; }

   public void setCountry(String country) { this.country = country ; }
   public String getCountry() { return country ; }

   public void setPin(int pin) { this.pin = pin; }
   public int getPin() { return pin ; }

   public String toString() {

      return ( name + "\n" + ad1 + "\n" + ad2 + "\n" + place + "\n" + phone + "\n" + state + "\n" + country + "\n" + pin + "\n"  ) ;
   }
}
