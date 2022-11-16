#pragma once

// contains definitions such as a `rust::Vec`.
#include "rust/cxx.h"

#include <cuda.h>

/* #include "nvbit-sys/nvbit_release/core/nvbit.h" */
/* #include "../nvbit-sys/nvbit_release/core/nvbit.h" */
#include <cstddef>
#include <vector>
#include <memory>

// the order is important: this requires cuda.h,
// which can only be correctly included by nvbit.h
//
// we forgot this for a long time
// this file is generated by cxx and contains the shared types between the FFI
// boundary
#include "cxx-test/src/lib.rs.h"

#include "nvbit-sys/nvbit_release/core/channel.hpp"

/* extern "C" */
/* size_t rust_nvbit_get_related_functions() { return 42; } */

extern "C" size_t rust_nvbit_get_related_functions();

/* std::unique_ptr<uint8_t> unique_ptr_works(); */

/* std::unique_ptr<std::vector<CUfunction>>
 * rust_new_nvbit_get_related_functions( */
/* extern "C" rust::Vec<TestCUfunction> rust_new_nvbit_get_related_functions( */
/*     /1* const CUctx_st &ctx, const CUfunc_st &func *1/ */
/*     CUcontext ctx, CUfunction func */
/*     /1* TestCUcontext ctx, TestCUfunction func *1/ */
/* ); */

/* extern "C" rust::Vec<TestCUfunction> rust_new_nvbit_get_related_functions( */
/* extern "C" */ 
/* const std::vector<uint8_t> &rust_nvbit_get_instrs( */
/* extern "C++" */ 
std::unique_ptr<std::vector<uint8_t>> rust_nvbit_get_instrs(
    /* const CUctx_st &ctx, const CUfunc_st &func */
    /* CUcontext ctx, CUfunction func */
    /* TestCUcontext ctx, TestCUfunction func */
);

/* std::unique_ptr<ChannelDev> new_dev_channel(); */

/* std::unique_ptr<ChannelHost> new_host_channel(); */
