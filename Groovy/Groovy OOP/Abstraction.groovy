// Groovy - OOP - Abstration

// Abstract class
abstract class Animal {

    abstract void makeSound()

    void sleep() {
        println "Zzz"
    }
}

// Subclass Dog
class Dog extends Animal {
    @Override
    void makeSound() {
        println "Woof"
    }
}

// Subclass Cat
class Cat extends Animal {
    @Override
    void makeSound() {
        println "Meow"
    }
}

def main() {
    Animal dog = new Dog()
    Animal cat = new Cat()

    dog.makeSound()
    cat.makeSound()

    dog.sleep()
    cat.sleep()
}

main()
