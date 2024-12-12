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
TORCH_API at::Tensor multinomial(const at::Tensor & self, int64_t num_samples, bool replacement=false, ::std::optional<at::Generator> generator=::std::nullopt);
TORCH_API at::Tensor & multinomial_out(const at::Tensor & self, int64_t num_samples, bool replacement, ::std::optional<at::Generator> generator, at::Tensor & out);
} // namespace native
} // namespace at