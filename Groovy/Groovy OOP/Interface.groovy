// Groovy - OOP - Interface

// Define the Animal interface
interface Animal {
    void makeSound() // Abstract method
}

// Implementing the Animal interface in the Dog class
class Dog implements Animal {
    @Override
    void makeSound() {
        println "Woof!"
    }
}

// Implementing the Animal interface in the Cat class
class Cat implements Animal {
    @Override
    void makeSound() {
        println "Meow!"
    }
}

def main() {
    Animal dog = new Dog()
    Animal cat = new Cat()

    dog.makeSound()
    cat.makeSound()
}

main()
