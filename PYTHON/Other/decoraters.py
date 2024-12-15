def greet(func):
    def mFunc(*args,**kwargs):
        print("Good Morning")
        func(*args,**kwargs)
        print("Thanks for using this function")

    return mFunc

@greet
def hello():
    print("Hello World")
    
hello()

# def hello():
#     print("Hello World")

# greet(hello)()

def add(a,b):
    print(f"Sum of {a} and {b} is ",a+b)
greet(add)(2,3)
        
