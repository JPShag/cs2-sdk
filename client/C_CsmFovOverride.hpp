#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x578
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_CsmFovOverride : public client::C_BaseEntity
    {
    public:
        CUtlString m_cameraName; // 0x568        
        float m_flCsmFovOverrideValue; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x574[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CsmFovOverride because it is not a standard-layout class
    static_assert(sizeof(C_CsmFovOverride) == 0x578);
};
