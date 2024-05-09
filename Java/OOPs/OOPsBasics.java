class Animal {
	private String Name;
	private  String color; // Private - Access Modifyiers 
	void print_attri() {
		System.out.println(Name + " " + color);
	}
	void setname(String name) {
		Name = name;
	}
	String getname() {
		return Name ;

	}
}
public class Main {
	public static void main(String[] args) {
		Animal tiger = new Animal();
		//tiger.Name= "Tiger";  Throws Error Due to Private Access Modifyeirs ......
	   //tiger.color="Yellow";
      tiger.setname("CodeWithHarry");
     System.out.println(tiger.getname());
		
	}
}