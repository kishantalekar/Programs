#1
x <- c(20,10,30,40)
y <- c(1.2,2.4,0.5)

cumsum(x)
cumsum(y)


p <- c(20,10,30,40)
q <- c(1.2,2.4,0.5)
cumprod(p)
cumprod(q)

a <- c(3,6,4,2,6,7)
b <- c(-4,6,3)
cummin(a)
cummin(b)


y <- c(5,3,2,6,3,4)
s <- c(-4,6,3)

cummax(y)
cummax((s))



----output----
  > x <- c(20,10,30,40)
> y <- c(1.2,2.4,0.5)
> 
  > cumsum(x)
[1]  20  30  60 100
> cumsum(y)
[1] 1.2 3.6 4.1
> 
  > 
  > p <- c(20,10,30,40)
> q <- c(1.2,2.4,0.5)
> cumprod(p)
[1]     20    200   6000 240000
> cumprod(q)
[1] 1.20 2.88 1.44
> 
  > a <- c(3,6,4,2,6,7)
> b <- c(-4,6,3)
> cummin(a)
[1] 3 3 3 2 2 2
> cummin(b)
[1] -4 -4 -4
> 
  > 
  > y <- c(5,3,2,6,3,4)
> s <- c(-4,6,3)
> 
  > cummax(y)
[1] 5 5 5 6 6 6
> cummax((s))
[1] -4  6  6

#____

#2
f <- expression(3*x^2+10*x+2)
D(f,'x')

fd <- D(f,'x')
x <- seq(-10,10,by=.1)
plot(x,eval(f),type = "l")
lines(x,eval(fd),col="blue")
abline(h=0,col="green")


#3
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