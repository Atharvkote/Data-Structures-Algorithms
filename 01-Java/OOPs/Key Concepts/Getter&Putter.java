class Employee {

    private int id; //access modifier : private 
    private  String name;// Only Accesable in Class 

    public String getName(){
        return name;
    }
    public void setName(String n){
        name = n;
    }
    public void setId(int i){
        id = i;
    }
    public int getId(){
        return id;
    }
}

public  class CWH {
    public static void main(String[] args) {
        Employee emp1 = new Employee();

        emp1.setName("Shubham");
        System.out.println(emp1.getName());
        emp1.setId(1);
        System.out.println(emp1.getId());

//1.within class	2.within package 3.outside package by subclass only 4.outside package
//public      	Y	Y	Y	Y
//protected	Y	Y	Y	N
//Default	    Y	Y	N	N
//private     	Y	N	N	N
    }
}
