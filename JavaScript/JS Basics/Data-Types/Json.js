// js - Json

function print(params) {
    console.log(params)
}

print('Hello World')

data = {
    'name': 'my-name',
    'age': 10,
    'country': 'earth'
}

str_data = JSON.stringify(data)
print('string: '+str_data)

j_data = JSON.parse(str_data)
print('json data: '+j_data)