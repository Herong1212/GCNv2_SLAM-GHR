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



#include <ATen/ops/view_copy_ops.h>

namespace at {


// aten::view_copy(Tensor self, SymInt[] size) -> Tensor
inline at::Tensor view_copy(const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::view_copy::call(self, c10::fromIntArrayRefSlow(size));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor view_copy(const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::view_copy::call(self, c10::fromIntArrayRefSlow(size));
  }
}

// aten::view_copy(Tensor self, SymInt[] size) -> Tensor
inline at::Tensor view_copy_symint(const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::view_copy::call(self, size);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor view_copy(const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::view_copy::call(self, size);
  }
}

// aten::view_copy.dtype(Tensor self, ScalarType dtype) -> Tensor
inline at::Tensor view_copy(const at::Tensor & self, at::ScalarType dtype) {
    return at::_ops::view_copy_dtype::call(self, dtype);
}

// aten::view_copy.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & view_copy_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::view_copy_out::call(self, c10::fromIntArrayRefSlow(size), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & view_copy_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::view_copy_out::call(self, c10::fromIntArrayRefSlow(size), out);
  }
}

// aten::view_copy.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & view_copy_outf(const at::Tensor & self, at::IntArrayRef size, at::Tensor & out) {
    return at::_ops::view_copy_out::call(self, c10::fromIntArrayRefSlow(size), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & view_copy_outf(const at::Tensor & self, at::IntArrayRef size, at::Tensor & out) {
    return at::_ops::view_copy_out::call(self, c10::fromIntArrayRefSlow(size), out);
  }
}

// aten::view_copy.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & view_copy_symint_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::view_copy_out::call(self, size, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & view_copy_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::view_copy_out::call(self, size, out);
  }
}

// aten::view_copy.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & view_copy_symint_outf(const at::Tensor & self, c10::SymIntArrayRef size, at::Tensor & out) {
    return at::_ops::view_copy_out::call(self, size, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & view_copy_outf(const at::Tensor & self, c10::SymIntArrayRef size, at::Tensor & out) {
    return at::_ops::view_copy_out::call(self, size, out);
  }
}

// aten::view_copy.dtype_out(Tensor self, ScalarType dtype, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & view_copy_out(at::Tensor & out, const at::Tensor & self, at::ScalarType dtype) {
    return at::_ops::view_copy_dtype_out::call(self, dtype, out);
}
// aten::view_copy.dtype_out(Tensor self, ScalarType dtype, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & view_copy_outf(const at::Tensor & self, at::ScalarType dtype, at::Tensor & out) {
    return at::_ops::view_copy_dtype_out::call(self, dtype, out);
}

}