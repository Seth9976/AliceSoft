// 函数: sub_6a8c80
// 地址: 0x6a8c80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71580a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]

if (arg1 u< ecx)
    result = *arg2

if (arg1 u>= ecx || result u> arg1)
    if (ecx == arg2[2])
        result = sub_6a8d80(arg2)
    
    int32_t* ebx_1 = arg2[1]
    int32_t var_4_1 = 1
    
    if (ebx_1 != 0)
        *ebx_1 = *arg1
        ebx_1[1] = arg1[1]
        ebx_1[2] = arg1[2]
        ebx_1[3] = arg1[3]
        result = sub_6b05e0(&ebx_1[4], &arg1[4])
        ebx_1[8].b = arg1[8].b
        ebx_1[9] = arg1[9]
else
    if (ecx == arg2[2])
        sub_6a8d80(arg2)
    
    result = (arg1 - result) s/ 0x28 * 5
    int32_t* esi_5 = arg2[1]
    void* ebx = &(*arg2)[result * 2]
    int32_t var_4 = 0
    
    if (esi_5 != 0)
        *esi_5 = *ebx
        esi_5[1] = *(ebx + 4)
        esi_5[2] = *(ebx + 8)
        esi_5[3] = *(ebx + 0xc)
        sub_6b05e0(&esi_5[4], ebx + 0x10)
        esi_5[8].b = *(ebx + 0x20)
        result = *(ebx + 0x24)
        esi_5[9] = result

arg2[1] = &arg2[1][0xa]
fsbase->NtTib.ExceptionList = ExceptionList
return result
