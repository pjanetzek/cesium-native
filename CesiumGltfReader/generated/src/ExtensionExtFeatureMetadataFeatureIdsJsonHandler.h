// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/ExtensionExtFeatureMetadataFeatureIds.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/IntegerJsonHandler.h>
#include <CesiumJsonReader/StringJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace CesiumGltfReader {
class ExtensionExtFeatureMetadataFeatureIdsJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler {
public:
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataFeatureIds;

  ExtensionExtFeatureMetadataFeatureIdsJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(
      IJsonHandler* pParentHandler,
      CesiumGltf::ExtensionExtFeatureMetadataFeatureIds* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyExtensionExtFeatureMetadataFeatureIds(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::ExtensionExtFeatureMetadataFeatureIds& o);

private:
  CesiumGltf::ExtensionExtFeatureMetadataFeatureIds* _pObject = nullptr;
  CesiumJsonReader::StringJsonHandler _attribute;
  CesiumJsonReader::IntegerJsonHandler<int64_t> _constant;
  CesiumJsonReader::IntegerJsonHandler<int64_t> _divisor;
};
} // namespace CesiumGltfReader