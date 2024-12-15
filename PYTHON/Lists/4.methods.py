thislist = [1, 2, 3, 4, 5]

# 1.clear
thislist.clear()
print(thislist)

# 2.append
thislist.append(1)
thislist.append(2)
thislist.append(3)
thislist.append(3)
thislist.append(5)
thislist.append(6)
print(thislist)

# 3.copy
copiedlist = thislist.copy()
print(copiedlist)

# 4.count
print(thislist.count(3))

# 5.extend
thislist.extend([7, 8, 9, 10])
print(thislist)

# 6.index
print(thislist.index(3))

# 7.insert
thislist.insert(3, 4)
print(thislist)

# 8.pop
thislist.pop(3)
print(thislist)

#9.remove
thislist.remove(2)
print(thislist)

#10.reverse
thislist.reverse()
print(thislist)

#11.sort
thislist.sort()
print(thislist)
