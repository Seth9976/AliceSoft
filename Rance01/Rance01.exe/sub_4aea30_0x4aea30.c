// 函数: sub_4aea30
// 地址: 0x4aea30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717dde
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = data_78c474 ^ &var_60
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMemory::common::CIMemory::VTable** result_1 = nullptr
struct IMemory::common::CIMemory::VTable** result

if (*(arg1 + 4) == 0)
    result = nullptr
else
    HANDLE var_5c = 0xffffffff
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    int32_t var_4 = 0
    bool cond:0_1 = sub_601f00(&var_5c, arg1 + 8) == 0
    HANDLE eax_7 = var_5c
    
    if (cond:0_1)
        goto label_4aeaf2
    
    int32_t lDistanceToMove = *arg2
    
    if (eax_7 == 0xffffffff)
        result = nullptr
    else if (lDistanceToMove u>= var_54_1)
        CloseHandle(eax_7)
        result = nullptr
    else
        SetFilePointer(eax_7, lDistanceToMove, nullptr, FILE_BEGIN)
        int32_t lDistanceToMove_1 = lDistanceToMove
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        var_4.b = 1
        
        if (sub_602270(&var_5c, &var_2c) != 0)
            if (sub_402680(0x7568d8, &var_2c) == 0)
                goto label_4aec1a
            
            int32_t* esi_2 = &var_5c
            int32_t var_4c
            
            if (sub_602230(esi_2, &var_4c) == 0 || var_4c != 0)
                goto label_4aec1a
            
            int32_t var_48
            
            if (sub_602230(esi_2, &var_48) == 0)
                goto label_4aec1a
            
            void* var_44
            
            if (sub_602230(esi_2, &var_44) == 0)
                goto label_4aec1a
            
            void* eax_13 = var_44
            
            if (eax_13 s> 0)
                uint32_t var_40
                sub_413150(&var_40, eax_13)
                var_4.b = 3
                uint32_t ebx_1 = var_40
                int32_t var_3c
                uint32_t edi_4 = var_3c - ebx_1
                
                if (sub_6021f0(&var_5c, edi_4, ebx_1) == 0)
                    goto label_4aec11
                
                struct IMemory::common::CIMemory::VTable** eax_18 = operator new(0x20)
                struct IMemory::common::CIMemory::VTable** var_30_1 = eax_18
                var_4.b = 4
                
                if (eax_18 != 0)
                    result_1 = sub_631440(eax_18)
                
                var_4.b = 3
                
                if ((*result_1)->vFunc_2(var_48) != 0)
                    int32_t var_50_2 = **(arg1 + 4)
                    
                    if ((*(var_44 + 8))((*result_1)->vFunc_6((*result_1)->vFunc_5(ebx_1, edi_4)))
                            == 0)
                        (*result_1)->vFunc_1(eax_4)
                        goto label_4aec11
                    
                    sub_601f60(&var_5c)
                    sub_65ab60(&var_40)
                    sub_401110(&var_2c)
                    sub_601e80(&var_5c)
                    result = result_1
                else
                    (*result_1)->vFunc_1(eax_4)
                label_4aec11:
                    sub_65ab60(&var_40)
                label_4aec1a:
                    sub_401110(&var_2c)
                    sub_601e80(&var_5c)
                    result = nullptr
            else
                struct IMemory::common::CIMemory::VTable** eax_14 = operator new(0x20)
                struct IMemory::common::CIMemory::VTable** var_50_1 = eax_14
                var_4.b = 2
                struct IMemory::common::CIMemory::VTable** result_2
                
                if (eax_14 == 0)
                    result_2 = nullptr
                else
                    result_2 = sub_631440(eax_14)
                
                sub_401110(&var_2c)
                sub_601e80(&var_5c)
                result = result_2
        else
            sub_401110(&var_2c)
            eax_7 = var_5c
        label_4aeaf2:
            
            if (eax_7 == 0xffffffff)
                result = nullptr
            else
                CloseHandle(eax_7)
                result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_60)
return result
