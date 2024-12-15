def divide(a,b):
    assert b!=0, "The divisior b cannot be zero"
    
    return a/b


print(divide(10,2)) #this works fine
print(divide(10,0)) #this cause a assertion error