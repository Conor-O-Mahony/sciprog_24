# Practical 2

## Exercise 1
Requires the math library (Linked with -lm). To compile, run 

```bash
gcc -o Conversion Conversion.c -lm
./Conversion
```

Returns the number of binary digits in the number 6 using the logf function from math.h.

There are 3 binary digits in the number 6. A float can represent 24 binary digits in C (float = 32 bits. 1 sign bit, 8 exponent bits, 23 bit mantissa + 1 implicit leading bit).

## Exercise 2

To compile, run

```bash
gcc -o Sum Sum.c
./Sum
```

Calculates the sum $1 + \frac{1}{2} + \frac{3}{4} + ... + /frac{1}{1000}$, and then the sum $\frac{1}{1000} + \frac{1}{999} + \frac{1}{998} + ... + 1$ and finds the difference between them. 

This is non-zero due to the fact that the limited number of bytes in a float (4 bytes) will result in small rounding errors that accumulate throughout the two sums. Using a larger type such as double (8 bytes) would result in smaller rounding errors and thus a smaller difference between the 2 sums.



