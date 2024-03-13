# Creation of a Mathematics Library

## Description
Create a library called `libmatematica`. This library should contain functions to calculate the sine, cosine, and tangent of an angle in radians. The functions should be declared in a header file `matematica.h` and implemented in an implementation file `matematica.c`. To simplify, utilize the `sin`, `cos`, and `tan` functions defined in `math.h` in the implementation `matematica.c`.

## Required Functions
- `float calcular_seno(float angulo_radianos)`: Computes the sine of the provided angle.
- `float calcular_cosseno(float angulo_radianos)`: Computes the cosine of the provided angle.
- `float calcular_tangente(float angulo_radianos)`: Computes the tangent of the provided angle.

## Example Usage
In the main file (e.g., `main.c`), include the header file `math.h`. Utilize the library functions to calculate the trigonometric values of specific angles. Remember to compile all source files together to create the final executable. This demonstrates how to create and use a modular C library for mathematical calculations.

