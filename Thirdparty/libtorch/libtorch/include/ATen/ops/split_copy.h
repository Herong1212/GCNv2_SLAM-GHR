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



#include <ATen/ops/split_copy_ops.h>

namespace at {


// aten::split_copy.Tensor(Tensor self, SymInt split_size, int dim=0) -> Tensor[]
inline ::std::vector<at::Tensor> split_copy(const at::Tensor & self, int64_t split_size, int64_t dim=0) {
    return at::_ops::split_copy_Tensor::call(self, split_size, dim);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  ::std::vector<at::Tensor> split_copy(const at::Tensor & self, int64_t split_size, int64_t dim=0) {
    return at::_ops::split_copy_Tensor::call(self, split_size, dim);
  }
}

// aten::split_copy.Tensor(Tensor self, SymInt split_size, int dim=0) -> Tensor[]
inline ::std::vector<at::Tensor> split_copy_symint(const at::Tensor & self, c10::SymInt split_size, int64_t dim=0) {
    return at::_ops::split_copy_Tensor::call(self, split_size, dim);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  ::std::vector<at::Tensor> split_copy(const at::Tensor & self, c10::SymInt split_size, int64_t dim=0) {
    return at::_ops::split_copy_Tensor::call(self, split_size, dim);
  }
}

// aten::split_copy.Tensor_out(Tensor self, SymInt split_size, int dim=0, *, Tensor(a!)[] out) -> ()
inline void split_copy_out(at::TensorList out, const at::Tensor & self, int64_t split_size, int64_t dim=0) {
    return at::_ops::split_copy_Tensor_out::call(self, split_size, dim, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  void split_copy_out(at::TensorList out, const at::Tensor & self, int64_t split_size, int64_t dim=0) {
    return at::_ops::split_copy_Tensor_out::call(self, split_size, dim, out);
  }
}

// aten::split_copy.Tensor_out(Tensor self, SymInt split_size, int dim=0, *, Tensor(a!)[] out) -> ()
inline void split_copy_outf(const at::Tensor & self, int64_t split_size, int64_t dim, at::TensorList out) {
    return at::_ops::split_copy_Tensor_out::call(self, split_size, dim, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  void split_copy_outf(const at::Tensor & self, int64_t split_size, int64_t dim, at::TensorList out) {
    return at::_ops::split_copy_Tensor_out::call(self, split_size, dim, out);
  }
}

// aten::split_copy.Tensor_out(Tensor self, SymInt split_size, int dim=0, *, Tensor(a!)[] out) -> ()
inline void split_copy_symint_out(at::TensorList out, const at::Tensor & self, c10::SymInt split_size, int64_t dim=0) {
    return at::_ops::split_copy_Tensor_out::call(self, split_size, dim, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  void split_copy_out(at::TensorList out, const at::Tensor & self, c10::SymInt split_size, int64_t dim=0) {
    return at::_ops::split_copy_Tensor_out::call(self, split_size, dim, out);
  }
}

// aten::split_copy.Tensor_out(Tensor self, SymInt split_size, int dim=0, *, Tensor(a!)[] out) -> ()
inline void split_copy_symint_outf(const at::Tensor & self, c10::SymInt split_size, int64_t dim, at::TensorList out) {
    return at::_ops::split_copy_Tensor_out::call(self, split_size, dim, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  void split_copy_outf(const at::Tensor & self, c10::SymInt split_size, int64_t dim, at::TensorList out) {
    return at::_ops::split_copy_Tensor_out::call(self, split_size, dim, out);
  }
}

}
