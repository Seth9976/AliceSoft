// 函数: sub_5d9860
// 地址: 0x5d9860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71df9b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMemory::common::CIMemory::VTable** ebp = arg4
uint32_t eax_4

if (ebp s>= 3)
    eax_4 = sub_6b557b(arg3, &data_736850, 3)

int32_t* result

if (ebp s< 3 || eax_4 != 0)
    if (sub_5d9a40(arg2, arg3) != 0)
        int32_t* eax_22 = *arg2
        *arg1 = *eax_22
        arg1[1] = eax_22[1]
        arg1[2] = eax_22[2]
        arg1[3] = eax_22[3]
        int32_t edx_11
        edx_11.w = eax_22[4].w
        arg1[4].w = edx_11.w
        *arg5 = arg2[2]
        *arg6 = arg2[1]
        
        if (*arg1 == 1)
            goto label_5d99a0
        
        if (data_797e40 == 0)
            sub_604c90(0x736870)
            data_797e40 = 1
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
else
    int32_t* ecx = arg2[3]
    
    if (ecx != 0)
        (*(*ecx + 4))(eax_2)
        arg2[3] = 0
    
    struct IMemory::common::CIMemory::VTable** eax_6 = operator new(0x20)
    arg4 = eax_6
    int32_t var_4 = 0
    struct IMemory::common::CIMemory::VTable** eax_7
    
    if (eax_6 == 0)
        eax_7 = nullptr
    else
        eax_7 = sub_631440(eax_6)
    
    int32_t var_4_1 = 0xffffffff
    arg2[3] = eax_7
    struct IWaveFormat::kiwi::CWaveFormat::VTable** eax_8 = operator new(0x1c)
    struct IWaveFormat::kiwi::CWaveFormat::VTable** esi_2
    
    if (eax_8 == 0)
        esi_2 = nullptr
    else
        *eax_8 = &kiwi::CWaveFormat::`vftable'{for `IWaveFormat'}
        eax_8[1] = 1
        esi_2 = eax_8
    
    if ((*(*arg7 + 8))(arg3, ebp, esi_2, arg2[3]) != 0)
        *arg1 = esi_2[2]
        arg1[1] = esi_2[3]
        arg1[2] = esi_2[4]
        arg1[3] = esi_2[5]
        int32_t ecx_6
        ecx_6.w = esi_2[6].w
        arg1[4].w = ecx_6.w
        *arg5 = (*(*arg2[3] + 0x18))(eax_2)
        *arg6 = (*(*arg2[3] + 0x14))()
        (*esi_2)->vFunc_1()
    label_5d99a0:
        result.b = arg1[2] != 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    (*esi_2)->vFunc_1(eax_2)
    (*(*arg2[3] + 4))()
fsbase->NtTib.ExceptionList = ExceptionList
return 0
