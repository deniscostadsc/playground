process.stdin.resume()
process.stdin.setEncoding('utf8')

let input = ''

process.stdin.on('data', (chunk: string) => {
  input += chunk
})

process.stdin.on('end', () => {
  const lines = input.trim().split('\n')

  lines.forEach(line => {
    const [first, last] = line.split(/\s+/).map(Number)

    console.log((last - first + 1) * (first + last) / 2)
  })
})
