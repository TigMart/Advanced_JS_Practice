const fibonacci = function (num) {
  if (num <= 0) return 0;
  if (num <= 2) return 1;
  return fibonacci(num - 2) + fibonacci(num - 1);
};

console.log(fibonacci(6));

const Fib = function f(num) {
  let cache = [];

  if (num <= 0) return 0;
  if (num <= 2) return 1;

  if (!cache[num]) {
    cache[num] = f(num - 2) + f(num - 1);
  }
  return cache[num];
};

console.log(Fib(6));
