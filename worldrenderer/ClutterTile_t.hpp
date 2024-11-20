#pragma once
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ClutterTile_t
    {
    public:
        uint32_t m_nFirstInstance; // 0x0        
        uint32_t m_nLastInstance; // 0x4        
        mathlib_extended::AABB_t m_BoundsWs; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ClutterTile_t, m_nFirstInstance) == 0x0);
    static_assert(offsetof(ClutterTile_t, m_nLastInstance) == 0x4);
    static_assert(offsetof(ClutterTile_t, m_BoundsWs) == 0x8);
    
    static_assert(sizeof(ClutterTile_t) == 0x20);
};
