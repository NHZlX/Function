/* Copyright (c) 2016 PaddlePaddle Authors. All Rights Reserve.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once

namespace paddle {

enum ValueType {
  VALUE_TYPE_INT32 = 0,
  VALUE_TYPE_FLOAT = 1,
  VALUE_TYPE_DOUBLE = 2,
  VALUE_TYPE_BYTE = 3
};

enum DeviceType {
  DEVICE_TYPE_UNSPECIFIED = 0,
  DEVICE_TYPE_CPU = 1,
  DEVICE_TYPE_GPU = 2
};

inline int sizeOfValuType(ValueType valueType) {
  if (valueType == VALUE_TYPE_INT32) {
    return 4;
  } else if (valueType == VALUE_TYPE_FLOAT) {
    return 4;
  } else if (valueType == VALUE_TYPE_DOUBLE) {
    return 8;
  } else {
    LOG(FATAL) << "Unknown type: " << valueType;
    return 0;
  }
}

template <typename T>
struct DataType;

template <>
struct DataType<float> {
  static const ValueType value = VALUE_TYPE_FLOAT;
};

template <>
struct DataType<double> {
  static const ValueType value = VALUE_TYPE_DOUBLE;
};

template <>
struct DataType<int> {
  static const ValueType value = VALUE_TYPE_INT32;
};

}  // namespace paddle
