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
TORCH_API at::Tensor & cudnn_affine_grid_generator_out(const at::Tensor & theta, int64_t N, int64_t C, int64_t H, int64_t W, at::Tensor & out);
TORCH_API at::Tensor cudnn_affine_grid_generator_forward(const at::Tensor & theta, int64_t N, int64_t C, int64_t H, int64_t W);
} // namespace native
} // namespace at
