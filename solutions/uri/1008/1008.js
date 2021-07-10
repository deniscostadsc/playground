const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const [_a, _b, _c] = input
  .trim()
  .split('\n')
const [a, b] = [_a, _b].map(x => parseInt(x))
const c = parseFloat(_c)

console.log(`NUMBER = ${parseInt(a)}`);
console.log(`SALARY = U$ ${(b * c).toFixed(2)}`);
