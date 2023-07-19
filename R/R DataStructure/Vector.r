# R - Vector

vector = c(0:10)
vector1 = c(0:10)

print(vector)

# [ start : end : count]
print(vector[0:5:1])

index <- 5
# Except Index
print(vector[-index])

'Vector Operation :: '
print(vector+vector1)
print(vector*vector1)
print(vector%%vector1)

vector = c(TRUE,FALSE)
vector1 = !vector

'New vector :: '
vector
vector1

'Iteration :: '
count <- 0
for(i in vector){
    cat(count,' ',i)
    count <- count + 1
}