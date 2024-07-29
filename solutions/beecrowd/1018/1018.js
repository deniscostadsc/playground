const input = require('fs').readFileSync('/dev/stdin', 'utf8')
const bills = [100, 50, 20, 10, 5, 2, 1]

let n = parseInt(input.trim())

console.log(n)

for (let i = 0; i < bills.length; i++) {
  console.log(`${Math.trunc(n / bills[i])} nota(s) de R$ ${bills[i]},00`)
  if (n >= bills[i]) {
    n -= bills[i] * Math.trunc(n / bills[i])
  }
}
