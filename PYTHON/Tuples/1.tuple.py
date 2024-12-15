thistup=(1,2,3,4,5,6)
print(thistup)

#tuples cancontain different types
thistup=(1,2,3,4,5,6,'hello')
print(thistup)

#type and length
print(type(thistup))
print(len(thistup))

#creating tuple with on item
# thistup2=(1) this will not recognised  as a tuple
# print(thistup2)
# print(type(thistup2)) <class 'int'>

thistup2=("apple",) #we have to use comma after element while making tuple with one value
print(type(thistup2))

#aceesing elements one by one
print(thistup[0])
print(thistup[-1])

#check if an item exist in a tuple or not
print(1 in thistup)

#using if else
if 1 in thistup:
    print("1 is present in the tuple")
else:
    print("1 is not present in the tuple")
    