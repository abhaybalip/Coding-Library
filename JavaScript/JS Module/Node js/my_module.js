const my_module = {
    greet: function() {
        console.log('Hello World')
    },

    curr_time: new Date().toLocaleDateString()
}

module.exports = my_module