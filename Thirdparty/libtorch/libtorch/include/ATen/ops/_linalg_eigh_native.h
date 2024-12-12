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
#include <ATen/ops/_linalg_eigh_meta.h>

namespace at {
namespace native {
struct TORCH_API structured__linalg_eigh_out : public at::meta::structured__linalg_eigh {
void impl(const at::Tensor & A, c10::string_view UPLO, bool compute_v, const at::Tensor & eigenvalues, const at::Tensor & eigenvectors);
};
} // namespace native
} // namespace at