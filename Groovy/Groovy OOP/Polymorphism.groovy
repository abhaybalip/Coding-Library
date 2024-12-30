// Groovy - OOP - Polymorphism

// Superclass
class Animal {
    void makeSound() {
        println "The animal makes a sound"
    }
}

// Subclass Dog
class Dog extends Animal {
    @Override
    void makeSound() {
        println "The dog says: Woof!"
    }
}

// Subclass Cat
class Cat extends Animal {
    @Override
    void makeSound() {
        println "The cat says: Meow!"
    }
}

def main() {
    Animal myAnimal = new Animal()
    Animal myDog = new Dog()
    Animal myCat = new Cat()

    myAnimal.makeSound()
    myDog.makeSound()
    myCat.makeSound()
}

main()
