# Practical 4

Requires the math.h library (Linked with the -lm flag). To compile and run

```bash
gcc -o Tan Tan.c -lm
./Integral
```

# Exercise 1

Calculates the values of tan(x) where x is in radians in the range [0, 60] every five degrees. Places the results in an array and prints the array. 

A function degtorad is created to convert degrees to radians, then main loops from 0 to 12 in increments of 1, generates degree angles, converts them to radians, computes tan(x) and stores it in a global array.

# Exercise 2

Computes the integral:

```math
\int_{0}^{\frac{\pi}{3}} \tan(x) dx
```
using the Trapezoidal rule with N=12 steps and compares this to the actual result of $\log(2)$. It does so by using the tanIntegral function which utilises the tanarray from exercise 1. The degtorad function from part 1 can be used to convert the bounds of integration to the required radian values.

The Trapezoidal rule states:

```math
\int_{a}^{b} f(x) dx \sim \frac{b-a}{2N} (f(x_0)+2f(x_1)+2f(x_2)+...+2f(x_{N-1})+f(x_N))
```
where $x_0=a$ and $x_N=b$ with $N-1$ equidistant points between a and b.
