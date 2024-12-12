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
#include <ATen/ops/max_pool2d_with_indices_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_max_pool2d_with_indices_out_cpu : public at::meta::structured_max_pool2d_with_indices {
void impl(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, const at::Tensor & out, const at::Tensor & indices);
};
struct TORCH_API structured_max_pool2d_with_indices_out_cuda : public at::meta::structured_max_pool2d_with_indices {
void impl(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, const at::Tensor & out, const at::Tensor & indices);
};
} // namespace native
} // namespace at
