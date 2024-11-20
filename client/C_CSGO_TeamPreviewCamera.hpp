#pragma once
#include "source2sdk/client/C_CSGO_MapPreviewCameraPath.hpp"
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
    // Size: 0x5f0
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_CSGO_TeamPreviewCamera : public client::C_CSGO_MapPreviewCameraPath
    {
    public:
        int32_t m_nVariant; // 0x5d0        
        bool m_bDofEnabled; // 0x5d4        
        [[maybe_unused]] std::uint8_t pad_0x5d5[0x3]; // 0x5d5
        float m_flDofNearBlurry; // 0x5d8        
        float m_flDofNearCrisp; // 0x5dc        
        float m_flDofFarCrisp; // 0x5e0        
        float m_flDofFarBlurry; // 0x5e4        
        float m_flDofTiltToGround; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGO_TeamPreviewCamera because it is not a standard-layout class
    static_assert(sizeof(C_CSGO_TeamPreviewCamera) == 0x5f0);
};
