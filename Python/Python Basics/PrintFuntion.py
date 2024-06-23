# Basic usage of print()
print("Hello, world!")
# Output: Hello, world!

# Printing multiple values with custom separator
print("apple", "banana", "cherry", sep=', ')
# Output: apple, banana, cherry

# Changing the ending of print()
print("Hello, ", end='')
print("world!")
# Output: Hello, world!

# Output to a file
with open('output.txt', 'w') as f:
    print("Hello, world!", file=f)

# Using newline (\n) string literal
print("gog\n is best for random content.")
# Output:
# gog
#  is best for random content.

# Using empty string literal to print an empty line
print("")
# Output: (prints an empty line)

# Printing formatted output using f-string
name = "Alice"
age = 30
print(f"My name is {name} and I am {age} years old.")
# Output: My name is Alice and I am 30 years old.
