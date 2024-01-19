v <- c(10,20,25,60,92)

ll <- list("bca","351",TRUE,"A",25.12,3+4i,40)

ml <- matrix(c(11,22,33,44,55,66),nrow=3,ncol = 2)

a1 <- array(c(1:9),dim=c(3,3,2))

d1 <- data.frame(
  Regno=c(101:105),
  Name=c("seema","Ria","Kiran","Joe","Jim"),
  IAMarks=c(98,85,93,61,74)
)
f1 = factor(c("female","male","male","female"))


print(v)
print(ll)
print(ml)
print(a1)
print(d1)
print(f1)



--output---
  > v <- c(10,20,25,60,92)
> 
  > ll <- list("bca","351",TRUE,"A",25.12,3+4i,40)
> 
  > ml <- matrix(c(11,22,33,44,55,66),nrow=3,ncol = 2)
> 
  > a1 <- array(c(1:9),dim=c(3,3,2))
> 
  > d1 <- data.frame(
    +   Regno=c(101:105),
    +   Name=c("seema","Ria","Kiran","Joe","Jim"),
    +   IAMarks=c(98,85,93,61,74)
    + )
> f1 = factor(c("female","male","male","female"))
> 
  > 
  > print(v)
[1] 10 20 25 60 92
> print(ll)
[[1]]
[1] "bca"

[[2]]
[1] "351"

[[3]]
[1] TRUE

[[4]]
[1] "A"

[[5]]
[1] 25.12

[[6]]
[1] 3+4i

[[7]]
[1] 40

> print(ml)
[,1] [,2]
[1,]   11   44
[2,]   22   55
[3,]   33   66
> print(a1)
, , 1

[,1] [,2] [,3]
[1,]    1    4    7
[2,]    2    5    8
[3,]    3    6    9

, , 2

[,1] [,2] [,3]
[1,]    1    4    7
[2,]    2    5    8
[3,]    3    6    9

> print(d1)
Regno  Name IAMarks
1   101 seema      98
2   102   Ria      85
3   103 Kiran      93
4   104   Joe      61
5   105   Jim      74
> print(f1)
[1] female male   male   female
Levels: female male