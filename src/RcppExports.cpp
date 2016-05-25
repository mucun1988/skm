// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// col_min_idx
arma::uword col_min_idx(const arma::colvec& u, const arma::ucolvec& wlmt);
RcppExport SEXP skm_col_min_idx(SEXP uSEXP, SEXP wlmtSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::colvec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::ucolvec& >::type wlmt(wlmtSEXP);
    __result = Rcpp::wrap(col_min_idx(u, wlmt));
    return __result;
END_RCPP
}
// col_max_idx
arma::uword col_max_idx(const arma::colvec& u, const arma::ucolvec& wlmt);
RcppExport SEXP skm_col_max_idx(SEXP uSEXP, SEXP wlmtSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::colvec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::ucolvec& >::type wlmt(wlmtSEXP);
    __result = Rcpp::wrap(col_max_idx(u, wlmt));
    return __result;
END_RCPP
}
// col_min_val
double col_min_val(const arma::colvec& u, const arma::ucolvec& wlmt);
RcppExport SEXP skm_col_min_val(SEXP uSEXP, SEXP wlmtSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::colvec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::ucolvec& >::type wlmt(wlmtSEXP);
    __result = Rcpp::wrap(col_min_val(u, wlmt));
    return __result;
END_RCPP
}
// col_max_val
double col_max_val(const arma::colvec& u, const arma::ucolvec& wlmt);
RcppExport SEXP skm_col_max_val(SEXP uSEXP, SEXP wlmtSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::colvec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::ucolvec& >::type wlmt(wlmtSEXP);
    __result = Rcpp::wrap(col_max_val(u, wlmt));
    return __result;
END_RCPP
}
// col_rgn_val
double col_rgn_val(const arma::colvec& u, const arma::ucolvec& wlmt);
RcppExport SEXP skm_col_rgn_val(SEXP uSEXP, SEXP wlmtSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::colvec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::ucolvec& >::type wlmt(wlmtSEXP);
    __result = Rcpp::wrap(col_rgn_val(u, wlmt));
    return __result;
END_RCPP
}
// skm_mlp_cpp
Rcpp::List skm_mlp_cpp(const arma::mat& x, const arma::uword k, const arma::uvec& s_must, const arma::uword max_it, const arma::uword max_at);
RcppExport SEXP skm_skm_mlp_cpp(SEXP xSEXP, SEXP kSEXP, SEXP s_mustSEXP, SEXP max_itSEXP, SEXP max_atSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type s_must(s_mustSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type max_it(max_itSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type max_at(max_atSEXP);
    __result = Rcpp::wrap(skm_mlp_cpp(x, k, s_must, max_it, max_at));
    return __result;
END_RCPP
}
// skmRpl_mlp_cpp
Rcpp::List skmRpl_mlp_cpp(const NumericMatrix x, const unsigned int k, const IntegerVector s_must, const unsigned int max_it, const unsigned int max_at, const unsigned int skmRpl_GS);
RcppExport SEXP skm_skmRpl_mlp_cpp(SEXP xSEXP, SEXP kSEXP, SEXP s_mustSEXP, SEXP max_itSEXP, SEXP max_atSEXP, SEXP skmRpl_GSSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type s_must(s_mustSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type max_it(max_itSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type max_at(max_atSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type skmRpl_GS(skmRpl_GSSEXP);
    __result = Rcpp::wrap(skmRpl_mlp_cpp(x, k, s_must, max_it, max_at, skmRpl_GS));
    return __result;
END_RCPP
}
