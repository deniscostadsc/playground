const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
});

(() => {
  rl.on('line', (line) => {
    const [a, b, c] = line.split(' ').map(x => parseInt(x))

    let m = Math.floor((a + b + Math.abs(a - b)) / 2)
    m = Math.floor((m + c + Math.abs(m - c)) / 2)

    console.log(`${m} eh o maior`)
  })
})()
