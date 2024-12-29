// Groovy - Conditional Loop

count = 5 

// while loop
while(count >= 0){ 
    println "count = "+count
    count -= 1
}

def colors = ["red", "green", "blue"]

// for loop
for(int i = 0; i < colors.size(); i++){ 
    println "color = ${colors[i]}" 
}

// For-in loop
for(color in colors){
    println "Color: $color"
}
