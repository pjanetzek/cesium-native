#include "JsonObjectWriter.h"
#include "TextureWriter.h"

void CesiumGltf::writeTexture(
    const std::vector<Texture>& textures,
    CesiumGltf::JsonWriter& jsonWriter
) {

    if (textures.empty()) {
        return;
    }

    auto& j = jsonWriter;

    j.StartArray();
    for (const auto& texture : textures) {
        j.StartObject();

        if (texture.sampler >= 0) {
            j.Key("sampler");
            j.Int(texture.sampler);
        }

        if (texture.source >= 0) {
            j.Key("source");
            j.Int(texture.source);
        }

        if (!texture.name.empty()) {
            j.Key("name");
            j.String(texture.name.c_str());
        }

        if (!texture.extras.empty()) {
            j.Key("extras");
            writeJsonObject(texture.extras, j);
        }

        // todo extensions
        j.EndObject();

    }
    j.EndArray();
}