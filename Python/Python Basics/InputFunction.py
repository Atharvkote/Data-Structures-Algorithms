# Basic usage of input()
name = input("Enter your name: ")
# If user types "Alice"
# Input: Enter your name: Alice
# name will be "Alice"

# Prompting for an integer
age = int(input("Enter your age: "))
# If user types "30"
# Input: Enter your age: 30
# age will be 30 (as an integer)

# Prompting for multiple values
fruit1 = input("Enter first fruit: ")
fruit2 = input("Enter second fruit: ")
# If user types "apple" for first and "banana" for second
# Input: Enter first fruit: apple
# Input: Enter second fruit: banana
# fruit1 will be "apple"
# fruit2 will be "banana"

# Using input with a custom prompt
custom_prompt = "Please enter your favorite color: "
favorite_color = input(custom_prompt)
# If user types "blue"
# Input: Please enter your favorite color: blue
# favorite_color will be "blue"

# Combining input with print for dynamic interaction
name = input("Enter your name: ")
print(f"Hello, {name}!")
# If user types "Alice"
# Input: Enter your name: Alice
# Output: Hello, Alice!

# Prompting for a float
height = float(input("Enter your height in meters: "))
# If user types "1.75"
# Input: Enter your height in meters: 1.75
# height will be 1.75 (as a float)

# Using input in a loop
while True:
    data = input("Enter some data (or 'exit' to quit): ")
    if data == 'exit':
        break
    print(f"You entered: {data}")
# This loop will continue to prompt the user until they type "exit"
