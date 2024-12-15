class Person:
    #class attribute
    name="Jhon"
    age=30
    @classmethod
    def show(self):
        print("The age of Jhon is 30")
        print("My name is",self.name,"and age is",self.age)
    
#object instantiation
ob = Person()
print(ob.name)
ob.show()