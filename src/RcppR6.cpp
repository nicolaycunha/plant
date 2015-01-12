// Generated by RcppR6 (0.1): do not edit by hand
#include <tree2.h>

// [[Rcpp::export]]
ode::test::Lorenz Lorenz__ctor(double sigma, double R, double b) {
  return ode::test::Lorenz(sigma, R, b);
}
// [[Rcpp::export]]
size_t Lorenz__size__get(tree2::RcppR6::RcppR6<ode::test::Lorenz> obj_) {
  return obj_->size();
}

// [[Rcpp::export]]
std::vector<double> Lorenz__ode_values__get(tree2::RcppR6::RcppR6<ode::test::Lorenz> obj_) {
  return obj_->ode_values();
}
// [[Rcpp::export]]
void Lorenz__ode_values__set(tree2::RcppR6::RcppR6<ode::test::Lorenz> obj_, std::vector<double> value) {
  obj_->set_ode_values(value);
}

// [[Rcpp::export]]
std::vector<double> Lorenz__ode_rates__get(tree2::RcppR6::RcppR6<ode::test::Lorenz> obj_) {
  return obj_->r_ode_rates();
}

// [[Rcpp::export]]
Rcpp::NumericVector Lorenz__pars__get(tree2::RcppR6::RcppR6<ode::test::Lorenz> obj_) {
  return obj_->r_get_pars();
}


// [[Rcpp::export]]
ode::OdeSystem<ode::test::Lorenz> OdeSystem___Lorenz__ctor(ode::test::Lorenz obj, double abs_tol, double rel_tol) {
  return ode::OdeSystem<ode::test::Lorenz>(obj, abs_tol, rel_tol);
}
// [[Rcpp::export]]
void OdeSystem___Lorenz__do_step(tree2::RcppR6::RcppR6<ode::OdeSystem<ode::test::Lorenz> > obj_, double dt) {
  obj_->do_step(dt);
}
// [[Rcpp::export]]
bool OdeSystem___Lorenz__try_step(tree2::RcppR6::RcppR6<ode::OdeSystem<ode::test::Lorenz> > obj_, double dt) {
  return obj_->try_step(dt);
}
// [[Rcpp::export]]
void OdeSystem___Lorenz__advance(tree2::RcppR6::RcppR6<ode::OdeSystem<ode::test::Lorenz> > obj_, double t, double dt) {
  obj_->advance(t, dt);
}
// [[Rcpp::export]]
ode::state_saver<std::vector<double> > OdeSystem___Lorenz__advance_save(tree2::RcppR6::RcppR6<ode::OdeSystem<ode::test::Lorenz> > obj_, double t, double dt) {
  return obj_->advance_save(t, dt);
}
// [[Rcpp::export]]
ode::test::Lorenz OdeSystem___Lorenz__obj__get(tree2::RcppR6::RcppR6<ode::OdeSystem<ode::test::Lorenz> > obj_) {
  return obj_->get_obj();
}

// [[Rcpp::export]]
double OdeSystem___Lorenz__t__get(tree2::RcppR6::RcppR6<ode::OdeSystem<ode::test::Lorenz> > obj_) {
  return obj_->t;
}
// [[Rcpp::export]]
void OdeSystem___Lorenz__t__set(tree2::RcppR6::RcppR6<ode::OdeSystem<ode::test::Lorenz> > obj_, double value) {
  obj_->t = value;
}

// [[Rcpp::export]]
std::vector<double> OdeSystem___Lorenz__y__get(tree2::RcppR6::RcppR6<ode::OdeSystem<ode::test::Lorenz> > obj_) {
  return obj_->y;
}
// [[Rcpp::export]]
void OdeSystem___Lorenz__y__set(tree2::RcppR6::RcppR6<ode::OdeSystem<ode::test::Lorenz> > obj_, std::vector<double> value) {
  obj_->y = value;
}


// [[Rcpp::export]]
tree2::CohortScheduleEvent CohortScheduleEvent__ctor(double introduction, util::count species_index) {
  return tree2::CohortScheduleEvent(introduction, species_index);
}
// [[Rcpp::export]]
util::count CohortScheduleEvent__species_index__get(tree2::RcppR6::RcppR6<tree2::CohortScheduleEvent> obj_) {
  return obj_->species_index;
}
// [[Rcpp::export]]
void CohortScheduleEvent__species_index__set(tree2::RcppR6::RcppR6<tree2::CohortScheduleEvent> obj_, util::count value) {
  obj_->species_index = value;
}

// [[Rcpp::export]]
std::vector<double> CohortScheduleEvent__times__get(tree2::RcppR6::RcppR6<tree2::CohortScheduleEvent> obj_) {
  return obj_->times;
}

// [[Rcpp::export]]
double CohortScheduleEvent__time_introduction__get(tree2::RcppR6::RcppR6<tree2::CohortScheduleEvent> obj_) {
  return obj_->time_introduction();
}

