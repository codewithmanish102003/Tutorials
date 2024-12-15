# break statement
for i in range(1,5):
    if i==3:
        break
    print(i)
else:
    print("Fiinally Finished") #else not executed
    
# Continue
for i in range(1,5):
    if i==3:
        continue
    print(i)
else:
    print("Fiinally Finished") #else also executed
    

# Pass Statement
def Func():
    pass  #it will not cause any error if function has no body
