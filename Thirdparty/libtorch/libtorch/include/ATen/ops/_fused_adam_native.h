#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <optional>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API ::std::tuple<::std::vector<at::Tensor>,::std::vector<at::Tensor>,::std::vector<at::Tensor>,::std::vector<at::Tensor>,::std::vector<at::Tensor>> _fused_adam(at::TensorList self, at::TensorList grads, at::TensorList exp_avgs, at::TensorList exp_avg_sqs, at::TensorList max_exp_avg_sqs, at::TensorList state_steps, double lr, double beta1, double beta2, double weight_decay, double eps, bool amsgrad, bool maximize, const ::std::optional<at::Tensor> & grad_scale={}, const ::std::optional<at::Tensor> & found_inf={});
TORCH_API void _fused_adam_out(at::TensorList self, at::TensorList grads, at::TensorList exp_avgs, at::TensorList exp_avg_sqs, at::TensorList max_exp_avg_sqs, at::TensorList state_steps, double lr, double beta1, double beta2, double weight_decay, double eps, bool amsgrad, bool maximize, const ::std::optional<at::Tensor> & grad_scale, const ::std::optional<at::Tensor> & found_inf, at::TensorList out);
TORCH_API void _fused_adam_kernel_cpu_(at::TensorList self, at::TensorList grads, at::TensorList exp_avgs, at::TensorList exp_avg_sqs, at::TensorList max_exp_avg_sqs, at::TensorList state_steps, double lr, double beta1, double beta2, double weight_decay, double eps, bool amsgrad, bool maximize, const ::std::optional<at::Tensor> & grad_scale={}, const ::std::optional<at::Tensor> & found_inf={});
TORCH_API void _fused_adam_kernel_cuda_(at::TensorList self, at::TensorList grads, at::TensorList exp_avgs, at::TensorList exp_avg_sqs, at::TensorList max_exp_avg_sqs, at::TensorList state_steps, double lr, double beta1, double beta2, double weight_decay, double eps, bool amsgrad, bool maximize, const ::std::optional<at::Tensor> & grad_scale={}, const ::std::optional<at::Tensor> & found_inf={});
TORCH_API ::std::tuple<::std::vector<at::Tensor>,::std::vector<at::Tensor>,::std::vector<at::Tensor>,::std::vector<at::Tensor>,::std::vector<at::Tensor>> _fused_adam(at::TensorList self, at::TensorList grads, at::TensorList exp_avgs, at::TensorList exp_avg_sqs, at::TensorList max_exp_avg_sqs, at::TensorList state_steps, const at::Tensor & lr, double beta1, double beta2, double weight_decay, double eps, bool amsgrad, bool maximize, const ::std::optional<at::Tensor> & grad_scale={}, const ::std::optional<at::Tensor> & found_inf={});
TORCH_API void _fused_adam_tensor_lr_out(at::TensorList self, at::TensorList grads, at::TensorList exp_avgs, at::TensorList exp_avg_sqs, at::TensorList max_exp_avg_sqs, at::TensorList state_steps, const at::Tensor & lr, double beta1, double beta2, double weight_decay, double eps, bool amsgrad, bool maximize, const ::std::optional<at::Tensor> & grad_scale, const ::std::optional<at::Tensor> & found_inf, at::TensorList out);
TORCH_API void _fused_adam_kernel_cpu_(at::TensorList self, at::TensorList grads, at::TensorList exp_avgs, at::TensorList exp_avg_sqs, at::TensorList max_exp_avg_sqs, at::TensorList state_steps, const at::Tensor & lr, double beta1, double beta2, double weight_decay, double eps, bool amsgrad, bool maximize, const ::std::optional<at::Tensor> & grad_scale={}, const ::std::optional<at::Tensor> & found_inf={});
TORCH_API void _fused_adam_kernel_cuda_(at::TensorList self, at::TensorList grads, at::TensorList exp_avgs, at::TensorList exp_avg_sqs, at::TensorList max_exp_avg_sqs, at::TensorList state_steps, const at::Tensor & lr, double beta1, double beta2, double weight_decay, double eps, bool amsgrad, bool maximize, const ::std::optional<at::Tensor> & grad_scale={}, const ::std::optional<at::Tensor> & found_inf={});
} // namespace native
} // namespace at