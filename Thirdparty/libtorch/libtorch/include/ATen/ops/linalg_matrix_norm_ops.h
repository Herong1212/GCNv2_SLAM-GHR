#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API linalg_matrix_norm {
  using schema = at::Tensor (const at::Tensor &, const at::Scalar &, at::IntArrayRef, bool, ::std::optional<at::ScalarType>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_matrix_norm")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_matrix_norm(Tensor self, Scalar ord, int[] dim=[-2,-1], bool keepdim=False, *, ScalarType? dtype=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, const at::Scalar & ord, at::IntArrayRef dim, bool keepdim, ::std::optional<at::ScalarType> dtype);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & ord, at::IntArrayRef dim, bool keepdim, ::std::optional<at::ScalarType> dtype);
};

struct TORCH_API linalg_matrix_norm_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Scalar &, at::IntArrayRef, bool, ::std::optional<at::ScalarType>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_matrix_norm")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_matrix_norm.out(Tensor self, Scalar ord, int[] dim=[-2,-1], bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, const at::Scalar & ord, at::IntArrayRef dim, bool keepdim, ::std::optional<at::ScalarType> dtype, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & ord, at::IntArrayRef dim, bool keepdim, ::std::optional<at::ScalarType> dtype, at::Tensor & out);
};

struct TORCH_API linalg_matrix_norm_str_ord {
  using schema = at::Tensor (const at::Tensor &, c10::string_view, at::IntArrayRef, bool, ::std::optional<at::ScalarType>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_matrix_norm")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "str_ord")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_matrix_norm.str_ord(Tensor self, str ord='fro', int[] dim=[-2,-1], bool keepdim=False, *, ScalarType? dtype=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, c10::string_view ord, at::IntArrayRef dim, bool keepdim, ::std::optional<at::ScalarType> dtype);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::string_view ord, at::IntArrayRef dim, bool keepdim, ::std::optional<at::ScalarType> dtype);
};

struct TORCH_API linalg_matrix_norm_str_ord_out {
  using schema = at::Tensor & (const at::Tensor &, c10::string_view, at::IntArrayRef, bool, ::std::optional<at::ScalarType>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_matrix_norm")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "str_ord_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_matrix_norm.str_ord_out(Tensor self, str ord='fro', int[] dim=[-2,-1], bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, c10::string_view ord, at::IntArrayRef dim, bool keepdim, ::std::optional<at::ScalarType> dtype, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::string_view ord, at::IntArrayRef dim, bool keepdim, ::std::optional<at::ScalarType> dtype, at::Tensor & out);
};

}} // namespace at::_ops