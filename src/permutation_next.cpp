//Author: Manos Papadakis

// This file was generated by compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <algorithm>

using namespace Rcpp;
using namespace std;
using namespace arma;

//[[Rcpp::export]]
mat permutation_next(rowvec x,bool all_next=true){
  mat F;
  unsigned int nrows=1,ncols=x.size();
  if(all_next)
    do{
      F.resize(nrows,ncols);
      F.row(nrows-1)=x;
      nrows++;
    }while(next_permutation(x.begin(),x.end()));
  else{
    F.resize(nrows,ncols);
    F.row(nrows-1)=x;
    next_permutation(x.begin(),x.end());
  }
  return F;
}

RcppExport SEXP Rfast_permutation_next(SEXP xSEXP,SEXP all_nextSEXP){
BEGIN_RCPP
    RObject __result;
    RNGScope __rngScope;
    traits::input_parameter< rowvec >::type x(xSEXP);
    traits::input_parameter< bool >::type all_next(all_nextSEXP);
    __result = wrap(permutation_next(x,all_next));
    return __result;
END_RCPP
}
