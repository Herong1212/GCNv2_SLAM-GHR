#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <optional>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> unique_dim_out(const at::Tensor & self, int64_t dim, bool sorted, bool return_inverse, bool return_counts, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> unique_dim_cpu(const at::Tensor & self, int64_t dim, bool sorted=true, bool return_inverse=false, bool return_counts=false);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> unique_dim_cuda(const at::Tensor & self, int64_t dim, bool sorted=true, bool return_inverse=false, bool return_counts=false);
} // namespace native
} // namespace at