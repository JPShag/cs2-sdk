#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_SetRigidAttachment : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c8        
        // metadata: MPropertyFriendlyName "attribute to read from"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1cc        
        // metadata: MPropertyFriendlyName "attribute to cache to"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0        
        // metadata: MPropertyFriendlyName "local space"
        bool m_bLocalSpace; // 0x1d4        
        [[maybe_unused]] std::uint8_t pad_0x1d5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_SetRigidAttachment because it is not a standard-layout class
    static_assert(sizeof(C_INIT_SetRigidAttachment) == 0x1d8);
};