// [[Rcpp::export]]
double CohortScheduleEvent__time_end__get(tree2::RcppR6::RcppR6<tree2::CohortScheduleEvent> obj_) {
  return obj_->time_end();
}

// [[Rcpp::export]]
size_t CohortScheduleEvent__species_index_raw__get(tree2::RcppR6::RcppR6<tree2::CohortScheduleEvent> obj_) {
  return obj_->species_index_raw();
}


// [[Rcpp::export]]
tree2::CohortSchedule CohortSchedule__ctor(size_t n_species) {
  return tree2::CohortSchedule(n_species);
}
// [[Rcpp::export]]
tree2::CohortSchedule CohortSchedule__expand(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_, size_t n_extra, std::vector<double> times) {
  return obj_->expand(n_extra, times);
}
// [[Rcpp::export]]
void CohortSchedule__clear_times(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_, util::count species_index) {
  obj_->clear_times(species_index);
}
// [[Rcpp::export]]
void CohortSchedule__clear_ode_times(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  obj_->r_clear_ode_times();
}
// [[Rcpp::export]]
void CohortSchedule__set_times(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_, std::vector<double> times, util::count species_index) {
  obj_->r_set_times(times, species_index);
}
// [[Rcpp::export]]
std::vector<double> CohortSchedule__times(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_, util::count species_index) {
  return obj_->r_times(species_index);
}
// [[Rcpp::export]]
void CohortSchedule__reset(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  obj_->reset();
}
// [[Rcpp::export]]
void CohortSchedule__pop(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  obj_->pop();
}
// [[Rcpp::export]]
tree2::CohortSchedule CohortSchedule__copy(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  return obj_->r_copy();
}
// [[Rcpp::export]]
size_t CohortSchedule__size__get(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  return obj_->size();
}

// [[Rcpp::export]]
size_t CohortSchedule__n_species__get(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  return obj_->get_n_species();
}

// [[Rcpp::export]]
tree2::CohortScheduleEvent CohortSchedule__next_event__get(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  return obj_->next_event();
}

// [[Rcpp::export]]
size_t CohortSchedule__remaining__get(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  return obj_->remaining();
}

// [[Rcpp::export]]
double CohortSchedule__max_time__get(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  return obj_->r_max_time();
}
// [[Rcpp::export]]
void CohortSchedule__max_time__set(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_, double value) {
  obj_->r_set_max_time(value);
}

// [[Rcpp::export]]
std::vector<double> CohortSchedule__ode_times__get(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  return obj_->r_ode_times();
}
// [[Rcpp::export]]
void CohortSchedule__ode_times__set(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_, std::vector<double> value) {
  obj_->r_set_ode_times(value);
}

// [[Rcpp::export]]
bool CohortSchedule__use_ode_times__get(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  return obj_->r_use_ode_times();
}
// [[Rcpp::export]]
void CohortSchedule__use_ode_times__set(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_, bool value) {
  obj_->r_set_use_ode_times(value);
}

// [[Rcpp::export]]
SEXP CohortSchedule__all_times__get(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_) {
  return obj_->r_all_times();
}
// [[Rcpp::export]]
void CohortSchedule__all_times__set(tree2::RcppR6::RcppR6<tree2::CohortSchedule> obj_, SEXP value) {
  obj_->r_set_all_times(value);
}


// [[Rcpp::export]]
tree2::Disturbance Disturbance__ctor(double mean_interval) {
  return tree2::Disturbance(mean_interval);
}
// [[Rcpp::export]]
double Disturbance__density(tree2::RcppR6::RcppR6<tree2::Disturbance> obj_, double time) {
  return obj_->density(time);
}
// [[Rcpp::export]]
double Disturbance__pr_survival(tree2::RcppR6::RcppR6<tree2::Disturbance> obj_, double time) {
  return obj_->pr_survival(time);
}
// [[Rcpp::export]]
double Disturbance__pr_survival_conditional(tree2::RcppR6::RcppR6<tree2::Disturbance> obj_, double time, double time_start) {
  return obj_->pr_survival_conditional(time, time_start);
}
// [[Rcpp::export]]
double Disturbance__cdf(tree2::RcppR6::RcppR6<tree2::Disturbance> obj_, double time) {
  return obj_->cdf(time);
}
// [[Rcpp::export]]
double Disturbance__mean_interval__get(tree2::RcppR6::RcppR6<tree2::Disturbance> obj_) {
  return obj_->r_mean_interval();
}


// [[Rcpp::export]]
SEXP Control__ctor() {
  return Rcpp::wrap(tree2::Control());
}

// [[Rcpp::export]]
SEXP Strategy__ctor() {
  return Rcpp::wrap(tree2::Strategy());
}

// [[Rcpp::export]]
SEXP Parameters__ctor() {
  return Rcpp::wrap(tree2::Parameters());
}
