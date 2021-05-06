// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/ExtensibleObject.h"
#include "CesiumGltf/Library.h"
#include <unordered_map>
#include <variant>
#include <vector>

namespace CesiumGltf {
/**
 * @brief Statistics about property values.
 */
struct CESIUMGLTF_API PropertyStatistics final : public ExtensibleObject {
  static inline constexpr const char* TypeName = "PropertyStatistics";

  /**
   * @brief The minimum property value. Only applicable for numeric types and
   * fixed-length arrays of numeric types. For numeric types this is a single
   * number. For fixed-length arrays this is an array with `componentCount`
   * number of elements. The `normalized` property has no effect on these
   * values.
   */
  std::variant<double, std::vector<double>> min;

  /**
   * @brief The maximum property value. Only applicable for numeric types and
   * fixed-length arrays of numeric types. For numeric types this is a single
   * number. For fixed-length arrays this is an array with `componentCount`
   * number of elements. The `normalized` property has no effect on these
   * values.
   */
  std::variant<double, std::vector<double>> max;

  /**
   * @brief The arithmetic mean of the property values. Only applicable for
   * numeric types and fixed-length arrays of numeric types. For numeric types
   * this is a single number. For fixed-length arrays this is an array with
   * `componentCount` number of elements. The `normalized` property has no
   * effect on these values.
   */
  std::variant<double, std::vector<double>> mean;

  /**
   * @brief The median of the property values. Only applicable for numeric types
   * and fixed-length arrays of numeric types. For numeric types this is a
   * single number. For fixed-length arrays this is an array with
   * `componentCount` number of elements. The `normalized` property has no
   * effect on these values.
   */
  std::variant<double, std::vector<double>> median;

  /**
   * @brief The standard deviation of the property values. Only applicable for
   * numeric types and fixed-length arrays of numeric types. For numeric types
   * this is a single number. For fixed-length arrays this is an array with
   * `componentCount` number of elements. The `normalized` property has no
   * effect on these values.
   */
  std::variant<double, std::vector<double>> standardDeviation;

  /**
   * @brief The variance of the property values. Only applicable for numeric
   * types and fixed-length arrays of numeric types. For numeric types this is a
   * single number. For fixed-length arrays this is an array with
   * `componentCount` number of elements. The `normalized` property has no
   * effect on these values.
   */
  std::variant<double, std::vector<double>> variance;

  /**
   * @brief The sum of the property values. Only applicable for numeric types
   * and fixed-length arrays of numeric types. For numeric types this is a
   * single number. For fixed-length arrays this is an array with
   * `componentCount` number of elements. The `normalized` property has no
   * effect on these values.
   */
  std::variant<double, std::vector<double>> sum;

  /**
   * @brief A dictionary, where each key corresponds to an enum `name` and each
   * value is the number of occurrences of that enum. Only applicable when
   * `type` or `componentType` is `ENUM`. For fixed-length arrays, this is an
   * array with `componentCount` number of elements.
   */
  std::unordered_map<std::string, std::variant<double, std::vector<double>>>
      occurrences;
};
} // namespace CesiumGltf