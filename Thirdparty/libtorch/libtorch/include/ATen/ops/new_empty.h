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



#include <ATen/ops/new_empty_ops.h>

namespace at {


namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor new_empty(const at::Tensor & self, at::IntArrayRef size, at::TensorOptions options={}) {
    return at::_ops::new_empty::call(self, c10::fromIntArrayRefSlow(size), c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
  }
}

namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor new_empty(const at::Tensor & self, at::IntArrayRef size, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory) {
    return at::_ops::new_empty::call(self, c10::fromIntArrayRefSlow(size), dtype, layout, device, pin_memory);
  }
}

namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor new_empty(const at::Tensor & self, c10::SymIntArrayRef size, at::TensorOptions options={}) {
    return at::_ops::new_empty::call(self, size, c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
  }
}

namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor new_empty(const at::Tensor & self, c10::SymIntArrayRef size, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory) {
    return at::_ops::new_empty::call(self, size, dtype, layout, device, pin_memory);
  }
}

// aten::new_empty.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & new_empty_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::new_empty_out::call(self, c10::fromIntArrayRefSlow(size), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & new_empty_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::new_empty_out::call(self, c10::fromIntArrayRefSlow(size), out);
  }
}

// aten::new_empty.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & new_empty_outf(const at::Tensor & self, at::IntArrayRef size, at::Tensor & out) {
    return at::_ops::new_empty_out::call(self, c10::fromIntArrayRefSlow(size), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & new_empty_outf(const at::Tensor & self, at::IntArrayRef size, at::Tensor & out) {
    return at::_ops::new_empty_out::call(self, c10::fromIntArrayRefSlow(size), out);
  }
}

// aten::new_empty.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & new_empty_symint_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::new_empty_out::call(self, size, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & new_empty_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::new_empty_out::call(self, size, out);
  }
}

// aten::new_empty.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & new_empty_symint_outf(const at::Tensor & self, c10::SymIntArrayRef size, at::Tensor & out) {
    return at::_ops::new_empty_out::call(self, size, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & new_empty_outf(const at::Tensor & self, c10::SymIntArrayRef size, at::Tensor & out) {
    return at::_ops::new_empty_out::call(self, size, out);
  }
}

}
