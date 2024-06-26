# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

dqset_seed <- function(seed, stream = NULL) {
    invisible(.Call(`_dqrng_dqset_seed`, seed, stream))
}

#' @rdname dqrng-functions
#' @export
dqRNGkind <- function(kind, normal_kind = "ignored") {
    invisible(.Call(`_dqrng_dqRNGkind`, kind, normal_kind))
}

#' @rdname dqrng-functions
#' @export
dqrng_get_state <- function() {
    .Call(`_dqrng_dqrng_get_state`)
}

#' @rdname dqrng-functions
#' @export
dqrng_set_state <- function(state) {
    invisible(.Call(`_dqrng_dqrng_set_state`, state))
}

#' @rdname dqrng-functions
#' @export
dqrunif <- function(n, min = 0.0, max = 1.0) {
    .Call(`_dqrng_dqrunif`, n, min, max)
}

runif <- function(min = 0.0, max = 1.0) {
    .Call(`_dqrng_runif`, min, max)
}

#' @rdname dqrng-functions
#' @export
dqrnorm <- function(n, mean = 0.0, sd = 1.0) {
    .Call(`_dqrng_dqrnorm`, n, mean, sd)
}

rnorm <- function(mean = 0.0, sd = 1.0) {
    .Call(`_dqrng_rnorm`, mean, sd)
}

#' @rdname dqrng-functions
#' @export
dqrexp <- function(n, rate = 1.0) {
    .Call(`_dqrng_dqrexp`, n, rate)
}

rexp <- function(rate = 1.0) {
    .Call(`_dqrng_rexp`, rate)
}

#' @keywords internal
get_rng <- function() {
    .Call(`_dqrng_get_rng`)
}

#' @rdname dqrng-functions
#' @export
dqrrademacher <- function(n) {
    .Call(`_dqrng_dqrrademacher`, n)
}

dqsample_int <- function(n, size, replace = FALSE, probs = NULL, offset = 0L) {
    .Call(`_dqrng_dqsample_int`, n, size, replace, probs, offset)
}

dqsample_num <- function(n, size, replace = FALSE, probs = NULL, offset = 0L) {
    .Call(`_dqrng_dqsample_num`, n, size, replace, probs, offset)
}

#' Generate seed as a integer vector
#'
#' @param nseeds Integer scalar, number of seeds to generate.
#' @param nwords Integer scalar, number of words to generate per seed. 
#'
#' @return
#' A list of length \code{n}, where each element is an integer vector that
#' contains \code{nwords} words (i.e., \code{32*nwords} bits) of randomness.
#'
#' @details
#' Each seed is encoded as an integer vector with the most significant bits
#' at the start of the vector. Each integer vector is converted into an
#' unsigned integer (in C++ or otherwise) by the following procedure:
#' \enumerate{
#' \item Start with a sum of zero.
#' \item Add the first value of the vector.
#' \item Left-shift the sum by 32.
#' \item Add the next value of the vector, and repeat.
#' }
#' 
#' The aim is to facilitate R-level generation of seeds with sufficient 
#' randomness to cover the entire state space of pseudo-random number 
#' generators that require more than the ~32 bits available in an  
#' \code{int}. It also preserves the integer nature of the seed, thus
#' avoiding problems with casting double-precision numbers to integers.
#'
#' It is possible for the seed vector to contain \code{NA_integer_}
#' values. This should not be cause for alarm, as R uses \code{-INT_MAX} 
#' to encode missing values in integer vectors. 
#' 
#' @author Aaron Lun
#'
#' @examples
#' generateSeedVectors(10, 2)
#'
#' generateSeedVectors(5, 4)
#'
#' @export
generateSeedVectors <- function(nseeds, nwords = 2L) {
    .Call(`_dqrng_generateSeedVectors`, nseeds, nwords)
}

# Register entry points for exported C++ functions
methods::setLoadAction(function(ns) {
    .Call(`_dqrng_RcppExport_registerCCallable`)
})
