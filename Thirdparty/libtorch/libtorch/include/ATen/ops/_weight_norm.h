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



#include <ATen/ops/_weight_norm_ops.h>

namespace at {


// aten::_weight_norm(Tensor v, Tensor g, int dim=0) -> Tensor
inline at::Tensor _weight_norm(const at::Tensor & v, const at::Tensor & g, int64_t dim=0) {
    return at::_ops::_weight_norm::call(v, g, dim);
}

}
