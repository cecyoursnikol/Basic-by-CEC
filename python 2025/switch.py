choice = input("Enter a day (1-3): ")

match choice:
    case "1":
        print("Monday")
    case "2":
        print("Tuesday")
    case "3":
        print("Wednesday")
    case _:
        print("Invalid choice")
