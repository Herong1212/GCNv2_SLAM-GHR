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



#include <ATen/ops/_spdiags_ops.h>

namespace at {


// aten::_spdiags(Tensor diagonals, Tensor offsets, int[] shape, Layout? layout=None) -> Tensor
inline at::Tensor _spdiags(const at::Tensor & diagonals, const at::Tensor & offsets, at::IntArrayRef shape, ::std::optional<at::Layout> layout=::std::nullopt) {
    return at::_ops::_spdiags::call(diagonals, offsets, shape, layout);
}

// aten::_spdiags.out(Tensor diagonals, Tensor offsets, int[] shape, Layout? layout=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _spdiags_out(at::Tensor & out, const at::Tensor & diagonals, const at::Tensor & offsets, at::IntArrayRef shape, ::std::optional<at::Layout> layout=::std::nullopt) {
    return at::_ops::_spdiags_out::call(diagonals, offsets, shape, layout, out);
}
// aten::_spdiags.out(Tensor diagonals, Tensor offsets, int[] shape, Layout? layout=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _spdiags_outf(const at::Tensor & diagonals, const at::Tensor & offsets, at::IntArrayRef shape, ::std::optional<at::Layout> layout, at::Tensor & out) {
    return at::_ops::_spdiags_out::call(diagonals, offsets, shape, layout, out);
}

}
