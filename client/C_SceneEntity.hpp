#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/client/C_SceneEntity__QueuedEvents_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseFlex;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsPlayingBack"
    // static metadata: MNetworkVarNames "bool m_bPaused"
    // static metadata: MNetworkVarNames "bool m_bMultiplayer"
    // static metadata: MNetworkVarNames "bool m_bAutogenerated"
    // static metadata: MNetworkVarNames "float32 m_flForceClientTime"
    // static metadata: MNetworkVarNames "uint16 m_nSceneStringIndex"
    // static metadata: MNetworkVarNames "CHandle< C_BaseFlex > m_hActorList"
    #pragma pack(push, 1)
    class C_SceneEntity : public client::C_PointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x568[0x8]; // 0x568
        // metadata: MNetworkEnable
        bool m_bIsPlayingBack; // 0x570        
        // metadata: MNetworkEnable
        bool m_bPaused; // 0x571        
        // metadata: MNetworkEnable
        bool m_bMultiplayer; // 0x572        
        // metadata: MNetworkEnable
        bool m_bAutogenerated; // 0x573        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnResetClientTime"
        float m_flForceClientTime; // 0x574        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        uint16_t m_nSceneStringIndex; // 0x578        
        bool m_bClientOnly; // 0x57a        
        [[maybe_unused]] std::uint8_t pad_0x57b[0x1]; // 0x57b
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseFlex> m_hOwner;
        char m_hOwner[0x4]; // 0x57c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // m_hActorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseFlex>> m_hActorList;
        char m_hActorList[0x18]; // 0x580        
        bool m_bWasPlaying; // 0x598        
        [[maybe_unused]] std::uint8_t pad_0x599[0xf]; // 0x599
        // m_QueuedEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_SceneEntity__QueuedEvents_t> m_QueuedEvents;
        char m_QueuedEvents[0x18]; // 0x5a8        
        float m_flCurrentTime; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SceneEntity because it is not a standard-layout class
    static_assert(sizeof(C_SceneEntity) == 0x5c8);
};