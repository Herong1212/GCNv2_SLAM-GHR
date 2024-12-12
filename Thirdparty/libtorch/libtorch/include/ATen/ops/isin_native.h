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
#include <ATen/ops/isin_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_isin_Tensor_Tensor_out : public at::meta::structured_isin_Tensor_Tensor {
void impl(const at::Tensor & elements, const at::Tensor & test_elements, bool assume_unique, bool invert, const at::Tensor & out);
};
struct TORCH_API structured_isin_Tensor_Scalar_out : public at::meta::structured_isin_Tensor_Scalar {
void impl(const at::Tensor & elements, const at::Scalar & test_element, bool assume_unique, bool invert, const at::Tensor & out);
};
struct TORCH_API structured_isin_Scalar_Tensor_out : public at::meta::structured_isin_Scalar_Tensor {
void impl(const at::Scalar & element, const at::Tensor & test_elements, bool assume_unique, bool invert, const at::Tensor & out);
};
} // namespace native
} // namespace at
