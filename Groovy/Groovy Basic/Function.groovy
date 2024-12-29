// Groovy - Function

// function def
void main() {
    println "running main function"
}
main()

// parameterised function
int factorial(int num){
    if(num>0){
        int ans = 1
        while(num>=1){
            ans *= num
            num--
        }
        return ans
    }
}
println factorial(5)

// default param
void test(int num=10){
    println num
}
test()
