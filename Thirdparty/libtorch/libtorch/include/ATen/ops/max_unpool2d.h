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



#include <ATen/ops/max_unpool2d_ops.h>

namespace at {


// aten::max_unpool2d.out(Tensor self, Tensor indices, SymInt[2] output_size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & max_unpool2d_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size) {
    return at::_ops::max_unpool2d_out::call(self, indices, c10::fromIntArrayRefSlow(output_size), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & max_unpool2d_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size) {
    return at::_ops::max_unpool2d_out::call(self, indices, c10::fromIntArrayRefSlow(output_size), out);
  }
}

// aten::max_unpool2d.out(Tensor self, Tensor indices, SymInt[2] output_size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & max_unpool2d_outf(const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size, at::Tensor & out) {
    return at::_ops::max_unpool2d_out::call(self, indices, c10::fromIntArrayRefSlow(output_size), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & max_unpool2d_outf(const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size, at::Tensor & out) {
    return at::_ops::max_unpool2d_out::call(self, indices, c10::fromIntArrayRefSlow(output_size), out);
  }
}

// aten::max_unpool2d.out(Tensor self, Tensor indices, SymInt[2] output_size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & max_unpool2d_symint_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & indices, c10::SymIntArrayRef output_size) {
    return at::_ops::max_unpool2d_out::call(self, indices, output_size, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & max_unpool2d_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & indices, c10::SymIntArrayRef output_size) {
    return at::_ops::max_unpool2d_out::call(self, indices, output_size, out);
  }
}

// aten::max_unpool2d.out(Tensor self, Tensor indices, SymInt[2] output_size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & max_unpool2d_symint_outf(const at::Tensor & self, const at::Tensor & indices, c10::SymIntArrayRef output_size, at::Tensor & out) {
    return at::_ops::max_unpool2d_out::call(self, indices, output_size, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & max_unpool2d_outf(const at::Tensor & self, const at::Tensor & indices, c10::SymIntArrayRef output_size, at::Tensor & out) {
    return at::_ops::max_unpool2d_out::call(self, indices, output_size, out);
  }
}

// aten::max_unpool2d(Tensor self, Tensor indices, SymInt[2] output_size) -> Tensor
inline at::Tensor max_unpool2d(const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size) {
    return at::_ops::max_unpool2d::call(self, indices, c10::fromIntArrayRefSlow(output_size));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor max_unpool2d(const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size) {
    return at::_ops::max_unpool2d::call(self, indices, c10::fromIntArrayRefSlow(output_size));
  }
}

// aten::max_unpool2d(Tensor self, Tensor indices, SymInt[2] output_size) -> Tensor
inline at::Tensor max_unpool2d_symint(const at::Tensor & self, const at::Tensor & indices, c10::SymIntArrayRef output_size) {
    return at::_ops::max_unpool2d::call(self, indices, output_size);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor max_unpool2d(const at::Tensor & self, const at::Tensor & indices, c10::SymIntArrayRef output_size) {
    return at::_ops::max_unpool2d::call(self, indices, output_size);
  }
}

}