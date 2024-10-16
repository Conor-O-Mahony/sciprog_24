# Practical 5

# Exerice 1

To compile and run

```bash
gcc -o Fib Fib.c
./Fib
```

Prompts the user for an integer n and displays the Fibonacci series up to n terms. The "fibstep" function takes pointers to 2 fibonnaci terms such that the 2 most recent fibonnaci terms can be updated iteratively using pass by reference.

The formulae for the Fibonnaci series are:

```math
\begin{align}
F_n = F_{n-1} + F_{n-2} \\
F_0 = 0, \ F_1 = 1 
\end{align}
``` 

# Exercise 2

Requires the math.h library (Linked with the -lm flag). To compile and run

```bash
gcc -o HypTan HypTan.c -lm
./HypTan
```

Computes the Inverse Hyperbolic Tangent function for values between -0.9 and 0.9 with an increment of 0.01 using a Maclaurin series and natual logarithm function approximation and displays the result. Follows by displaying the absolute and relative difference between the outputs of the 2 methods of calculating the inverse hyperbolic tangent.

The hyperbolic arc tangent can be expressed as a Maclaurin series as follows:

```math
arctanh(x) = \sum_{n=0}^{\infty} \frac{x^{2n+1}}{2n+1}, x \in \Re : |x|<1 
```

This approach is utilised in the arctanh1 function. Likewise, the arctanh2 function uses the natural logarithm approach as follows:

```math
arctanh(x) = \frac{1}{2} \left[ \ln(1+x)-\ln(1-x) \right], x \in \Re: |x|<1
```
