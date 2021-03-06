\name{Covariance and correlation matrix}
\alias{cova}
\alias{cora}
\title{
Fast covariance and correlation matrix calculation
}

\description{
Fast covariance and correlation matrix calculation.
}

\usage{
cova(x)

cora(x)
}

\arguments{
\item{x}{
A matrix with data. It has to be matrix, if it is data.frame for example the function does not turn it into a matrix.
}
}

\details{
The calculations take place faster than the built-in functions \code{\link{cov}}\code{\link{cor}} as the number of variables increases. For a few tens of variables
This is true if the number of variables is high, say from 500 and above. For less variables, it's better to use the R's built-in function.
We found this method in \href{http://stackoverflow.com/questions/18964837/fast-correlation-in-r-using-c-and-parallelization}{stackoverflow} 
}

\value{
The covariance or correlation matrix.
}

\references{
Shabalin, A.A. (2012). Matrix eQTL: Ultra fast eQTL analysis via large matrix operations. Bioinformatics 28(10): 1353-1358.
}

\author{
Michail Tsagris

R implementation and documentation: Michail Tsagris <mtsagris@yahoo.gr> and Manos Papadakis <papadakm95@gmail.com>.
}

%\note{
  %%  ~~further notes~~
    %}

\seealso{
\code{\link{colVars}, \link{cor}, \link{cov}
}
}

\examples{
x <-matrix( rnorm( 1000 * 700), ncol = 700 )
system.time( s1 <- cor(x) )
system.time( s2 <- cora(x) )
all.equal(s1, s2)


x <- as.matrix(iris[, 1:4])
system.time( for (i in 1:1000) cova(x) )
system.time( for (i in 1:1000) cov(x) )
}

\keyword{ Covariance matrix }
