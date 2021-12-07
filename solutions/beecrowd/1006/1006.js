const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const [a, b, c] = input
  .trim()
  .split('\n')
  .map(x => parseFloat(x))

console.log(`MEDIA = ${((a * 2.0 + b * 3.0 + c * 5.0) / 10.0).toFixed(1)}`)
