# if statement

a = 33
b = 200
if b > a:
    print(str(b) + " is greater than " + str(a))

# if else statement

num = int(input("Enter The Num : "))

if num < 0:
    print("Mumber is Negative.")
else:
    print("Number is positive")

# elif statement

num = int(input("Enter The Num : "))

if num < 0:
    print("Mumber is Negative.")
elif num == 0:
    print("Number is 0.")
else:
    print("Number is positive.")
