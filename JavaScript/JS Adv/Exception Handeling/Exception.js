// js - Exception

const { assert } = require("console")

function print(params) {
    console.log(params)
}

function inverse(num){
    // throw exception
    if(num==0){
        throw new Error('infinity error')
    }else{
        return (1/num)
    }
}
function main(){
    try{
        print(inverse(0))
    }catch(e){
        print('Exception occured '+ e)
    }finally{
        print('finally code block')
    }
}
main()