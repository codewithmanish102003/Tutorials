# write a code for manipulating tuples items like remove,change,add and delete
# tuple is immutable so we can't change the tuple itself but we can change the tuple items
tuple1 = (1, 2, 3, 4, 5)
# remove item from tuple

tuple1 = tuple(x for x in tuple1 if x != 2) 
print(tuple1)  # output: (1, 3, 4, 5)
# change item in tuple
tuple1 = list(tuple1)
tuple1[0] = 10
print(tuple1)  # output: [10, 3, 4, 5]
# add item to tuple
tuple1 = list(tuple1)
tuple1.append(6)
print(tuple1)  # output: [10, 3, 4, 5]
# delete item from tuple
tuple1 = list(tuple1)
tuple1.remove(10)
print(tuple1)  # output: [3, 4, 5, 6]

#del keyword
tuple1 = (1, 2, 3, 4, 5)
tuple2=list(tuple1)
del tuple2
print(tuple1)  # output: NameError: name 'tuple1' is not defined