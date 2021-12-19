const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
});

(() => {
  let s = 0.0

  rl.on('line', (line) => {
    const [, a, b] = line.split(' ')

    s += parseInt(a) * parseFloat(b)
  })

  rl.on('close', () => {
    console.log(`VALOR A PAGAR: R$ ${s.toFixed(2)}`)
  })
})()
