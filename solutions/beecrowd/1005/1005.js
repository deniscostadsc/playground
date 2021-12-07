const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const [a, b] = input
  .trim()
  .split('\n')
  .map(x => parseFloat(x))

console.log(`MEDIA = ${((a * 3.5 + b * 7.5) / 11.0).toFixed(5)}`)
