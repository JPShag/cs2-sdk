#pragma once
#include "source2sdk/client/C_CSGO_TeamPreviewCharacterPosition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1298
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_CSGO_TeamSelectCharacterPosition : public client::C_CSGO_TeamPreviewCharacterPosition
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_CSGO_TeamSelectCharacterPosition) == 0x1298);
};