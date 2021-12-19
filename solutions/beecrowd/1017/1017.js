const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const [h, s] = input
  .trim()
  .split('\n')
  .map(x => parseFloat(x))

console.log(`${(h * s / 12.0).toFixed(3)}`)
