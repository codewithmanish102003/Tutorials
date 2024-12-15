lst1 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
for i in lst1:
    print(i, end=' ')

print("\n") 
#looping through index
print("Looping throgh index")
for i in range(len(lst1)):
    print(lst1[i],end=' ')
   
print("\n") 
#using a while loop
i=0
while i < len(lst1):
    print(lst1[i],end=' ')
    i+=1