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


struct TORCH_API to_dtype_layout {
  using schema = at::Tensor (const at::Tensor &, ::std::optional<at::ScalarType>, ::std::optional<at::Layout>, ::std::optional<at::Device>, ::std::optional<bool>, bool, bool, ::std::optional<at::MemoryFormat>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::to")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dtype_layout")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "to.dtype_layout(Tensor(a) self, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, bool non_blocking=False, bool copy=False, MemoryFormat? memory_format=None) -> Tensor(a)")
  static at::Tensor call(const at::Tensor & self, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, bool non_blocking, bool copy, ::std::optional<at::MemoryFormat> memory_format);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, bool non_blocking, bool copy, ::std::optional<at::MemoryFormat> memory_format);
};

struct TORCH_API to_device {
  using schema = at::Tensor (const at::Tensor &, at::Device, at::ScalarType, bool, bool, ::std::optional<at::MemoryFormat>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::to")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "device")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "to.device(Tensor(a) self, Device device, ScalarType dtype, bool non_blocking=False, bool copy=False, MemoryFormat? memory_format=None) -> Tensor(a)")
  static at::Tensor call(const at::Tensor & self, at::Device device, at::ScalarType dtype, bool non_blocking, bool copy, ::std::optional<at::MemoryFormat> memory_format);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Device device, at::ScalarType dtype, bool non_blocking, bool copy, ::std::optional<at::MemoryFormat> memory_format);
};

struct TORCH_API to_dtype {
  using schema = at::Tensor (const at::Tensor &, at::ScalarType, bool, bool, ::std::optional<at::MemoryFormat>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::to")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dtype")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "to.dtype(Tensor(a) self, ScalarType dtype, bool non_blocking=False, bool copy=False, MemoryFormat? memory_format=None) -> Tensor(a)")
  static at::Tensor call(const at::Tensor & self, at::ScalarType dtype, bool non_blocking, bool copy, ::std::optional<at::MemoryFormat> memory_format);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::ScalarType dtype, bool non_blocking, bool copy, ::std::optional<at::MemoryFormat> memory_format);
};

struct TORCH_API to_other {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &, bool, bool, ::std::optional<at::MemoryFormat>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::to")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "other")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "to.other(Tensor(a) self, Tensor other, bool non_blocking=False, bool copy=False, MemoryFormat? memory_format=None) -> Tensor(a)")
  static at::Tensor call(const at::Tensor & self, const at::Tensor & other, bool non_blocking, bool copy, ::std::optional<at::MemoryFormat> memory_format);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, bool non_blocking, bool copy, ::std::optional<at::MemoryFormat> memory_format);
};

}} // namespace at::_ops
