process.stdin.resume()
process.stdin.setEncoding('utf8')

let input = ''

process.stdin.on('data', (chunk: string) => {
  input += chunk
})

process.stdin.on('end', () => {
  const lines = input.trim().split('\n')

  lines.forEach(line => {
    const [v, t] = line.trim().split(' ').map(Number)
    console.log(v * t * 2 + 0) // + 0 to avoid -0 weird behavior
  })
})
