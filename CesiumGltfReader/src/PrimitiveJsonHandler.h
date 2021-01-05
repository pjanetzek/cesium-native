#pragma once

#include "AttributeJsonHandler.h"
#include "CesiumGltf/PrimitiveMode.h"
#include "ExtensibleObjectJsonHandler.h"
#include "IntegerJsonHandler.h"
#include "ObjectArrayJsonHandler.h"

namespace CesiumGltf {
    struct Primitive;

    class PrimitiveJsonHandler : public ExtensibleObjectJsonHandler {
    public:
        void reset(JsonHandler* pParent, Primitive* pPrimitive);
        virtual JsonHandler* Key(const char* str, size_t length, bool copy) override;

    private:
        Primitive* _pPrimitive = nullptr;

        AttributeJsonHandler _attributes;
        IntegerJsonHandler<int32_t> _indices;
        IntegerJsonHandler<int32_t> _material;
        IntegerJsonHandler<PrimitiveMode> _mode;
        ObjectArrayJsonHandler<std::unordered_map<std::string, int32_t>, AttributeJsonHandler> _targets;
    };
}