const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  terminal: false
})

const bills = [10000, 5000, 2000, 1000, 500, 200]
const coins = [100, 50, 25, 10, 5, 1]

const printChange = (moneyType, moneyUnits, currentValue) => {
  console.log(`${moneyType.toUpperCase()}S:`)

  moneyUnits.forEach((moneyUnit) => {
    const quantity = parseInt(currentValue / moneyUnit)
    currentValue -= quantity * moneyUnit
    console.log(`${quantity} ${moneyType}(s) de R$ ${(moneyUnit / 100).toFixed(2)}`)
  })

  return currentValue
}

;(() => {
  rl.on('line', (line) => {
    let totalValue = parseFloat(line) * 100

    totalValue = printChange('nota', bills, totalValue)
    printChange('moeda', coins, totalValue)
  })
})()
