// This file is licensed under the Elastic License 2.0. Copyright 2021-present, StarRocks Limited.

#pragma once

namespace starrocks {

// For HyperLogLog type
constexpr int HLL_COLUMN_PRECISION = 14;
constexpr int HLL_ZERO_COUNT_BITS = (64 - HLL_COLUMN_PRECISION);
constexpr int HLL_EXPLICLIT_INT64_NUM = 160;
constexpr int HLL_SPARSE_THRESHOLD = 4096;
constexpr int HLL_REGISTERS_COUNT = 16 * 1024;
// maximum size in byte of serialized HLL: type(1) + registers (2^14)
constexpr int HLL_COLUMN_DEFAULT_LEN = HLL_REGISTERS_COUNT + 1;

// 1 for type; 1 for hash values count; 8 for hash value
constexpr int HLL_EMPTY_SIZE = 1;

// For JSON type
constexpr int kJsonDefaultSize = 128;
constexpr int kJsonMetaDefaultFormatVersion = 1;

} // namespace starrocks
