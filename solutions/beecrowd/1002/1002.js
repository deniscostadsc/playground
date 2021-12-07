const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const n = parseFloat(input)
const a = n * n * 3.14159

console.log(`A=${a.toFixed(4)}`)
