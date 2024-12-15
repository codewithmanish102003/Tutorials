#Recursive Function

def printHello(count):
    if count==0:
        return
    else:
        print("Hello")
        printHello(count-1) #base condition
        
printHello(5)