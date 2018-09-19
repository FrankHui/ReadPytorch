#pragma once

// @generated by aten/src/ATen/gen.py

#include <THC/THC.h>
#include <THC/THCTensor.hpp>
#include <THCUNN/THCUNN.h>
#undef THNN_
#undef THCIndexTensor_

#include "ATen/Tensor.h"
#include "ATen/TensorImpl.h"
#include "ATen/Context.h"
#include "ATen/TensorMethods.h"

namespace at {

struct CUDAIntTensor final : public TensorImpl {
public:
  explicit CUDAIntTensor(Context* context);
  CUDAIntTensor(Context* context, THCudaIntTensor * tensor);
  virtual ~CUDAIntTensor();
  virtual const char * toString() const override;
  virtual IntList sizes() const override;
  virtual IntList strides() const override;
  virtual int64_t dim() const override;
  virtual Scalar localScalar() override;
  virtual void * unsafeGetTH(bool retain) override;
  virtual std::unique_ptr<Storage> storage() override;
  virtual void release_resources() override;
  static const char * typeString();

//TODO(zach): sort of friend permissions later so this
// can be protected
public:
  THCudaIntTensor * tensor;
  Context* context;
  friend struct CUDAIntType;
};

} // namespace at
