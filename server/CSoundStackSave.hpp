#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x4e8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSoundStackSave : public server::CLogicalEntity
    {
    public:
        CUtlSymbolLarge m_iszStackName; // 0x4e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundStackSave because it is not a standard-layout class
    static_assert(sizeof(CSoundStackSave) == 0x4e8);
};