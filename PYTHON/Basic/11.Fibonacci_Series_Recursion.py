#fibbonacci Series using Recursion
def Fibbo(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return Fibbo(n-1) + Fibbo(n-2)
    
i=0
num=int(input("Enter How many numbers do you want in fibbonacci Series:"))

while i<=num:
    print(Fibbo(i))
    i+=1
    