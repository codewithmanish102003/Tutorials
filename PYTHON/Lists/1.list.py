lst = ["Red", "Green", "Blue"]
lst1 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
#list can conntain different data types
lst2=["abc",34,True,40,"maale"]
# accessing whole list
print(lst)
print(lst2)
print(type(lst))
print(len(lst1))
# acessing elemnets by positive index
print(lst[0])
print(lst[1])
print(lst[2])

# accessing elements by Negative index
print(lst[-1])
print(lst[-2])
print(lst[-3])

# check weather an item is present in list or not
if "Red" in lst:
    print("Red is Present")
else:
    print("Red is not present")

# accessing elements by giving range
print(lst1[:])  # by default 0 to length-1
print(lst1[2:5])
print(lst1[0:8:2])


