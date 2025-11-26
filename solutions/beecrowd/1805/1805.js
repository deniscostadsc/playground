const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
})

const main = () => {
  rl.on('line', (line) => {
    const [first, last] = line.split(' ').map(BigInt)
    const result = (last - first + 1n) * (first + last) / 2n

    console.log(result.toString())
  })
}

main()
