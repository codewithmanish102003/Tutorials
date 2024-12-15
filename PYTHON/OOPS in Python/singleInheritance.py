#Parent Class
class Animal:
    def __init__(self):
        pass
        
    def DefAnimal(self):
        print("Animal make sounds!")

 #child class 
class Dog(Animal):
    def make_sound(self):
        print("Dog Is Barking....")
    
dog=Dog()
dog.DefAnimal()
dog.make_sound()