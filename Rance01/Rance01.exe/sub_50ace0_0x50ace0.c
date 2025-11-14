// 函数: sub_50ace0
// 地址: 0x50ace0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726795
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_9c
int32_t eax_2 = data_78c474 ^ &var_9c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(*(arg1 + 0x68))
char var_84 = 1
int32_t* var_b0_1 = arg2
void* var_b4 = arg1 + 0x6c
int32_t var_c_1 = 0
int32_t* result_2 = sub_50d580()
int32_t* result

if (result_2 == 0)
    char var_54
    sub_50c070(arg2, &var_54)
    var_c_1.b = 1
    char var_38
    sub_50c180(arg2, &var_38)
    int32_t* var_98 = nullptr
    int32_t var_94_1 = 0
    int32_t var_90_1 = 0
    int32_t var_8c_1 = 0
    var_c_1.b = 3
    int32_t var_40
    int32_t var_24
    
    if (sub_50c290(&var_54, arg1, &var_98) == 0)
        var_c_1.b = 4
        int32_t* ecx_3 = var_98
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 4))(eax_4)
        
        if (var_94_1 != 0)
            int32_t var_b0_6 = var_94_1
            sub_6b4d5b()
        
        int32_t var_94_2 = 0
        int32_t var_90_2 = 0
        int32_t var_8c_2 = 0
        
        if (var_24 u>= 0x10)
            int32_t var_b0_7 = var_38.d
            sub_6b4d5b()
        
        int32_t var_24_1 = 0xf
        int32_t var_28_1 = 0
        var_38 = 0
        
        if (var_40 u>= 0x10)
            int32_t var_b0_8 = var_54.d
            sub_6b4d5b()
        
        int32_t var_40_1 = 0xf
        int32_t var_44_1 = 0
        var_54 = 0
        LeaveCriticalSection(*(arg1 + 0x68))
        result = nullptr
    else if (var_98 != 0 || var_94_1 != var_90_1)
        struct IMemory::common::CIMemory::VTable** var_68 = nullptr
        int32_t var_64_1 = 0
        int32_t var_60_1 = 0
        int32_t var_5c_1 = 0
        var_c_1.b = 5
        
        if (sub_50c290(&var_38, arg1, &var_68) != 0)
            int32_t* eax_19 = operator new(0xf0)
            int32_t* var_7c_1 = eax_19
            var_c_1.b = 6
            int32_t* result_1
            
            if (eax_19 == 0)
                result_1 = nullptr
            else
                result_1 = sub_4f8160(eax_19, arg2, *(arg1 + 0x64), arg1 + 0x6c)
            
            var_c_1.b = 5
            struct IMemory::common::CIMemory::VTable** ecx_11 = var_68
            int32_t var_7c_2
            int32_t esi_2
            int32_t ecx_13
            
            if (ecx_11 == 0)
                ecx_13 = var_64_1
                var_7c_2 = var_60_1 - ecx_13
            label_50afd3:
                int32_t esi_4 = ecx_13 - var_60_1
                int32_t esi_5 = neg.d(esi_4)
                esi_2 = sbb.d(esi_5, esi_5, esi_4 != 0) & ecx_13
            else
                int32_t eax_22 = (*ecx_11)->vFunc_5(eax_4)
                struct IMemory::common::CIMemory::VTable** ecx_12 = var_68
                var_7c_2 = eax_22
                
                if (ecx_12 == 0)
                    ecx_13 = var_64_1
                    goto label_50afd3
                
                esi_2 = (*ecx_12)->vFunc_6()
            int32_t* ecx_14 = var_98
            int32_t var_6c_1
            int32_t eax_30
            int32_t ecx_16
            
            if (ecx_14 == 0)
                ecx_16 = var_94_1
                var_6c_1 = var_90_1 - ecx_16
            label_50b017:
                int32_t eax_34 = ecx_16 - var_90_1
                int32_t eax_35 = neg.d(eax_34)
                eax_30 = sbb.d(eax_35, eax_35, eax_34 != 0) & ecx_16
            else
                int32_t eax_28 = (*(*ecx_14 + 0x14))(eax_4)
                int32_t* ecx_15 = var_98
                var_6c_1 = eax_28
                
                if (ecx_15 == 0)
                    ecx_16 = var_94_1
                    goto label_50b017
                
                eax_30 = (*(*ecx_15 + 0x18))()
            
            if (sub_4f8530(var_7c_2, result_1, eax_30, var_6c_1, esi_2, &var_54, *(arg1 + 0x20), 
                    *(arg1 + 0x24)) != 0)
                int32_t* var_b0_22 = arg2
                sub_50d490(arg1 + 0x6c, result_1)
                sub_576080(&var_84)
                var_c_1.b = 3
                sub_50a970(&var_68)
                var_c_1.b = 2
                sub_50a970(&var_98)
                sub_401110(&var_38)
                sub_401110(&var_54)
                sub_576080(&var_84)
                result = result_1
            else
                sub_4f8480(result_1)
                var_c_1.b = 3
                sub_50a970(&var_68)
                var_c_1.b = 2
                sub_50a970(&var_98)
                sub_401110(&var_38)
                sub_401110(&var_54)
                sub_576080(&var_84)
                result = nullptr
        else
            var_c_1.b = 3
            sub_50a970(&var_68)
            var_c_1.b = 2
            sub_50a970(&var_98)
            sub_401110(&var_38)
            sub_401110(&var_54)
            LeaveCriticalSection(*(arg1 + 0x68))
            result = nullptr
    else
        var_c_1.b = 2
        sub_50a970(&var_98)
        
        if (var_24 u>= 0x10)
            int32_t var_b0_11 = var_38.d
            sub_6b4d5b()
        
        int32_t var_24_2 = 0xf
        int32_t var_28_2 = 0
        var_38 = 0
        
        if (var_40 u>= 0x10)
            int32_t var_b0_12 = var_54.d
            sub_6b4d5b()
        
        int32_t var_40_2 = 0xf
        int32_t var_44_2 = 0
        var_54 = 0
        LeaveCriticalSection(*(arg1 + 0x68))
        result = nullptr
else
    LeaveCriticalSection(*(arg1 + 0x68))
    result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_9c)
return result
