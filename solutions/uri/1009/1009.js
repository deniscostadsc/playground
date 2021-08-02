const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const [_a, _b, _c] = input
  .trim()
  .split('\n')
const [b, c] = [_b, _c].map(x => parseFloat(x))

console.log(`TOTAL = R$ ${(b + (c * 0.15)).toFixed(2)}`)
