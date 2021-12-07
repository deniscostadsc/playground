const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const prod = input
  .trim()
  .split('\n')
  .map(x => parseInt(x))
  .reduce((acc, value) => acc * value)

console.log(`PROD = ${prod}`)
