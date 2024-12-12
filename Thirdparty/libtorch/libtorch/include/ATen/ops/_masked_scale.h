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



#include <ATen/ops/_masked_scale_ops.h>

namespace at {


// aten::_masked_scale(Tensor self, Tensor mask, float scale) -> Tensor
inline at::Tensor _masked_scale(const at::Tensor & self, const at::Tensor & mask, double scale) {
    return at::_ops::_masked_scale::call(self, mask, scale);
}

// aten::_masked_scale.out(Tensor self, Tensor mask, float scale, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _masked_scale_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & mask, double scale) {
    return at::_ops::_masked_scale_out::call(self, mask, scale, out);
}
// aten::_masked_scale.out(Tensor self, Tensor mask, float scale, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _masked_scale_outf(const at::Tensor & self, const at::Tensor & mask, double scale, at::Tensor & out) {
    return at::_ops::_masked_scale_out::call(self, mask, scale, out);
}

}