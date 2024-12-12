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
TORCH_API at::Tensor & repeat_interleave_Tensor_out_symint(const at::Tensor & repeats, ::std::optional<c10::SymInt> output_size, at::Tensor & out);
TORCH_API at::Tensor repeat_interleave_cpu(const at::Tensor & repeats, ::std::optional<int64_t> output_size=::std::nullopt);
TORCH_API at::Tensor repeat_interleave_cuda(const at::Tensor & repeats, ::std::optional<int64_t> output_size=::std::nullopt);
TORCH_API at::Tensor repeat_interleave_symint(const at::Tensor & self, const at::Tensor & repeats, ::std::optional<int64_t> dim=::std::nullopt, ::std::optional<c10::SymInt> output_size=::std::nullopt);
TORCH_API at::Tensor repeat_interleave_symint(const at::Tensor & self, c10::SymInt repeats, ::std::optional<int64_t> dim=::std::nullopt, ::std::optional<c10::SymInt> output_size=::std::nullopt);
} // namespace native
} // namespace at