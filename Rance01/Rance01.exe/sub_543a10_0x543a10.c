// 函数: sub_543a10
// 地址: 0x543a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t entry___saved_ebx
int32_t __saved_ebx = entry___saved_ebx
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = *(arg1 + 0x2b0)
int32_t edx = *(eax_5 - 8)
int32_t ecx = *(eax_5 - 4)
int32_t ebp = *(eax_5 - 0xc)
*(arg1 + 0x2b0) = eax_5 - 0xc

if (edx s< 0)
    edx = 0

int32_t* eax_11

if (ebp u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    eax_11 = *(*(arg1 + 0x1e4) + (ebp << 2))

char result

if (ebp u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2 && eax_11 != 0)
    int32_t var_4 = 0
    char var_2c
    entry___saved_ebx.b =
        sub_552d50(arg1 + 0x1dc, sub_5508b0(ecx, eax_11, &var_2c, edx), &var_30) == 0
    int32_t var_4_1 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_48_3 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (entry___saved_ebx.b == 0)
        **(arg1 + 0x2b0) = var_30
        *(arg1 + 0x2b0) += 4
        
        if (sub_552880(arg1 + 0x1dc, ebp) != 0)
            result = 1
        else
            result = sub_53d0e0(arg1, 0x74e97c, eax_4, arg4, arg3, arg2, __saved_ebx)
    else
        result = sub_53d0e0(arg1, 0x74e954, eax_4, arg4, arg3, arg2, __saved_ebx)
else
    result = sub_53d0e0(arg1, 0x74e924, ebp, eax_4, arg4, arg3, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
