fruits={"apple","banana","cherry","grapes","orange"}

set1={'a','b','c'}
set2={1,2,3,4,5,6}

# 1.union
set3=set1.union(set2)
print(set3)

#2.update
set1.update(set2)
print(set1)

#3.intersection
fruits2={"Mango","Banana","cherry","grapes","Blackberry","Pea","Pear"}
fruits3=fruits.intersection(fruits2)
print(fruits3)

#4.Difference
print(fruits2-fruits3)

#5.disjoint
print(set1.isdisjoint(set2))

#6.subset
set4={3,4,5}
print(set4.issubset(set2))

#7.superset
set4={3,4,5}
print(set4.issuperset(set2))
