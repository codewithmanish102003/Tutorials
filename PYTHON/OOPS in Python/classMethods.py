class Employee:

    Company_name = "Apple"

    def show(self):
        print(f"Name: {self.name} age:{self.age} Company Name:{self.Company_name}")
        
    def change_name(self, newName):
        self.Company_name = newName
        print(newName)
        print(self.Company_name)

c1 = Employee()
c1.name="Manish"
c1.age=20
c1.show()
c1.change_name("Tesla")
c1.show()
print(Employee.Company_name)
