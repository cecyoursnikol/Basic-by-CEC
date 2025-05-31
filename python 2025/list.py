# Ask the user to enter items separated by commas or spaces
user_input = input("Enter items for the list, separated by spaces: ")

# Use .split() to turn it into a list
my_list = user_input.split()

print("List:", my_list)
