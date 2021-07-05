const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const [a, b, c, d] = input
  .trim()
  .split('\n')
  .map(x => parseInt(x))

console.log(`DIFERENCA = ${a * b - c * d}`)
