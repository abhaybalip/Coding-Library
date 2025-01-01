// Groovy - Closure

// simple closure
def closure = { println "Hello, World!" }

closure()

// paramerized closure
def closure2 = { name -> println "Hello, $name!" }

closure2("John")
