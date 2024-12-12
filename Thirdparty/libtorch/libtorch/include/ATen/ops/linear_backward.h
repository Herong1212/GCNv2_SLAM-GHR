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



#include <ATen/ops/linear_backward_ops.h>

namespace at {


// aten::linear_backward(Tensor self, Tensor grad_output, Tensor weight, bool[3] output_mask) -> (Tensor, Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor> linear_backward(const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, ::std::array<bool,3> output_mask) {
    return at::_ops::linear_backward::call(self, grad_output, weight, output_mask);
}

// aten::linear_backward.out(Tensor self, Tensor grad_output, Tensor weight, bool[3] output_mask, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2) -> (Tensor(a!), Tensor(b!), Tensor(c!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> linear_backward_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, ::std::array<bool,3> output_mask) {
    return at::_ops::linear_backward_out::call(self, grad_output, weight, output_mask, out0, out1, out2);
}
// aten::linear_backward.out(Tensor self, Tensor grad_output, Tensor weight, bool[3] output_mask, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2) -> (Tensor(a!), Tensor(b!), Tensor(c!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> linear_backward_outf(const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, ::std::array<bool,3> output_mask, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2) {
    return at::_ops::linear_backward_out::call(self, grad_output, weight, output_mask, out0, out1, out2);
}

}
