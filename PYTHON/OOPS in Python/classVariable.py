class Circle:
    pi = 3.14 # class variable

    def Area(self, radius):
        return Circle.pi * radius * radius
    
    def Circumference(self, radius):
        return 2 * Circle.pi * radius
    
C1=Circle()
print(C1.Area(5))
print(C1.Circumference(5))
Circle.pi=3
print(Circle.pi)

 

