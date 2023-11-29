// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dqrng.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// dqset_seed
void dqset_seed(Rcpp::Nullable<Rcpp::IntegerVector> seed, Rcpp::Nullable<Rcpp::IntegerVector> stream);
static SEXP _dqrng_dqset_seed_try(SEXP seedSEXP, SEXP streamSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type stream(streamSEXP);
    dqset_seed(seed, stream);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_dqset_seed(SEXP seedSEXP, SEXP streamSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_dqset_seed_try(seedSEXP, streamSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// dqRNGkind
void dqRNGkind(std::string kind, const std::string& normal_kind);
static SEXP _dqrng_dqRNGkind_try(SEXP kindSEXP, SEXP normal_kindSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< std::string >::type kind(kindSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type normal_kind(normal_kindSEXP);
    dqRNGkind(kind, normal_kind);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_dqRNGkind(SEXP kindSEXP, SEXP normal_kindSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_dqRNGkind_try(kindSEXP, normal_kindSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// dqrunif
Rcpp::NumericVector dqrunif(size_t n, double min, double max);
static SEXP _dqrng_dqrunif_try(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(dqrunif(n, min, max));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_dqrunif(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_dqrunif_try(nSEXP, minSEXP, maxSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// runif
double runif(double min, double max);
static SEXP _dqrng_runif_try(SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(runif(min, max));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_runif(SEXP minSEXP, SEXP maxSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_runif_try(minSEXP, maxSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// dqrnorm
Rcpp::NumericVector dqrnorm(size_t n, double mean, double sd);
static SEXP _dqrng_dqrnorm_try(SEXP nSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(dqrnorm(n, mean, sd));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_dqrnorm(SEXP nSEXP, SEXP meanSEXP, SEXP sdSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_dqrnorm_try(nSEXP, meanSEXP, sdSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rnorm
double rnorm(double mean, double sd);
static SEXP _dqrng_rnorm_try(SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(rnorm(mean, sd));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_rnorm(SEXP meanSEXP, SEXP sdSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_rnorm_try(meanSEXP, sdSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// dqrexp
Rcpp::NumericVector dqrexp(size_t n, double rate);
static SEXP _dqrng_dqrexp_try(SEXP nSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(dqrexp(n, rate));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_dqrexp(SEXP nSEXP, SEXP rateSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_dqrexp_try(nSEXP, rateSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rexp
double rexp(double rate);
static SEXP _dqrng_rexp_try(SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(rexp(rate));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_rexp(SEXP rateSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_rexp_try(rateSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// dqrrademacher
Rcpp::IntegerVector dqrrademacher(size_t n);
static SEXP _dqrng_dqrrademacher_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< size_t >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(dqrrademacher(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_dqrrademacher(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_dqrrademacher_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// dqsample_int
Rcpp::IntegerVector dqsample_int(int m, int n, bool replace, Rcpp::Nullable<Rcpp::NumericVector> probs, int offset);
static SEXP _dqrng_dqsample_int_try(SEXP mSEXP, SEXP nSEXP, SEXP replaceSEXP, SEXP probsSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type replace(replaceSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< int >::type offset(offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(dqsample_int(m, n, replace, probs, offset));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_dqsample_int(SEXP mSEXP, SEXP nSEXP, SEXP replaceSEXP, SEXP probsSEXP, SEXP offsetSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_dqsample_int_try(mSEXP, nSEXP, replaceSEXP, probsSEXP, offsetSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// dqsample_num
Rcpp::NumericVector dqsample_num(double m, double n, bool replace, Rcpp::Nullable<Rcpp::NumericVector> probs, int offset);
static SEXP _dqrng_dqsample_num_try(SEXP mSEXP, SEXP nSEXP, SEXP replaceSEXP, SEXP probsSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type replace(replaceSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< int >::type offset(offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(dqsample_num(m, n, replace, probs, offset));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _dqrng_dqsample_num(SEXP mSEXP, SEXP nSEXP, SEXP replaceSEXP, SEXP probsSEXP, SEXP offsetSEXP) {
    SEXP rcpp_result_gen;
    {
        rcpp_result_gen = PROTECT(_dqrng_dqsample_num_try(mSEXP, nSEXP, replaceSEXP, probsSEXP, offsetSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// generateSeedVectors
Rcpp::List generateSeedVectors(int nseeds, int nwords);
RcppExport SEXP _dqrng_generateSeedVectors(SEXP nseedsSEXP, SEXP nwordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nseeds(nseedsSEXP);
    Rcpp::traits::input_parameter< int >::type nwords(nwordsSEXP);
    rcpp_result_gen = Rcpp::wrap(generateSeedVectors(nseeds, nwords));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _dqrng_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("void(*dqset_seed)(Rcpp::Nullable<Rcpp::IntegerVector>,Rcpp::Nullable<Rcpp::IntegerVector>)");
        signatures.insert("void(*dqRNGkind)(std::string,const std::string&)");
        signatures.insert("Rcpp::NumericVector(*dqrunif)(size_t,double,double)");
        signatures.insert("double(*runif)(double,double)");
        signatures.insert("Rcpp::NumericVector(*dqrnorm)(size_t,double,double)");
        signatures.insert("double(*rnorm)(double,double)");
        signatures.insert("Rcpp::NumericVector(*dqrexp)(size_t,double)");
        signatures.insert("double(*rexp)(double)");
        signatures.insert("Rcpp::IntegerVector(*dqrrademacher)(size_t)");
        signatures.insert("Rcpp::IntegerVector(*dqsample_int)(int,int,bool,Rcpp::Nullable<Rcpp::NumericVector>,int)");
        signatures.insert("Rcpp::NumericVector(*dqsample_num)(double,double,bool,Rcpp::Nullable<Rcpp::NumericVector>,int)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _dqrng_RcppExport_registerCCallable() { 
    R_RegisterCCallable("dqrng", "_dqrng_dqset_seed", (DL_FUNC)_dqrng_dqset_seed_try);
    R_RegisterCCallable("dqrng", "_dqrng_dqRNGkind", (DL_FUNC)_dqrng_dqRNGkind_try);
    R_RegisterCCallable("dqrng", "_dqrng_dqrunif", (DL_FUNC)_dqrng_dqrunif_try);
    R_RegisterCCallable("dqrng", "_dqrng_runif", (DL_FUNC)_dqrng_runif_try);
    R_RegisterCCallable("dqrng", "_dqrng_dqrnorm", (DL_FUNC)_dqrng_dqrnorm_try);
    R_RegisterCCallable("dqrng", "_dqrng_rnorm", (DL_FUNC)_dqrng_rnorm_try);
    R_RegisterCCallable("dqrng", "_dqrng_dqrexp", (DL_FUNC)_dqrng_dqrexp_try);
    R_RegisterCCallable("dqrng", "_dqrng_rexp", (DL_FUNC)_dqrng_rexp_try);
    R_RegisterCCallable("dqrng", "_dqrng_dqrrademacher", (DL_FUNC)_dqrng_dqrrademacher_try);
    R_RegisterCCallable("dqrng", "_dqrng_dqsample_int", (DL_FUNC)_dqrng_dqsample_int_try);
    R_RegisterCCallable("dqrng", "_dqrng_dqsample_num", (DL_FUNC)_dqrng_dqsample_num_try);
    R_RegisterCCallable("dqrng", "_dqrng_RcppExport_validate", (DL_FUNC)_dqrng_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_dqrng_dqset_seed", (DL_FUNC) &_dqrng_dqset_seed, 2},
    {"_dqrng_dqRNGkind", (DL_FUNC) &_dqrng_dqRNGkind, 2},
    {"_dqrng_dqrunif", (DL_FUNC) &_dqrng_dqrunif, 3},
    {"_dqrng_runif", (DL_FUNC) &_dqrng_runif, 2},
    {"_dqrng_dqrnorm", (DL_FUNC) &_dqrng_dqrnorm, 3},
    {"_dqrng_rnorm", (DL_FUNC) &_dqrng_rnorm, 2},
    {"_dqrng_dqrexp", (DL_FUNC) &_dqrng_dqrexp, 2},
    {"_dqrng_rexp", (DL_FUNC) &_dqrng_rexp, 1},
    {"_dqrng_dqrrademacher", (DL_FUNC) &_dqrng_dqrrademacher, 1},
    {"_dqrng_dqsample_int", (DL_FUNC) &_dqrng_dqsample_int, 5},
    {"_dqrng_dqsample_num", (DL_FUNC) &_dqrng_dqsample_num, 5},
    {"_dqrng_generateSeedVectors", (DL_FUNC) &_dqrng_generateSeedVectors, 2},
    {"_dqrng_RcppExport_registerCCallable", (DL_FUNC) &_dqrng_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_dqrng(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
