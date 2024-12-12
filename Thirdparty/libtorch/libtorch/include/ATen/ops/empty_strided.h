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



#include <ATen/ops/empty_strided_ops.h>

namespace at {


// aten::empty_strided(SymInt[] size, SymInt[] stride, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor empty_strided(at::IntArrayRef size, at::IntArrayRef stride, at::TensorOptions options={}) {
    return at::_ops::empty_strided::call(c10::fromIntArrayRefSlow(size), c10::fromIntArrayRefSlow(stride), c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor empty_strided(at::IntArrayRef size, at::IntArrayRef stride, at::TensorOptions options={}) {
    return at::_ops::empty_strided::call(c10::fromIntArrayRefSlow(size), c10::fromIntArrayRefSlow(stride), c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
  }
}

// aten::empty_strided(SymInt[] size, SymInt[] stride, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor empty_strided(at::IntArrayRef size, at::IntArrayRef stride, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory) {
    return at::_ops::empty_strided::call(c10::fromIntArrayRefSlow(size), c10::fromIntArrayRefSlow(stride), dtype, layout, device, pin_memory);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor empty_strided(at::IntArrayRef size, at::IntArrayRef stride, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory) {
    return at::_ops::empty_strided::call(c10::fromIntArrayRefSlow(size), c10::fromIntArrayRefSlow(stride), dtype, layout, device, pin_memory);
  }
}

// aten::empty_strided(SymInt[] size, SymInt[] stride, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor empty_strided_symint(c10::SymIntArrayRef size, c10::SymIntArrayRef stride, at::TensorOptions options={}) {
    return at::_ops::empty_strided::call(size, stride, c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor empty_strided(c10::SymIntArrayRef size, c10::SymIntArrayRef stride, at::TensorOptions options={}) {
    return at::_ops::empty_strided::call(size, stride, c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
  }
}

// aten::empty_strided(SymInt[] size, SymInt[] stride, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor empty_strided_symint(c10::SymIntArrayRef size, c10::SymIntArrayRef stride, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory) {
    return at::_ops::empty_strided::call(size, stride, dtype, layout, device, pin_memory);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor empty_strided(c10::SymIntArrayRef size, c10::SymIntArrayRef stride, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory) {
    return at::_ops::empty_strided::call(size, stride, dtype, layout, device, pin_memory);
  }
}

// aten::empty_strided.out(SymInt[] size, SymInt[] stride, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & empty_strided_out(at::Tensor & out, at::IntArrayRef size, at::IntArrayRef stride) {
    return at::_ops::empty_strided_out::call(c10::fromIntArrayRefSlow(size), c10::fromIntArrayRefSlow(stride), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & empty_strided_out(at::Tensor & out, at::IntArrayRef size, at::IntArrayRef stride) {
    return at::_ops::empty_strided_out::call(c10::fromIntArrayRefSlow(size), c10::fromIntArrayRefSlow(stride), out);
  }
}

// aten::empty_strided.out(SymInt[] size, SymInt[] stride, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & empty_strided_outf(at::IntArrayRef size, at::IntArrayRef stride, at::Tensor & out) {
    return at::_ops::empty_strided_out::call(c10::fromIntArrayRefSlow(size), c10::fromIntArrayRefSlow(stride), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & empty_strided_outf(at::IntArrayRef size, at::IntArrayRef stride, at::Tensor & out) {
    return at::_ops::empty_strided_out::call(c10::fromIntArrayRefSlow(size), c10::fromIntArrayRefSlow(stride), out);
  }
}

// aten::empty_strided.out(SymInt[] size, SymInt[] stride, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & empty_strided_symint_out(at::Tensor & out, c10::SymIntArrayRef size, c10::SymIntArrayRef stride) {
    return at::_ops::empty_strided_out::call(size, stride, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & empty_strided_out(at::Tensor & out, c10::SymIntArrayRef size, c10::SymIntArrayRef stride) {
    return at::_ops::empty_strided_out::call(size, stride, out);
  }
}

// aten::empty_strided.out(SymInt[] size, SymInt[] stride, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & empty_strided_symint_outf(c10::SymIntArrayRef size, c10::SymIntArrayRef stride, at::Tensor & out) {
    return at::_ops::empty_strided_out::call(size, stride, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & empty_strided_outf(c10::SymIntArrayRef size, c10::SymIntArrayRef stride, at::Tensor & out) {
    return at::_ops::empty_strided_out::call(size, stride, out);
  }
}

}
