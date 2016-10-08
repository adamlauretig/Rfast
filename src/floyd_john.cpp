//Author: Manos Papadakis

// This file was generated by compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <vector>
#include "mn.h"

using namespace std;

//[[Rcpp::export]]
std::vector<double> floyd_john(int n,std::vector<double> x){
  i4mat_floyd(n,x);
  return x;
}

RcppExport SEXP Rfast_floyd_john(SEXP nSEXP,SEXP xSEXP){
BEGIN_RCPP
    RObject __result;
    RNGScope __rngScope;
    traits::input_parameter< int >::type n(nSEXP);
    traits::input_parameter< std::vector<double> >::type x(xSEXP);
    __result = wrap(floyd_john(n,x));
    return __result;
END_RCPP
}