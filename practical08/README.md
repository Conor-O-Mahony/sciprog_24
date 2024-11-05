# Practical 5

## Exercise 1

To compile and run

```bash
gcc -o igcd iterativegcd.c
./igcd
```

Asks the user for 2 integers and returns the Greatest Common Divisor between them using an iterative algorithm. The Greatest Common Divisor between two integers is given by the euclidean algorithm:

```math
GCD(a,b)
\textbf{while} b \neq \textbf{do}
\indent temp=b
\indent b=a \mod b
\indent a=temp
\textbf{end while}
\textbf{return} a
```

## Exercise 2

To compile and run

```bash
gcc -o rgcd recursivegcd.c
./rgcd
```

Asks the user for 2 integers and returns the Greatest Common Divisor between them using an recursive algorithm.
