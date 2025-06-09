print("1. Say Hello")
print("2. Add Two Numbers")
print("3. Exit")

choice = input("Enter your choice (1/2/3): ")

if choice == "1":
    name = input("Enter your name: ")
    print("Hello,", name)
elif choice == "2":
    a = int(input("Enter first number: "))
    b = int(input("Enter second number: "))
    print("Sum is:", a + b)
elif choice == "3":
    print("Goodbye!")
else:
    print("Invalid choice.")
