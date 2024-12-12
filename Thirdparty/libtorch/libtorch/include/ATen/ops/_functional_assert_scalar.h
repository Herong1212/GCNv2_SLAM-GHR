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



#include <ATen/ops/_functional_assert_scalar_ops.h>

namespace at {


// aten::_functional_assert_scalar(Scalar self, str assert_msg, Tensor dep_token) -> Tensor
inline at::Tensor _functional_assert_scalar(const at::Scalar & self, c10::string_view assert_msg, const at::Tensor & dep_token) {
    return at::_ops::_functional_assert_scalar::call(self, assert_msg, dep_token);
}

}