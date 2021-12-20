const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
});

(() => {
  rl.on('line', (line) => {
    let a = 0
    let m = 0
    let t = parseInt(line)

    if (t >= 365) {
        a = Math.floor(t / 365)
        t %= 365
    }

    if (t >= 30) {
        m = Math.floor(t / 30)
        t %= 30
    }

    console.log(`${a} ano(s)`)
    console.log(`${m} mes(es)`)
    console.log(`${t} dia(s)`)
  })
})()
