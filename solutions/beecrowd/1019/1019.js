const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
});

(() => {
  rl.on('line', (line) => {
    let n = parseInt(line)
    let h = 0
    let m = 0

    if (n >= 60 * 60) {
      h = Math.floor(n / (60 * 60))
      n %= 60 * 60
    }
    if (n >= 60) {
      m = Math.floor(n / 60)
      n %= 60
    }

    console.log(`${h}:${m}:${n}`)
  })
})()
