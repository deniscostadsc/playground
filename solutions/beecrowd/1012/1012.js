const readline = require('readline')

const PI = 3.14159

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
})

;(() => {
  rl.on('line', (line) => {
    const [a, b, c] = line.split(' ').map(x => parseFloat(x))

    console.log(`TRIANGULO: ${(a * c / 2).toFixed(3)}`)
    console.log(`CIRCULO: ${(PI * c * c).toFixed(3)}`)
    console.log(`TRAPEZIO: ${(c * ((a + b) / 2)).toFixed(3)}`)
    console.log(`QUADRADO: ${(b * b).toFixed(3)}`)
    console.log(`RETANGULO: ${(a * b).toFixed(3)}`)
  })
})()
