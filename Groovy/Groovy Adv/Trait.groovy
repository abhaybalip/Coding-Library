// Groovy - Trait

trait Flyable {
    def fly() {
        println "Flying"
    }
}

class Bird implements Flyable {
    def name

    Bird(String name) {
        this.name = name
    }
}

def bird = new Bird("Eagle")

bird.fly()
