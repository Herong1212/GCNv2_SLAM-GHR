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
TORCH_API at::Tensor to_sparse(const at::Tensor & self, int64_t sparse_dim);
TORCH_API at::Tensor to_sparse(const at::Tensor & self, ::std::optional<at::Layout> layout=::std::nullopt, at::OptionalIntArrayRef blocksize=::std::nullopt, ::std::optional<int64_t> dense_dim=::std::nullopt);
} // namespace native
} // namespace at