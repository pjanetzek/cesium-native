// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltfReader/AnimationChannelTargetJsonHandler.h"

#include <CesiumGltf/AnimationChannel.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/IntegerJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace CesiumGltfReader {
class AnimationChannelJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler {
public:
  using ValueType = CesiumGltf::AnimationChannel;

  static void
  populateExtensions(CesiumJsonReader::ExtensionReaderContext& context);

  AnimationChannelJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void
  reset(IJsonHandler* pParentHandler, CesiumGltf::AnimationChannel* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyAnimationChannel(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::AnimationChannel& o);

private:
  CesiumGltf::AnimationChannel* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _sampler;
  AnimationChannelTargetJsonHandler _target;
};
} // namespace CesiumGltfReader