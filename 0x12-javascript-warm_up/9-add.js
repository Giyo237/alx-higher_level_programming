#!/usr/bin/node
function add(a, b) {
  return a + b;
}

const argument1 = process.argv[2];
const argument2 = process.argv[3];

const number1 = parseInt(argument1);
const number2 = parseInt(argument2);

if (isNaN(number1) || isNaN(number2)) {
  console.log('NaN');
} else {
  const result = add(number1, number2);
  console.log(result);
}
