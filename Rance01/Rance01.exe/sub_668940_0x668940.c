// 函数: sub_668940
// 地址: 0x668940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71580a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]
int32_t eax_3

if (arg1 u< ecx)
    eax_3 = *arg2

int32_t* result

if (arg1 u>= ecx || eax_3 u> arg1)
    if (ecx == arg2[2])
        sub_668a30(arg2)
    
    char* ebx_1 = arg2[1]
    result = nullptr
    int32_t var_4_1 = 1
    
    if (ebx_1 != 0)
        *(ebx_1 + 0x10) = 0
        *(ebx_1 + 0x14) = 0xf
        *ebx_1 = 0
        result = sub_401180(ebx_1, 0xffffffff, arg1, 0)
        *(ebx_1 + 0x1c) = arg1[7]
        *(ebx_1 + 0x20) = arg1[8]
else
    if (ecx == arg2[2])
        sub_668a30(arg2)
    
    char* esi_5 = arg2[1]
    int32_t* ebx = *arg2 + (arg1 - eax_3) s/ 0x24 * 0x24
    result = nullptr
    int32_t var_4 = 0
    
    if (esi_5 != 0)
        *(esi_5 + 0x10) = 0
        *(esi_5 + 0x14) = 0xf
        *esi_5 = 0
        sub_401180(esi_5, 0xffffffff, ebx, 0)
        *(esi_5 + 0x1c) = ebx[7]
        result = ebx[8]
        *(esi_5 + 0x20) = result

arg2[1] += 0x24
fsbase->NtTib.ExceptionList = ExceptionList
return result
