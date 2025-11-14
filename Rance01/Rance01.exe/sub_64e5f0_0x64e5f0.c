// 函数: sub_64e5f0
// 地址: 0x64e5f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71580a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg2[1]
int32_t ecx

if (arg1 u< eax_3)
    ecx = *arg2

char result

if (arg1 u>= eax_3 || ecx u> arg1)
    if (eax_3 == arg2[2])
        sub_6a57b0(arg2)
    
    char* ebx_1 = arg2[1]
    result = 0
    int32_t var_4_1 = 1
    
    if (ebx_1 != 0)
        *(ebx_1 + 0x10) = 0
        *(ebx_1 + 0x14) = 0xf
        *ebx_1 = 0
        result = sub_401180(ebx_1, 0xffffffff, arg1, 0)
        ebx_1[0x1c] = arg1[7].b
else
    if (eax_3 == arg2[2])
        sub_6a57b0(arg2)
    
    char* ebx = arg2[1]
    int32_t* esi_3 = ((arg1 - ecx) & 0xffffffe0) + *arg2
    result = 0
    int32_t var_4 = 0
    
    if (ebx != 0)
        *(ebx + 0x10) = 0
        *(ebx + 0x14) = 0xf
        *ebx = 0
        sub_401180(ebx, 0xffffffff, esi_3, 0)
        result = esi_3[7].b
        ebx[0x1c] = result

arg2[1] += 0x20
fsbase->NtTib.ExceptionList = ExceptionList
return result
