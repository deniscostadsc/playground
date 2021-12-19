const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
});

(() => {
  let s = 0.0
  let c = 0.0

  rl.on('line', (line) => {
    const n = parseFloat(line)

    if (n > 0) {
      s += n
      c++
    }
  })

  rl.on('close', () => {
    console.log(`${c} valores positivos`)
    console.log(`${(s / c).toFixed(1)}`)
  })
})()
