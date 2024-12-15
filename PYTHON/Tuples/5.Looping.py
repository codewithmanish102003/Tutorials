tuple=("red","green","yellow","blue","orange","pink")

for color in tuple:
    print(color,end=' ')
    
print("\n")
#by Index
for i in range(len(tuple)):
    print(tuple[i],end=' ')
print("\n") 
#using while loop
i=0
while i<len(tuple):
    print(tuple[i],end=" ")
    i+=1