// Generated by RcppR6 (0.1): do not edit by hand
#ifndef _TREE2_RCPPR6_PRE_HPP_
#define _TREE2_RCPPR6_PRE_HPP_

#include <RcppCommon.h>


namespace tree2 {
namespace RcppR6 {
template <typename T> class RcppR6;
}
}

namespace ode { namespace test { class Lorenz; } }

namespace tree2 { class CohortScheduleEvent; }
namespace tree2 { class CohortSchedule; }
namespace tree2 { class Disturbance; }
namespace tree2 { struct Control; }
namespace tree2 { struct Strategy; }
namespace tree2 { struct Parameters; }

namespace Rcpp {
template <typename T> SEXP wrap(const tree2::RcppR6::RcppR6<T>&);
namespace traits {
template <typename T> class Exporter<tree2::RcppR6::RcppR6<T> >;
}

template <> SEXP wrap(const ode::test::Lorenz&);
template <> ode::test::Lorenz as(SEXP);

template <> SEXP wrap(const ode::OdeSystem<ode::test::Lorenz>&);
template <> ode::OdeSystem<ode::test::Lorenz> as(SEXP);

template <> SEXP wrap(const tree2::CohortScheduleEvent&);
template <> tree2::CohortScheduleEvent as(SEXP);

template <> SEXP wrap(const tree2::CohortSchedule&);
template <> tree2::CohortSchedule as(SEXP);

template <> SEXP wrap(const tree2::Disturbance&);
template <> tree2::Disturbance as(SEXP);

template <> SEXP wrap(const tree2::Control&);
template <> tree2::Control as(SEXP);

template <> SEXP wrap(const tree2::Strategy&);
template <> tree2::Strategy as(SEXP);

template <> SEXP wrap(const tree2::Parameters&);
template <> tree2::Parameters as(SEXP);
}

#endif
