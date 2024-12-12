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


struct TORCH_API _scaled_dot_product_fused_attention_overrideable {
  using schema = ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,c10::SymInt,c10::SymInt,at::Tensor,at::Tensor,at::Tensor> (const at::Tensor &, const at::Tensor &, const at::Tensor &, const ::std::optional<at::Tensor> &, double, bool, bool, ::std::optional<double>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_scaled_dot_product_fused_attention_overrideable")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_scaled_dot_product_fused_attention_overrideable(Tensor query, Tensor key, Tensor value, Tensor? attn_bias=None, float dropout_p=0.0, bool is_causal=False, bool return_debug_mask=False, *, float? scale=None) -> (Tensor output, Tensor logsumexp, Tensor cum_seq_q, Tensor cum_seq_k, SymInt max_q, SymInt max_k, Tensor philox_seed, Tensor philox_offset, Tensor debug_attn_mask)")
  static ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,c10::SymInt,c10::SymInt,at::Tensor,at::Tensor,at::Tensor> call(const at::Tensor & query, const at::Tensor & key, const at::Tensor & value, const ::std::optional<at::Tensor> & attn_bias, double dropout_p, bool is_causal, bool return_debug_mask, ::std::optional<double> scale);
  static ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,c10::SymInt,c10::SymInt,at::Tensor,at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & query, const at::Tensor & key, const at::Tensor & value, const ::std::optional<at::Tensor> & attn_bias, double dropout_p, bool is_causal, bool return_debug_mask, ::std::optional<double> scale);
};

}} // namespace at::_ops
