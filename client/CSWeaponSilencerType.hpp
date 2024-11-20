#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class CSWeaponSilencerType : std::uint32_t
    {
        WEAPONSILENCER_NONE = 0x0,
        WEAPONSILENCER_DETACHABLE = 0x1,
        WEAPONSILENCER_INTEGRATED = 0x2,
    };
};