import java.util.*;
class Employee {
	private int Id ;
	private String Name;
	void setname(String name) {
		Name = name;
	}
	String getname() {
		return Name ;

	}
	void setId(int id) {
		Id  = id;
	}
	int getId() {
		return Id;

	}
    Employee() {  // Constructor with Defualt value 
		Id = 0;
		Name = "No_Name_Entered_!!";
	}
	void print_details(){
	    System.out.println("Name : "  +Name + "\nId : " +Id);
	    }
}
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Employee Ep1 = new Employee();
	//	System.out.println("Enter Your ID !!");
	//	int Id_in = sc.nextInt();
	   //Ep1.setId(Id_in);
		//System.out.println("Enter Your Name !!");
		//String ep_name = sc.next();
		//Ep1.setname(ep_name);
	//	int a=Ep1.getId();
    //	String b=Ep1.getname();
    	Ep1.print_details();
		
	}
}