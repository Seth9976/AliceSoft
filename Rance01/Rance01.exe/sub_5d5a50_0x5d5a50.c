// 函数: sub_5d5a50
// 地址: 0x5d5a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_719a35
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::kiwi::CSactWAI::VTable** var_c8
int32_t eax_2 = data_78c474 ^ &var_c8
int32_t __saved_esi
int32_t var_d4 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x18) == 0 || *(arg1 + 0x1c) == 0)
    result.b = 0
else
    struct IInterface::kiwi::CSactWAI::VTable** eax_5 = operator new(0x18)
    var_c8 = eax_5
    int32_t var_c_1 = 0
    struct IInterface::kiwi::CSactWAI::VTable** eax_6
    
    if (eax_5 == 0)
        eax_6 = nullptr
    else
        eax_6 = sub_5d9090(eax_5)
    
    int32_t var_c_2 = 0xffffffff
    int32_t* ecx_1 = *(arg1 + 0x18)
    *(arg1 + 0x20) = eax_6
    int128_t* eax_8 = (*(*ecx_1 + 0x20))(0)
    
    if (eax_8 == 0)
    label_5d5bf6:
        struct IInterface::kiwi::CSactWAI::VTable** eax_17 = operator new(0x18)
        var_c8 = eax_17
        int32_t var_c_5 = 6
        struct IInterface::kiwi::CSactBGI::VTable** eax_18
        
        if (eax_17 == 0)
            eax_18 = nullptr
        else
            eax_18 = sub_5d6d70(eax_17)
        
        int32_t var_c_6 = 0xffffffff
        int32_t* ecx_6 = *(arg1 + 0x1c)
        *(arg1 + 0x24) = eax_18
        result = (*(*ecx_6 + 0x20))(0)
        
        if (result == 0)
            result.b = 1
        else
            int32_t var_c_7 = 7
            char var_a8
            char var_38
            sub_401940(&var_38, sub_402be0(&var_a8, result), &var_a8)
            char* var_d8_7 = &var_38
            var_c_7.b = 8
            int32_t* var_8c
            sub_402c60(&var_8c, ".bgi", nullptr)
            int32_t var_24
            
            if (var_24 u>= 0x10)
                int32_t var_d8_8 = var_38.d
                sub_6b4d5b()
            
            int32_t var_24_1 = 0xf
            int32_t var_28_1 = 0
            var_38 = 0
            var_c_7.b = 0xb
            int32_t var_94
            
            if (var_94 u>= 0x10)
                int32_t var_d8_9 = var_a8.d
                sub_6b4d5b()
            
            int32_t var_94_1 = 0xf
            int32_t var_98_1 = 0
            var_a8 = 0
            uint8_t eax_23 = sub_602830(&var_8c)
            char eax_25
            
            if (eax_23 != 0)
                int32_t* eax_24 = var_8c
                int32_t var_78
                
                if (var_78 u< 0x10)
                    eax_24 = &var_8c
                
                eax_25 = sub_5d6f00(*(arg1 + 0x10), *(arg1 + 0x24), eax_24)
            
            if (eax_23 == 0 || eax_25 != 0)
                sub_401110(&var_8c)
                result.b = 1
            else
                sub_401110(&var_8c)
                result.b = 0
    else
        int32_t var_c_3 = 1
        char var_70
        char var_54
        sub_401940(&var_54, sub_402be0(&var_70, eax_8), &var_70)
        char* var_d8_1 = &var_54
        var_c_3.b = 2
        int32_t* var_c4
        sub_402c60(&var_c4, ".wai", nullptr)
        int32_t var_40
        
        if (var_40 u>= 0x10)
            int32_t var_d8_2 = var_54.d
            sub_6b4d5b()
        
        int32_t var_40_1 = 0xf
        int32_t var_44_1 = 0
        var_54 = 0
        var_c_3.b = 5
        int32_t var_5c
        
        if (var_5c u>= 0x10)
            int32_t var_d8_3 = var_70.d
            sub_6b4d5b()
        
        int32_t var_5c_1 = 0xf
        int32_t var_60_1 = 0
        var_70 = 0
        uint8_t eax_13 = sub_602830(&var_c4)
        int32_t var_b0
        char eax_16
        
        if (eax_13 != 0)
            int32_t* eax_14 = var_c4
            
            if (var_b0 u< 0x10)
                eax_14 = &var_c4
            
            int32_t* var_d8_5 = eax_14
            eax_16 = sub_5d9240(*(arg1 + 0xc), *(arg1 + 0x20))
        
        if (eax_13 == 0 || eax_16 != 0)
            int32_t var_c_4 = 0xffffffff
            
            if (var_b0 u>= 0x10)
                int32_t* var_d8_6 = var_c4
                sub_6b4d5b()
            
            goto label_5d5bf6
        
        sub_401110(&var_c4)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c8)
return result
