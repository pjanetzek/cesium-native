#pragma once

#include <CesiumGltf/Model.h>

#include <functional>
#include <optional>
#include <variant>

namespace Cesium3DTilesSelection {
class TilesetContentLoader;
class Tile;

enum class TileLoadState {
  FailedTemporarily = -1,
  Unloaded = 0,
  ContentLoading = 1,
  ContentLoaded = 2,
  Done = 3,
  Failed = 4,
};

struct TileUnknownContent {};

struct TileExternalContent {};

struct TileRenderContent {
  std::optional<CesiumGltf::Model> model{};
};

using TileContentKind =
    std::variant<TileUnknownContent, TileExternalContent, TileRenderContent>;

class TileContent {
public:
  TileContent(TilesetContentLoader* pLoader);

  TileContent(TilesetContentLoader* pLoader, TileExternalContent externalContent);

  TileLoadState getState() const noexcept;

  bool isExternalContent() const noexcept;

  bool isRenderContent() const noexcept;

  const TileRenderContent* getRenderContent() const noexcept;

  TilesetContentLoader* getLoader() noexcept;

  void* getRenderResources() const noexcept;

private:
  void setContentKind(TileContentKind&& contentKind);

  void setContentKind(const TileContentKind& contentKind);

  void setState(TileLoadState state) noexcept;

  void setRenderResources(void* pRenderResources) noexcept;

  void setTileInitializerCallback(std::function<void(Tile&)> callback);

  std::function<void(Tile&)>& getTileInitializerCallback();

  TileLoadState _state;
  TileContentKind _contentKind;
  void* _pRenderResources;
  std::function<void(Tile&)> _deferredTileInitializer;
  TilesetContentLoader* _pLoader;

  friend class TilesetContentManager;
};
} // namespace Cesium3DTilesSelection