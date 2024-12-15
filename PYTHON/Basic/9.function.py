#Simpe Funtion Eg.
def my_func():
    print("Hello World")
    
my_func()

#argument function
def sum(n1,n2=9):
    print("Sum of",n1,"and",n2,"is =",n1+n2)
  
sum(7,8)
sum(10)

#function with default argument
def Default(Name="Manish"):
    print("Hello",Name)
    
Default()
Default("Shubham")

#Keyword Arguments
def name(firstName,midName,lastName):
    print("Hello,",firstName,midName,lastName)
    
name(firstName="Manish",midName="Kumar",lastName="Prajapati")

#arbitrary Arguments
#process te arguments in the form tuples
def name(*name):
    print("Hello,",name[0],name[1],name[2])
    
name("Manish","Naveen","Shubham")

#keyword Arbitarary Arguments
#process the arguments as dictionary
def name(**name):
    print("Hello,",name["fname"],name["mname"],name["lname"])
    
name(mname="Kumar",lname="Prajapati",fname="Manish")


