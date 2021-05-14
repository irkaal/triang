// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// Triangular.cpp
doubles dtri_cpp(doubles x, doubles min, doubles max, doubles mode, bool is_log, bool is_scalar);
extern "C" SEXP _triangulr_dtri_cpp(SEXP x, SEXP min, SEXP max, SEXP mode, SEXP is_log, SEXP is_scalar) {
  BEGIN_CPP11
    return cpp11::as_sexp(dtri_cpp(cpp11::as_cpp<cpp11::decay_t<doubles>>(x), cpp11::as_cpp<cpp11::decay_t<doubles>>(min), cpp11::as_cpp<cpp11::decay_t<doubles>>(max), cpp11::as_cpp<cpp11::decay_t<doubles>>(mode), cpp11::as_cpp<cpp11::decay_t<bool>>(is_log), cpp11::as_cpp<cpp11::decay_t<bool>>(is_scalar)));
  END_CPP11
}
// Triangular.cpp
doubles ptri_cpp(doubles q, doubles min, doubles max, doubles mode, bool is_lower_tail, bool is_log_p, bool is_scalar);
extern "C" SEXP _triangulr_ptri_cpp(SEXP q, SEXP min, SEXP max, SEXP mode, SEXP is_lower_tail, SEXP is_log_p, SEXP is_scalar) {
  BEGIN_CPP11
    return cpp11::as_sexp(ptri_cpp(cpp11::as_cpp<cpp11::decay_t<doubles>>(q), cpp11::as_cpp<cpp11::decay_t<doubles>>(min), cpp11::as_cpp<cpp11::decay_t<doubles>>(max), cpp11::as_cpp<cpp11::decay_t<doubles>>(mode), cpp11::as_cpp<cpp11::decay_t<bool>>(is_lower_tail), cpp11::as_cpp<cpp11::decay_t<bool>>(is_log_p), cpp11::as_cpp<cpp11::decay_t<bool>>(is_scalar)));
  END_CPP11
}
// Triangular.cpp
doubles qtri_cpp(doubles p, doubles min, doubles max, doubles mode, bool is_lower_tail, bool is_log_p, bool is_scalar);
extern "C" SEXP _triangulr_qtri_cpp(SEXP p, SEXP min, SEXP max, SEXP mode, SEXP is_lower_tail, SEXP is_log_p, SEXP is_scalar) {
  BEGIN_CPP11
    return cpp11::as_sexp(qtri_cpp(cpp11::as_cpp<cpp11::decay_t<doubles>>(p), cpp11::as_cpp<cpp11::decay_t<doubles>>(min), cpp11::as_cpp<cpp11::decay_t<doubles>>(max), cpp11::as_cpp<cpp11::decay_t<doubles>>(mode), cpp11::as_cpp<cpp11::decay_t<bool>>(is_lower_tail), cpp11::as_cpp<cpp11::decay_t<bool>>(is_log_p), cpp11::as_cpp<cpp11::decay_t<bool>>(is_scalar)));
  END_CPP11
}
// Triangular.cpp
doubles rtri_cpp(int n, double min, double max, double mode);
extern "C" SEXP _triangulr_rtri_cpp(SEXP n, SEXP min, SEXP max, SEXP mode) {
  BEGIN_CPP11
    return cpp11::as_sexp(rtri_cpp(cpp11::as_cpp<cpp11::decay_t<int>>(n), cpp11::as_cpp<cpp11::decay_t<double>>(min), cpp11::as_cpp<cpp11::decay_t<double>>(max), cpp11::as_cpp<cpp11::decay_t<double>>(mode)));
  END_CPP11
}
// Triangular.cpp
doubles rtri_cpp2(int n, doubles min, doubles max, doubles mode);
extern "C" SEXP _triangulr_rtri_cpp2(SEXP n, SEXP min, SEXP max, SEXP mode) {
  BEGIN_CPP11
    return cpp11::as_sexp(rtri_cpp2(cpp11::as_cpp<cpp11::decay_t<int>>(n), cpp11::as_cpp<cpp11::decay_t<doubles>>(min), cpp11::as_cpp<cpp11::decay_t<doubles>>(max), cpp11::as_cpp<cpp11::decay_t<doubles>>(mode)));
  END_CPP11
}
// Triangular.cpp
doubles mgtri_cpp(doubles t, double min, double max, double mode);
extern "C" SEXP _triangulr_mgtri_cpp(SEXP t, SEXP min, SEXP max, SEXP mode) {
  BEGIN_CPP11
    return cpp11::as_sexp(mgtri_cpp(cpp11::as_cpp<cpp11::decay_t<doubles>>(t), cpp11::as_cpp<cpp11::decay_t<double>>(min), cpp11::as_cpp<cpp11::decay_t<double>>(max), cpp11::as_cpp<cpp11::decay_t<double>>(mode)));
  END_CPP11
}
// Triangular.cpp
doubles mgtri_cpp2(doubles t, doubles min, doubles max, doubles mode);
extern "C" SEXP _triangulr_mgtri_cpp2(SEXP t, SEXP min, SEXP max, SEXP mode) {
  BEGIN_CPP11
    return cpp11::as_sexp(mgtri_cpp2(cpp11::as_cpp<cpp11::decay_t<doubles>>(t), cpp11::as_cpp<cpp11::decay_t<doubles>>(min), cpp11::as_cpp<cpp11::decay_t<doubles>>(max), cpp11::as_cpp<cpp11::decay_t<doubles>>(mode)));
  END_CPP11
}
// Triangular.cpp
doubles estri_cpp(doubles p, double min, double max, double mode, bool lower_tail, bool log_p);
extern "C" SEXP _triangulr_estri_cpp(SEXP p, SEXP min, SEXP max, SEXP mode, SEXP lower_tail, SEXP log_p) {
  BEGIN_CPP11
    return cpp11::as_sexp(estri_cpp(cpp11::as_cpp<cpp11::decay_t<doubles>>(p), cpp11::as_cpp<cpp11::decay_t<double>>(min), cpp11::as_cpp<cpp11::decay_t<double>>(max), cpp11::as_cpp<cpp11::decay_t<double>>(mode), cpp11::as_cpp<cpp11::decay_t<bool>>(lower_tail), cpp11::as_cpp<cpp11::decay_t<bool>>(log_p)));
  END_CPP11
}
// Triangular.cpp
doubles estri_cpp2(doubles p, doubles min, doubles max, doubles mode, bool lower_tail, bool log_p);
extern "C" SEXP _triangulr_estri_cpp2(SEXP p, SEXP min, SEXP max, SEXP mode, SEXP lower_tail, SEXP log_p) {
  BEGIN_CPP11
    return cpp11::as_sexp(estri_cpp2(cpp11::as_cpp<cpp11::decay_t<doubles>>(p), cpp11::as_cpp<cpp11::decay_t<doubles>>(min), cpp11::as_cpp<cpp11::decay_t<doubles>>(max), cpp11::as_cpp<cpp11::decay_t<doubles>>(mode), cpp11::as_cpp<cpp11::decay_t<bool>>(lower_tail), cpp11::as_cpp<cpp11::decay_t<bool>>(log_p)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _triangulr_dtri_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _triangulr_estri_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _triangulr_estri_cpp2(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _triangulr_mgtri_cpp(SEXP, SEXP, SEXP, SEXP);
extern SEXP _triangulr_mgtri_cpp2(SEXP, SEXP, SEXP, SEXP);
extern SEXP _triangulr_ptri_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _triangulr_qtri_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _triangulr_rtri_cpp(SEXP, SEXP, SEXP, SEXP);
extern SEXP _triangulr_rtri_cpp2(SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_triangulr_dtri_cpp",   (DL_FUNC) &_triangulr_dtri_cpp,   6},
    {"_triangulr_estri_cpp",  (DL_FUNC) &_triangulr_estri_cpp,  6},
    {"_triangulr_estri_cpp2", (DL_FUNC) &_triangulr_estri_cpp2, 6},
    {"_triangulr_mgtri_cpp",  (DL_FUNC) &_triangulr_mgtri_cpp,  4},
    {"_triangulr_mgtri_cpp2", (DL_FUNC) &_triangulr_mgtri_cpp2, 4},
    {"_triangulr_ptri_cpp",   (DL_FUNC) &_triangulr_ptri_cpp,   7},
    {"_triangulr_qtri_cpp",   (DL_FUNC) &_triangulr_qtri_cpp,   7},
    {"_triangulr_rtri_cpp",   (DL_FUNC) &_triangulr_rtri_cpp,   4},
    {"_triangulr_rtri_cpp2",  (DL_FUNC) &_triangulr_rtri_cpp2,  4},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_triangulr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
