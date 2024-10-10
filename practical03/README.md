# Practical 3

# Exercise

Requires the math.h library (Linked with the -lm flag). To compile and run

```bash
gcc -o Integral Integral.c -lm
./Integral
```

Computes the integral:

```math
\int_{0}^{\frac{\pi}{3}} \tan(x) dx
```
using the Trapezoidal rule with N=12 steps and compares this to the actual result of $\log(2)$.

The Trapezoidal rule states:

```math
\int_{a}^{b} f(x) dx ~ \frac{b-a}{2N} (f(x_0)+2f(x_1)+2f(x_2)+...+2f(x_{N-1})+f(x_N))
```
where $x_0=a$ and $x_N=b$ with $N-1$ equidistant points between a and b.
