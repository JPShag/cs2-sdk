#pragma once
#include "source2sdk/server/CSoundOpvarSetPointEntity.hpp"
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
    // Size: 0x6f0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSoundOpvarSetAABBEntity : public server::CSoundOpvarSetPointEntity
    {
    public:
        Vector m_vDistanceInnerMins; // 0x688        
        Vector m_vDistanceInnerMaxs; // 0x694        
        Vector m_vDistanceOuterMins; // 0x6a0        
        Vector m_vDistanceOuterMaxs; // 0x6ac        
        int32_t m_nAABBDirection; // 0x6b8        
        Vector m_vInnerMins; // 0x6bc        
        Vector m_vInnerMaxs; // 0x6c8        
        Vector m_vOuterMins; // 0x6d4        
        Vector m_vOuterMaxs; // 0x6e0        
        [[maybe_unused]] std::uint8_t pad_0x6ec[0x4];
        
        // Datamap fields:
        // void CSoundOpvarSetAABBEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetAABBEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetAABBEntity) == 0x6f0);
};