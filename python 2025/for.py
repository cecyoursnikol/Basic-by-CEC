n = int(input("How many items do you want to enter?\nEnter here :- "))

items = []

for i in range(n):
    item = input(f"Enter item {i+1}: ")
    items.append(item)

print("You entered:", items)
