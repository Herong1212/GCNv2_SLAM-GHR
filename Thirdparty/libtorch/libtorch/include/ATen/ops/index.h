#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <optional>



#include <ATen/ops/index_ops.h>

namespace at {


// aten::index.Tensor(Tensor self, Tensor?[] indices) -> Tensor
inline at::Tensor index(const at::Tensor & self, const c10::List<::std::optional<at::Tensor>> & indices) {
    return at::_ops::index_Tensor::call(self, indices);
}

// aten::index.Tensor_out(Tensor self, Tensor?[] indices, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & index_out(at::Tensor & out, const at::Tensor & self, const c10::List<::std::optional<at::Tensor>> & indices) {
    return at::_ops::index_Tensor_out::call(self, indices, out);
}
// aten::index.Tensor_out(Tensor self, Tensor?[] indices, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & index_outf(const at::Tensor & self, const c10::List<::std::optional<at::Tensor>> & indices, at::Tensor & out) {
    return at::_ops::index_Tensor_out::call(self, indices, out);
}

}
