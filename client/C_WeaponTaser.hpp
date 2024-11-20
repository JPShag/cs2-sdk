#pragma once
#include "source2sdk/client/C_CSWeaponBaseGun.hpp"
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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1b50
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_fFireTime"
    #pragma pack(push, 1)
    class C_WeaponTaser : public client::C_CSWeaponBaseGun
    {
    public:
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fFireTime; // 0x1b40        
        int32_t m_nLastAttackTick; // 0x1b44        
        [[maybe_unused]] std::uint8_t pad_0x1b48[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_WeaponTaser because it is not a standard-layout class
    static_assert(sizeof(C_WeaponTaser) == 0x1b50);
};