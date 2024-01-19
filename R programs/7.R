x <- c(20,10,30,25)
y <- c(2,4,3,1)

sum = x+y

cat("Vector addition : ",sum,"\n")
minus = x - y

cat("vector substraction : ",minus,"\n")

a <- matrix(data=1:9,nrow = 3,ncol = 3)
b <- matrix(data = 1:9,nrow = 3,ncol = 3)

AddMatrix <-a+b
cat("Matrix addition is : ",AddMatrix,"\n")

SubMatrix <- a-b
cat("Matrix substraction is : ",SubMatrix,"\n")

multMatrix <- a %*%b
cat("matrix multiplication is : ",multMatrix,"\n")




------output-------

> x <- c(20,10,30,25)
> y <- c(2,4,3,1)
> 
  > sum = x+y
> 
  > cat("Vector addition : ",sum,"\n")
Vector addition :  22 14 33 26 
> minus = x - y
> 
  > cat("vector substraction : ",minus,"\n")
vector substraction :  18 6 27 24 
> 
  > a <- matrix(data=1:9,nrow = 3,ncol = 3)
> b <- matrix(data = 1:9,nrow = 3,ncol = 3)
> 
  > AddMatrix <-a+b
> cat("Matrix addition is : ",AddMatrix,"\n")
Matrix addition is :  2 4 6 8 10 12 14 16 18 
> 
  > SubMatrix <- a-b
> cat("Matrix substraction is : ",SubMatrix,"\n")
Matrix substraction is :  0 0 0 0 0 0 0 0 0 
> 
  > multMatrix <- a %*%b
> cat("matrix multiplication is : ",multMatrix,"\n")
matrix multiplication is :  30 36 42 66 81 96 102 126 150