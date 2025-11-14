// 函数: sub_662e60
// 地址: 0x662e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71731a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t ecx = arg2[1]

if (esi u< ecx)
    result = *arg2

char* ecx_3

if (esi u>= ecx || result u> esi)
    if (ecx == arg2[2])
        result = sub_662f00(arg2)
    
    ecx_3 = arg2[1]
    int32_t var_4_1 = 1
else
    int32_t edx_1
    edx_1:result = muls.dp.d(0x2e8ba2e9, esi - result)
    int32_t edx_2 = edx_1 s>> 4
    
    if (ecx == arg2[2])
        result = sub_662f00(arg2)
    
    ecx_3 = arg2[1]
    esi = &(*arg2)[((edx_2 u>> 0x1f) + edx_2) * 0x16]
    int32_t var_4 = 0

if (ecx_3 != 0)
    result = sub_663290(ecx_3, esi)

arg2[1] = &arg2[1][0x16]
fsbase->NtTib.ExceptionList = ExceptionList
return result
