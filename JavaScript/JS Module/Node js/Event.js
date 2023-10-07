// Node js - Event Emitter

const event = require('events');
const { EventEmitter } = require('stream');

class MyEvent extends EventEmitter{
    constructor(){
        super()
    }
    task(){
        this.emit('task-event')
    }
}

var e = new MyEvent()
e.on('task-event',function(){
    console.log('task-event emitted')
})

e.task()