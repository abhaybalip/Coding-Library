# R - ControlStatement

b = TRUE

# if - else if
if(b & FALSE){
    print('value is true')
}else{
    print('value is false')
}

# while loop
count <- 3
while(count>0){
    print(count)
    count = count -1
}

# for loop
str = 'Name n'
for(i in count){
    cat(i,sep='\n')
}

# repeat loop
count <- 0
repeat{
    print(count)
    count <- count+1
    if(count>5){
        break
    }
}