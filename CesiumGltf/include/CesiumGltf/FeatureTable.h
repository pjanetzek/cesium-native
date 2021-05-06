// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/ExtensibleObject.h"
#include "CesiumGltf/FeatureTableProperty.h"
#include "CesiumGltf/Library.h"
#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>

namespace CesiumGltf {
/**
 * @brief A feature table defined by a class and property values stored in
 * arrays.
 */
struct CESIUMGLTF_API FeatureTable final : public ExtensibleObject {
  static inline constexpr const char* TypeName = "FeatureTable";

  /**
   * @brief The class that property values conform to. The value must be a class
   * ID declared in the `classes` dictionary.
   */
  std::optional<std::string> classProperty;

  /**
   * @brief The number of features, as well as the number of elements in each
   * property array.
   */
  int64_t count = int64_t();

  /**
   * @brief A dictionary, where each key corresponds to a property ID in the
   * class' `properties` dictionary and each value is an object describing where
   * property values are stored. Optional properties may be excluded from this
   * dictionary.
   */
  std::unordered_map<std::string, std::optional<FeatureTableProperty>>
      properties;
};
} // namespace CesiumGltf