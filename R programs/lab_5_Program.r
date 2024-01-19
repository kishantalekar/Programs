f <- function(x) {
2*x^2 + 3*x + 1
}

# Load the Deriv package
library(Deriv)

# Calculate the derivative of f(x) with respect to x
derivative <- Deriv(f, "x")
cat("Derivative of 2x^2 + 3x + 1: ", derivative(2), "\n")

# Load the pracma package
library(pracma)

# Calculate the integral of f(x) from 1 to 2
integral <- integral(f,xmin = 1,xmax = 2)
cat("Integral of 2x^2 + 3x + 1 from 1 to 2: ", integral, "\n")


# output

> # Load the Deriv package
> library(Deriv)
> 
> # Calculate the derivative of f(x) with respect to x
> derivative <- Deriv(f, "x")
> cat("Derivative of 2x^2 + 3x + 1: ", derivative(2), "\n")
Derivative of 2x^2 + 3x + 1:  11 
> 
> # Load the pracma package
> library(pracma)
> 
> # Calculate the integral of f(x) from 1 to 2
> integral <- integral(f,xmin = 1,xmax = 2)
> cat("Integral of 2x^2 + 3x + 1 from 1 to 2: ", integral, "\n")
Integral of 2x^2 + 3x + 1 from 1 to 2:  10.16667 
> f <- function(x) {
+ return (2*x^2 + 3*x + 1)
+ }
> 
> # Load the Deriv package
> library(Deriv)
> 
> # Calculate the derivative of f(x) with respect to x
> derivative <- Deriv(f, "x")