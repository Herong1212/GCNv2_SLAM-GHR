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
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> linalg_svd(const at::Tensor & A, bool full_matrices=true, ::std::optional<c10::string_view> driver=::std::nullopt);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> linalg_svd_out(const at::Tensor & A, bool full_matrices, ::std::optional<c10::string_view> driver, at::Tensor & U, at::Tensor & S, at::Tensor & Vh);
} // namespace native
} // namespace at
