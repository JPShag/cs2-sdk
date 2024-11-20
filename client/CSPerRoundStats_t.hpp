#pragma once
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x68
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iKills"
    // static metadata: MNetworkVarNames "int m_iDeaths"
    // static metadata: MNetworkVarNames "int m_iAssists"
    // static metadata: MNetworkVarNames "int m_iDamage"
    // static metadata: MNetworkVarNames "int m_iEquipmentValue"
    // static metadata: MNetworkVarNames "int m_iMoneySaved"
    // static metadata: MNetworkVarNames "int m_iKillReward"
    // static metadata: MNetworkVarNames "int m_iLiveTime"
    // static metadata: MNetworkVarNames "int m_iHeadShotKills"
    // static metadata: MNetworkVarNames "int m_iObjective"
    // static metadata: MNetworkVarNames "int m_iCashEarned"
    // static metadata: MNetworkVarNames "int m_iUtilityDamage"
    // static metadata: MNetworkVarNames "int m_iEnemiesFlashed"
    #pragma pack(push, 1)
    struct CSPerRoundStats_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        int32_t m_iKills; // 0x30        
        // metadata: MNetworkEnable
        int32_t m_iDeaths; // 0x34        
        // metadata: MNetworkEnable
        int32_t m_iAssists; // 0x38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
        int32_t m_iDamage; // 0x3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        int32_t m_iEquipmentValue; // 0x40        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        int32_t m_iMoneySaved; // 0x44        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        int32_t m_iKillReward; // 0x48        
        // metadata: MNetworkEnable
        int32_t m_iLiveTime; // 0x4c        
        // metadata: MNetworkEnable
        int32_t m_iHeadShotKills; // 0x50        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
        int32_t m_iObjective; // 0x54        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        int32_t m_iCashEarned; // 0x58        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
        int32_t m_iUtilityDamage; // 0x5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "AllPlayersDuringFreezePeriodOrMatchEnd"
        int32_t m_iEnemiesFlashed; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSPerRoundStats_t, m_iKills) == 0x30);
    static_assert(offsetof(CSPerRoundStats_t, m_iDeaths) == 0x34);
    static_assert(offsetof(CSPerRoundStats_t, m_iAssists) == 0x38);
    static_assert(offsetof(CSPerRoundStats_t, m_iDamage) == 0x3c);
    static_assert(offsetof(CSPerRoundStats_t, m_iEquipmentValue) == 0x40);
    static_assert(offsetof(CSPerRoundStats_t, m_iMoneySaved) == 0x44);
    static_assert(offsetof(CSPerRoundStats_t, m_iKillReward) == 0x48);
    static_assert(offsetof(CSPerRoundStats_t, m_iLiveTime) == 0x4c);
    static_assert(offsetof(CSPerRoundStats_t, m_iHeadShotKills) == 0x50);
    static_assert(offsetof(CSPerRoundStats_t, m_iObjective) == 0x54);
    static_assert(offsetof(CSPerRoundStats_t, m_iCashEarned) == 0x58);
    static_assert(offsetof(CSPerRoundStats_t, m_iUtilityDamage) == 0x5c);
    static_assert(offsetof(CSPerRoundStats_t, m_iEnemiesFlashed) == 0x60);
    
    static_assert(sizeof(CSPerRoundStats_t) == 0x68);
};