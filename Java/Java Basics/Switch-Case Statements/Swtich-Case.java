/*
Switch Case Declaration Syntax  ------>

switch (expression) {
  case value1:
    // code
    break;
  case value2:
    // code
    break;
  ...
  ...
  default:
    // default statements
}

*/
public class JavaSwitch {
    public static void main(String[] args) {
        String day = "Wednesday";
        switch (day) {
          case "Sunday":
            System.out.println("Today is Sunday");
            break;
          case "Monday":
            System.out.println("Today is Monday");
            break;
          case "Tuesday":
            System.out.println("Today is Tuesday");
            break;
          case "Wednesday":
            System.out.println("Today is Wednesday");
            break;
          case "Thursday":
            System.out.println("Today is Thursday");
            break;
          case "Friday":
            System.out.println("Today is Friday");
            break;
          case "Saturday":
            System.out.println("Today is Saturday");
            break;
        }
    }
}
