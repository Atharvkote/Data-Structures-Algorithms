## C++ Syntax
Let's break up the following code to understand it better:

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```


### Example explained
- **Line 1:** `#include <iostream>` is a header file library that lets us work with input and output objects, such as cout (used in line 5). Header files add functionality to C++ programs.

- **Line 2:** `using namespace std` means that we can use names for objects and variables from the standard library.

>[!IMPORTANT]
> Don't worry if you don't understand how `#include <iostream>` and `using namespace std` works. Just think of it as something that (almost) always appears in your program.

- **Line 3:** A blank line. C++ ignores white space. But we use it to make the code more readable.

- **Line 4:** Another thing that always appear in a C++ program is `int main()`. This is called a function. Any code inside its curly brackets `{}` will be executed.

- **Line 5:** cout (pronounced "see-out") is an object used together with the insertion operator `(<<)` to output/print text. In our example, it will output `"Hello World!"`.

>[!NOTE]
> - Every C++ statement ends with a semicolon ;.
> - The body of int main() could also been written as:
```cpp
int main () {
cout << "Hello World! ";
 return 0;
 }
```

>[!IMPORTANT]
> The compiler ignores white spaces. However, multiple lines makes the code more readable.

- **Line 6:** return 0; ends the main function.

- **Line 7:** Do not forget to add the closing curly bracket } to actually end the main function.

Omitting Namespace
You might see some C++ programs that runs without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects:

### Example
```cpp
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```

## C++ Variables

Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:

- `int` - stores integers (whole numbers), without decimals, such as 123 or -123
- `double` - stores floating point numbers, with decimals, such as 19.99 or -19.99
- `char` - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
- `string` - stores text, such as "Hello World". String values are surrounded by double quotes
- `bool` - stores values with two states: true or false
Declaring (Creating) Variables
To create a variable, specify the type and assign it a value:

### Syntax


```cpp
type variableName = value;
```


Where type is one of C++ types (such as int), and variableName is the name of the variable (such as x or myName). The equal sign is used to assign values to the variable.

To create a variable that should store a number, look at the following example:

### Example


Create a variable called myNum of type int and assign it the value 15:

```cpp
int myNum = 15; 
cout << myNum;
```
You can also declare a variable without assigning the value, and assign the value later:

## Example


```cpp
int myNum;
myNum = 15;
cout << myNum;
```
>[!NOTE]
>if you assign a new value to an existing variable, it will overwrite the previous value:

### Example
```cpp
int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
cout << myNum;  // Outputs 10
