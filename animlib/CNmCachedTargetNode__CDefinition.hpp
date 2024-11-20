#pragma once
#include "source2sdk/animlib/CNmTargetValueNode__CDefinition.hpp"
#include "source2sdk/animlib/NmCachedValueMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmCachedTargetNode__CDefinition : public animlib::CNmTargetValueNode__CDefinition
    {
    public:
        int16_t m_nInputValueNodeIdx; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x12[0x2]; // 0x12
        animlib::NmCachedValueMode_t m_mode; // 0x14        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmCachedTargetNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmCachedTargetNode__CDefinition) == 0x18);
};
