# Practical 8

## Exercise 1

To compile and run

```bash
gcc -o igcd iterativegcd.c
./igcd
```

Asks the user for 2 integers and returns the Greatest Common Divisor between them using an iterative algorithm. The Greatest Common Divisor between two integers is given by the euclidean algorithm:

```plantext
GCD(a, b)
while b ≠ 0 do
    temp = b
    b = a mod b
    a = temp
end while
return a
```

## Exercise 2

To compile and run

```bash
gcc -o rgcd recursivegcd.c
./rgcd
```

Asks the user for 2 integers and returns the Greatest Common Divisor between them using an recursive algorithm.
