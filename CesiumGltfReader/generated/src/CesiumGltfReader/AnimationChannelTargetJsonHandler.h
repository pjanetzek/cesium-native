// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/AnimationChannelTarget.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/IntegerJsonHandler.h>
#include <CesiumJsonReader/StringJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace CesiumGltfReader {
class AnimationChannelTargetJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler {
public:
  using ValueType = CesiumGltf::AnimationChannelTarget;

  static void
  populateExtensions(CesiumJsonReader::ExtensionReaderContext& context);

  AnimationChannelTargetJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(
      IJsonHandler* pParentHandler,
      CesiumGltf::AnimationChannelTarget* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyAnimationChannelTarget(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::AnimationChannelTarget& o);

private:
  CesiumGltf::AnimationChannelTarget* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _node;
  CesiumJsonReader::StringJsonHandler _path;
};
} // namespace CesiumGltfReader