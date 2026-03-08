principal = float(input("Enter Principal Amount: "))
rate = float(input("Enter Rate of Interest: "))
time = float(input("Enter Time (in years): "))

SI = (principal * rate * time) / 100

print("Simple Interest =", SI)
