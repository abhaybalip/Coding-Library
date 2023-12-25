# R - S3 Methode

# function to create class
get_class <- function(int,char,bool) {
    print_data = function() {
        cat('int = ',int, '\n')
        cat('char = ',char, '\n')
        cat('bool = ',bool, '\n')
    }

    # assign objects to class
    value = list(int=int,char=char,bool=bool, print_data=print_data)
    
    # set class type
    class(value) <- 'Test_class'
    
    # return class instance
    return(value)
}

a = get_class(1,'A',TRUE)

a$print_data()