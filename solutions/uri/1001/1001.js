const input = require('fs').readFileSync('/dev/stdin', 'utf8');

const sum = input.
    trim().
    split("\n").
    map(x => parseInt(x)).
    reduce((acc, value) => acc + value);

console.log(`X = ${sum}`);
