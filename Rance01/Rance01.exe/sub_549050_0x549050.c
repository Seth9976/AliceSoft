// 函数: sub_549050
// 地址: 0x549050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71eae8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t var_34 = data_78c474 ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
int32_t* result
int32_t ebp
int32_t edi

if (sub_54d120(ebp, arg1, edi, arg1, &var_2c, "system.MsgBoxOkCancel").b != 0)
    char* eax_5 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_5 = &var_2c
    
    int32_t edx_1
    edx_1.b = sub_604d80(eax_5) == IDOK
    **(arg1 + 0x2b0) = edx_1
    *(arg1 + 0x2b0) += 4
    
    if (var_18 u>= 0x10)
        int32_t var_38_3 = var_2c.d
        sub_6b4d5b()
    
    result.b = 1
else
    if (var_18 u>= 0x10)
        int32_t var_38_1 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
