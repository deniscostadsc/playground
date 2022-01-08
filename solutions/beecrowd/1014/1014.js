const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
})

let evenLine = false
let previousLine

;(() => {
  rl.on('line', (line) => {
    const n = parseFloat(line)

    if (evenLine) {
      console.log(`${(previousLine / n).toFixed(3)} km/l`)
    } else {
      previousLine = n
    }

    evenLine = !evenLine
  })
})()
