// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <Cesium3DTiles/Extension3dTilesMetadataPropertyStatisticsLegacy.h>
#include <CesiumJsonReader/DictionaryJsonHandler.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/JsonObjectJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace Cesium3DTilesReader {
class Extension3dTilesMetadataPropertyStatisticsLegacyJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler {
public:
  using ValueType =
      Cesium3DTiles::Extension3dTilesMetadataPropertyStatisticsLegacy;

  Extension3dTilesMetadataPropertyStatisticsLegacyJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(
      IJsonHandler* pParentHandler,
      Cesium3DTiles::Extension3dTilesMetadataPropertyStatisticsLegacy* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyExtension3dTilesMetadataPropertyStatisticsLegacy(
      const std::string& objectType,
      const std::string_view& str,
      Cesium3DTiles::Extension3dTilesMetadataPropertyStatisticsLegacy& o);

private:
  Cesium3DTiles::Extension3dTilesMetadataPropertyStatisticsLegacy* _pObject =
      nullptr;
  CesiumJsonReader::JsonObjectJsonHandler _min;
  CesiumJsonReader::JsonObjectJsonHandler _max;
  CesiumJsonReader::JsonObjectJsonHandler _mean;
  CesiumJsonReader::JsonObjectJsonHandler _median;
  CesiumJsonReader::JsonObjectJsonHandler _standardDeviation;
  CesiumJsonReader::JsonObjectJsonHandler _variance;
  CesiumJsonReader::JsonObjectJsonHandler _sum;
  CesiumJsonReader::DictionaryJsonHandler<
      CesiumUtility::JsonValue,
      CesiumJsonReader::JsonObjectJsonHandler>
      _occurrences;
};
} // namespace Cesium3DTilesReader