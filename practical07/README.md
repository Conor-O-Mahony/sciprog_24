# Practical 5

## Exercise 1

To compile and run

```bash
gcc -o euler euler.c -lm
./euler
```

Estimates the value of euler's number by using the following polynomial function
```math
f(x) = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + ...
```
with $x=1$. The user inputs the number of polynomial terms needed and then the polynomial terms and their sum is printed.

When the number of terms is large enough, the factorial term can overflow or the division by the factorial term could underflow. To prevent this, a check is put in place to stop the factorial term from hitting infinity by capping the number of factorial terms calculated by checking that the next factorial term doesn't equal infinity.

## Exercise 2

To compile and run

```bash
gcc -o pointers pointers.c
./pointers
```

Asks the user for an array size, dynamically allocates enough memory for an integer array of that size, fills the array with ones, prints the array and the frees the allocated memory before returning.
