#!/usr/bin/node
const argumentsList = process.argv.slice(2);
const integers = argumentsList.map(arg => parseInt(arg));

if (integers.length === 0 || integers.length === 1) {
  console.log(0);
} else {
  integers.sort((a, b) => b - a);
  console.log(integers[1]);
}
