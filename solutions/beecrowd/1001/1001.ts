process.stdin.resume()
process.stdin.setEncoding('utf8')

let input = ''

process.stdin.on('data', (chunk: string) => {
  input += chunk
})

process.stdin.on('end', () => {
  const lines = input.trim().split('\n')
  const [a, b] = lines.map((x) => parseInt(x))

  const sum = a + b

  console.log(`X = ${sum}`)
})
