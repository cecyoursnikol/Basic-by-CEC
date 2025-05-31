while True:
    print("\nMenu:")
    print("1. Say Hello")
    print("2. Add Numbers")
    print("3. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        name = input("Enter your name: ")
        print("Hello,", name)
    elif choice == "2":
        a = int(input("Enter first number: "))
        b = int(input("Enter second number: "))
        print("Sum:", a + b)
    elif choice == "3":
        print("Goodbye!")
        break
    else:
        print("Invalid choice, please try again.")
