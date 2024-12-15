class Person:
    # constructor
    def __init__(self,name,occ):
        self.name=name
        self.occ=occ
        
    @classmethod
    def info(self):
        print(f"{self.name} is a {self.occ}")
        
ob = Person("Harry","Developer")
ob.info()