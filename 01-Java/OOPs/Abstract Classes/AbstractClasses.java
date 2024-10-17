abstract class Phone{  
  abstract void on();  
}  
class SmartPhone extends Phone{  
void run(){
System.out.println("Turning on...");
}  
public static void main(String args[]){  
 Phone obj = new SmartPhone();  
 obj.on();  
}  
}  