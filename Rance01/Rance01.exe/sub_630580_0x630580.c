// 函数: sub_630580
// 地址: 0x630580
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
        sub_6213a0(arg2)
    
    int32_t* ebx_1 = arg2[1]
    result = nullptr
    int32_t var_4_1 = 1
    
    if (ebx_1 != 0)
        *ebx_1 = *arg1
        ebx_1[5] = 0
        ebx_1[6] = 0xf
        ebx_1[1].b = 0
        sub_401180(&ebx_1[1], 0xffffffff, &arg1[1], 0)
        result = arg1[8]
        ebx_1[8] = result
        ebx_1[9].b = arg1[9].b
else
    if (ecx == arg2[2])
        sub_6213a0(arg2)
    
    int32_t* esi_5 = arg2[1]
    int32_t* ebx = *arg2 + (arg1 - eax_3) s/ 0x28 * 0x28
    result = nullptr
    int32_t var_4 = 0
    
    if (esi_5 != 0)
        *esi_5 = *ebx
        esi_5[5] = 0
        esi_5[6] = 0xf
        esi_5[1].b = 0
        result = sub_401180(&esi_5[1], 0xffffffff, &ebx[1], 0)
        esi_5[8] = ebx[8]
        esi_5[9].b = ebx[9].b

arg2[1] += 0x28
fsbase->NtTib.ExceptionList = ExceptionList
return result
