const readline = require('readline')

const PI = 3.14159

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
})

rl.on('line', function (line) {
  console.log(`VOLUME = ${(4.0 / 3.0 * PI * Math.pow(parseInt(line), 3)).toFixed(3)}`)
})
