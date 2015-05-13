% Generated by roxygen2 (4.1.0): do not edit by hand
% Please edit documentation in R/util_model.R
\name{strategy_list}
\alias{plant_list}
\alias{strategy_default}
\alias{strategy_list}
\title{Create a list of Strategies}
\usage{
strategy_list(x, parameters)

strategy_default(parameters)

plant_list(x, parameters)
}
\arguments{
\item{x}{Values for the trait.  This must be a \emph{matrix}, with
column names corresponding to entries in \code{Strategy} and rows
representing different values.}

\item{parameters}{\code{\link{FFW16_Parameters}} object containing
default strategy to modify, plus an optional
hyperparameterisation (see \code{\link{make_FFW16_hyperpar}}).}
}
\description{
Create a list of Strategies or Plants by varying a single trait.
}
