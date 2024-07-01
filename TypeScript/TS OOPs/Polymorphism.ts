interface MakesSound {
    makeSound(): string
}

class Animal implements MakesSound {
    makeSound(): string {
        return "Generic animal sound"
    }
}

class Dog extends Animal {
    makeSound(): string {
        return "Woof!"
    }
}

class Cat extends Animal {
    makeSound(): string {
        return "Meow!"
    }
}

function playSound(animal: MakesSound) {
    console.log(animal.makeSound())
}

const d = new Dog()
const c = new Cat()

playSound(d)
playSound(c)

