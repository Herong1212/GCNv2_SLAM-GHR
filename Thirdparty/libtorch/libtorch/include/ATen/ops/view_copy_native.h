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
TORCH_API at::Tensor & view_copy_out_symint(const at::Tensor & self, c10::SymIntArrayRef size, at::Tensor & out);
TORCH_API at::Tensor view_copy_symint(const at::Tensor & self, c10::SymIntArrayRef size);
TORCH_API at::Tensor & view_copy_dtype_out(const at::Tensor & self, at::ScalarType dtype, at::Tensor & out);
TORCH_API at::Tensor view_copy_dtype(const at::Tensor & self, at::ScalarType dtype);
} // namespace native
} // namespace at
