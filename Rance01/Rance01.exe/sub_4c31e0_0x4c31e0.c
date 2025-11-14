// 函数: sub_4c31e0
// 地址: 0x4c31e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71525a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_1c = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t ecx = arg2[1]

if (esi u< ecx)
    result = *arg2

void* var_24_2
int32_t* var_20_2
int32_t* ebx

if (esi u>= ecx || result u> esi)
    if (ecx == arg2[2])
        result = sub_4c3360(arg2)
    
    ebx = arg2[1]
    int32_t* var_10_2 = ebx
    int32_t var_4_1 = 2
    
    if (ebx != 0)
        sub_4f7750(ebx, esi)
        var_20_2 = esi + 0x10
        var_4_1.b = 3
        var_24_2 = &ebx[4]
    label_4c3295:
        sub_4f7750(var_24_2, var_20_2)
        ebx[8] = *(esi + 0x20)
        ebx[9] = *(esi + 0x24)
        ebx[0xa] = *(esi + 0x28)
        result = *(esi + 0x2c)
        ebx[0xb] = result
else
    int32_t edx_1
    edx_1:result = muls.dp.d(0x2aaaaaab, esi - result)
    int32_t edx_2 = edx_1 s>> 3
    
    if (ecx == arg2[2])
        result = sub_4c3360(arg2)
    
    ebx = arg2[1]
    esi = &(*arg2)[((edx_2 u>> 0x1f) + edx_2) * 0xc]
    int32_t* var_10_1 = ebx
    int32_t var_4 = 0
    
    if (ebx != 0)
        sub_4f7750(ebx, esi)
        var_20_2 = esi + 0x10
        var_4.b = 1
        var_24_2 = &ebx[4]
        goto label_4c3295
arg2[1] = &arg2[1][0xc]
fsbase->NtTib.ExceptionList = ExceptionList
return result
