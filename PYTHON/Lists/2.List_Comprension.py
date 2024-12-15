#list Comprehension
#syntax 
#lst=expression for item in iiterable/expression if condition
lst=[i for i in range(2,10)]
print(lst)

lst=[i*i for i in range(2,10) if i%2==0]
print(lst)