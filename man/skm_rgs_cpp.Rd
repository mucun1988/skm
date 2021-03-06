% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/skm_cpp_rd.r
\name{skm_rgs_cpp}
\alias{skm_rgs_cpp}
\title{skm_rgs_cpp}
\usage{
skm_rgs_cpp(x, k, g, s_must, max_it)
}
\arguments{
\item{x}{an m x n matrix often m < n, as a convention index rows of x with s, and
cols of x with t so x(i, j) can be expressed as (s_i, t_j) equally.}

\item{k}{number of index to be selected from x row index start from 0.}

\item{g}{stratify structure, often info on grouping of v so that algorithm should
make random initialization from stratified sample across groups.}

\item{s_must}{an index vector set should be selected before selecting other index.}

\item{max_it}{max number of iterations can run for optimizing result.
max number of iterations within a single initial run on optimal path.}
}
\value{
skmSolution
}
\description{
solve skm with single and random size k s_init stratified sampled w.r.t g
}
\details{
refer skm_sgl_cpp
}
\seealso{
Other skm: \code{\link{skm_mlp_cpp}},
  \code{\link{skm_mls_cpp}}, \code{\link{skm_rgi_cpp}},
  \code{\link{skm_sgl_cpp}}
}

