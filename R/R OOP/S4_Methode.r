# R - S4 Methode

setClass("person",
    slots = list(
        name = "charater",
        age = "numeric",
        gen = "character"
    ),
    contains = 
)

p <- new("person", name = "abhay", age = 19, gen = "M")

p@name
