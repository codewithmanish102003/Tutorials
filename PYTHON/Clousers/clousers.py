def outer():
    
    def inner(x):
        print(x)
    return inner

f=outer() #clousre of inner()
f("Hello")