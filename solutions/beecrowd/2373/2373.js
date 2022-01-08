const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
})

;(() => {
  let totalBrokenglasses = 0
  let firstLine = true

  rl.on('line', (line) => {
    if (firstLine) {
      firstLine = false
      return
    }

    const [l, c] = line.split(' ').map(x => parseInt(x))

    if (l > c) {
      totalBrokenglasses += c
    }
  })

  rl.on('close', () => {
    console.log(`${totalBrokenglasses}`)
  })
})()
