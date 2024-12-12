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
TORCH_API at::Tensor _padded_dense_to_jagged_forward_cpu(const at::Tensor & dense, at::TensorList offsets, ::std::optional<int64_t> total_L=::std::nullopt);
TORCH_API at::Tensor _fbgemm_dense_to_jagged_forward_symint(const at::Tensor & dense, at::TensorList offsets, ::std::optional<c10::SymInt> total_L=::std::nullopt);
} // namespace native
} // namespace at
