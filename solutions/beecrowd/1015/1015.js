const input = require('fs').readFileSync('/dev/stdin', 'utf8')

const [line1, line2] = input
  .trim()
  .split('\n')
const [x1, y1] = line1.split(' ').map(x => parseFloat(x))
const [x2, y2] = line2.split(' ').map(x => parseFloat(x))

const distance = Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2))

console.log(`${distance.toFixed(4)}`)
