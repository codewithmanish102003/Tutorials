def Divide(num1, num2):
    try:
        result = num1 / num2
    except ZeroDivisionError as e:
        print(f"Error:{e}")
    else:
        print("No Exception Occured")
        return result
    finally:
        print("I runs Always...")
        


Sol=Divide(10,2)
print("The Answer is =", Sol)

Sol2=Divide(10,0)
print("The Answer is =", Sol2)
