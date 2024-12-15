class Teacher:
    def getName(self,name):
        self.name=name
        
    def show_Details(self):
        print("Nmae :",self.name)
        print(f"{self.name} is a Teacher.")

class Student:
    def getName(self,name):
        self.name=name
        
    def show_Details(self):
        print("Nmae :",self.name)
        print(f"{self.name} is a Student.")

class Person(Student,Teacher):
   print("Hii.....")

        
p=Person()
p.getName("Manish")
p.show_Details()
        
    