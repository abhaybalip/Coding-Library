# R - Function

greet <- function() {
    print("Hello")
}

greet()

power <- function(x = 1) {
    result <- 1
    while (x > 0) {
        result <- result * x
        x <- x - 1
    }
    return(result)
}

print(power(x = 5))
print(power())