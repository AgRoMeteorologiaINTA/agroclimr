// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// C_pdsi
List C_pdsi(NumericVector P, NumericVector PE, double AWC, int s_yr, int e_yr, int calib_s_yr, int calib_e_yr, bool sc, double K1_1, double K1_2, double K1_3, double K2, double p, double q);
RcppExport SEXP _agroclimr_C_pdsi(SEXP PSEXP, SEXP PESEXP, SEXP AWCSEXP, SEXP s_yrSEXP, SEXP e_yrSEXP, SEXP calib_s_yrSEXP, SEXP calib_e_yrSEXP, SEXP scSEXP, SEXP K1_1SEXP, SEXP K1_2SEXP, SEXP K1_3SEXP, SEXP K2SEXP, SEXP pSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type P(PSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type PE(PESEXP);
    Rcpp::traits::input_parameter< double >::type AWC(AWCSEXP);
    Rcpp::traits::input_parameter< int >::type s_yr(s_yrSEXP);
    Rcpp::traits::input_parameter< int >::type e_yr(e_yrSEXP);
    Rcpp::traits::input_parameter< int >::type calib_s_yr(calib_s_yrSEXP);
    Rcpp::traits::input_parameter< int >::type calib_e_yr(calib_e_yrSEXP);
    Rcpp::traits::input_parameter< bool >::type sc(scSEXP);
    Rcpp::traits::input_parameter< double >::type K1_1(K1_1SEXP);
    Rcpp::traits::input_parameter< double >::type K1_2(K1_2SEXP);
    Rcpp::traits::input_parameter< double >::type K1_3(K1_3SEXP);
    Rcpp::traits::input_parameter< double >::type K2(K2SEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(C_pdsi(P, PE, AWC, s_yr, e_yr, calib_s_yr, calib_e_yr, sc, K1_1, K1_2, K1_3, K2, p, q));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_agroclimr_C_pdsi", (DL_FUNC) &_agroclimr_C_pdsi, 14},
    {NULL, NULL, 0}
};

RcppExport void R_init_agroclimr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
