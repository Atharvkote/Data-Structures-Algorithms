/*

if...else Statement Syntax: ----->

if(Condition){
//If Condition true
//This Block of Code is executed
}
esle{
//Condition Flase 
//this Block of Code is Executed
}

*/

public class JavaIf {
    public static void main(String[] args) {
        String name = "Mohan";
        int Roll = 25;
        if (name == "Mohan" && Roll == 26) {
            System.out.println("Details of Mohan.");
        } else {
            System.out.println("Invalid details.");
        }
    }
}
