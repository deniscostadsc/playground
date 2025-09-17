const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const n = parseInt(input.trim())

for (let i = 1; i <= n; i++) {
  console.log(`${i} ${i * i} ${i * i * i}`)
}
