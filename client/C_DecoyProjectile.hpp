#pragma once
#include "source2sdk/client/C_BaseCSGrenadeProjectile.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1238
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nDecoyShotTick"
    #pragma pack(push, 1)
    class C_DecoyProjectile : public client::C_BaseCSGrenadeProjectile
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nDecoyShotTick; // 0x1208        
        int32_t m_nClientLastKnownDecoyShotTick; // 0x120c        
        [[maybe_unused]] std::uint8_t pad_0x1210[0x20]; // 0x1210
        entity2::GameTime_t m_flTimeParticleEffectSpawn; // 0x1230        
        [[maybe_unused]] std::uint8_t pad_0x1234[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DecoyProjectile because it is not a standard-layout class
    static_assert(sizeof(C_DecoyProjectile) == 0x1238);
};