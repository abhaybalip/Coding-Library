# R - Function

print('Hello World')

sum <- function(a,b){
    print(a+b)
}
sum(1,2)

table <- function(num){
    for(i in 0:5){
        print(i*num)
    }
    print('')
}
table(10)

test <- function(a=10){
    print(a)
}
test(a=100)

class(test)