age = int(input("Enter your age: "))

if age >= 18:
    if age >= 65:
        print("You're a senior citizen.")
    else:
        print("You're an adult.")
else:
    print("You're a minor.")
