// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// roundProduct
Rcpp::NumericMatrix roundProduct(arma::cube phi, arma::vec beta);
RcppExport SEXP _GSBM_roundProduct(SEXP phiSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(roundProduct(phi, beta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GSBM_roundProduct", (DL_FUNC) &_GSBM_roundProduct, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_GSBM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}