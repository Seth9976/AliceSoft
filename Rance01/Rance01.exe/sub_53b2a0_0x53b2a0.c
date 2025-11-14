// 函数: sub_53b2a0
// 地址: 0x53b2a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_30
int32_t* var_4c = &var_30
int32_t var_4 = 0
bool var_31 = sub_537dc0(sub_401270(&var_2c, 1, 0x74ce6c), &var_2c, &arg4[0x13]).b == 0
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_4c_1 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
void** result

if (var_31 == 0)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x6bca1af3, arg4[0x2f] - arg4[0x2e])
    int32_t eax_6 = var_30
    int32_t edx_2 = edx_1 s>> 5
    int32_t edi_2
    int32_t* edi_3
    
    if (eax_6 u< (edx_2 u>> 0x1f) + edx_2)
        edi_2 = eax_6 * 0x4c
        edi_3 = edi_2 + arg4[0x2e]
    
    if (eax_6 u< (edx_2 u>> 0x1f) + edx_2 && edi_2 != neg.d(arg4[0x2e]))
        int32_t entry_ebx
        
        if (sub_552a10(edi_3, &arg4[0x77], &var_30) != 0)
            if (sub_53ada0(arg4, var_30).b == 0)
                result.b = 0
            else
                int32_t ecx_10 = *edi_3
                sub_53cad0(ecx_10, 0, arg4, 0xfffffffe, ecx_10)
                result.b = 1
        else
            result = sub_53d0e0(arg4, 0x74cf6c, eax_4, arg3, arg2, arg1, entry_ebx)
    else
        int32_t var_4c_2 = eax_6
        result = sub_53d1c0(eax_6, edx_2, arg4, 0x74cebc)
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
