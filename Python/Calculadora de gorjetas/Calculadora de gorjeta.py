print("Welcome to the tip calculator!\n")

bill = float(input("What was the total bill? $"))
tip_percent = float(input("How much tip would you like to give? 10, 12 or 15: "))
people = int(input("How many people to split the bill? "))

total_with_tip = bill + (bill * tip_percent / 100)
each_person = total_with_tip / people

print(f"Each person should pay ${each_person:.2f}")
