#pragma once
#include "source2sdk/host/CAnimScriptBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: host
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::host
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x20
    // Has VTable
    #pragma pack(push, 1)
    class EmptyTestScript : public host::CAnimScriptBase
    {
    public:
        // m_hTest has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimScriptParam<float> m_hTest;
        char m_hTest[0x10]; // 0x10        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in EmptyTestScript because it is not a standard-layout class
    static_assert(sizeof(EmptyTestScript) == 0x20);
};