// Groovy - Exception Try-Catch

import java.io.*;

try {
    
    def file = new File("example.txt")

    if (file.exists()) {
        file.eachLine { line ->
            println line
        }
    } else {
        println "File does not exist: ${file.name}"
    }
}
catch (Exception ex){
    println "Exception occured"
}
