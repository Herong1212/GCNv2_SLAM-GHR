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
#include <ATen/ops/linalg_qr_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_linalg_qr_out : public at::meta::structured_linalg_qr {
void impl(const at::Tensor & A, c10::string_view mode, const at::Tensor & Q, const at::Tensor & R);
};
} // namespace native
} // namespace at
