const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const n = parseInt(input.trim())

console.log(`${Math.floor(150 / 60) * n} minutos`)
