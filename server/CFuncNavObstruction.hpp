#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncNavObstruction : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x790[0x8]; // 0x790
        bool m_bDisabled; // 0x798        
        [[maybe_unused]] std::uint8_t pad_0x799[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncNavObstruction because it is not a standard-layout class
    static_assert(sizeof(CFuncNavObstruction) == 0x7a0);
};
