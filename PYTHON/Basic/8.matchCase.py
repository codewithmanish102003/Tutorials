x=int(input("Enter The Value of x : "))

match x:
    case 1:
        print("The value of x is 1")
    case 2:
        print("The value of x is 2")
    case 3:
        print("The value of x is 3")
    case 4:
        print("The value of x is 4")
        
    #default Case
    case _ if x!=90:
        print("The value of x is not 90")
    case _ if x!=80:
        print("The value of x is not 80")
    case _ :
        print(x)
            