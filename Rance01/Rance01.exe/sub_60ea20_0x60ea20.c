// 函数: sub_60ea20
// 地址: 0x60ea20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7193f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_50 = edi
sub_60f0e0((*(edi + 0x10) - *(edi + 0xc)) s/ 0x1c, arg2 + 0xc0)
int32_t ebx = 0

if ((*(arg2 + 0xc4) - *(arg2 + 0xc0)) s/ 0x38 s> 0)
    var_54 = 0
    
    while (true)
        int32_t var_2c
        char* eax_14 = sub_60e070(ebx, &var_2c, edi)
        int32_t var_4 = 0
        sub_401ef0(*(arg2 + 0xc0) + var_54, eax_14)
        int32_t var_4_1 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_6c_2 = var_2c
            sub_6b4d5b()
        
        char var_48
        char* eax_16 = sub_60e0b0(ebx, &var_48, var_50)
        int32_t var_4_2 = 1
        sub_401ef0(var_54 + *(arg2 + 0xc0) + 0x1c, eax_16)
        int32_t var_4_3 = 0xffffffff
        int32_t var_34
        
        if (var_34 u>= 0x10)
            int32_t var_6c_4 = var_48.d
            sub_6b4d5b()
        
        int32_t ecx_7 = *(arg2 + 0xc4) - *(arg2 + 0xc0)
        var_54 += 0x38
        ebx += 1
        var_34 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        
        if (ebx s>= ecx_7 s/ 0x38)
            break
        
        edi = var_50

InvalidateRect(*(arg2 + 0x88), nullptr, 1)
BOOL result = UpdateWindow(*(arg2 + 0x88))
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
