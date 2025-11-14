// 函数: sub_5c83d0
// 地址: 0x5c83d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if ((*(*arg1 + 0xc))(arg2).b == 0)
    result.b = 0
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_4 = 0
    void* eax_6 = arg1[5]
    int32_t esi_1 = arg2 << 4
    uint32_t ebp_1 = zx.d(*(eax_6 + esi_1 + 2))
    uint32_t esi_2 = zx.d(*(eax_6 + esi_1))
    
    if (esi_2 == 0)
        result.b = 0
    else if (sub_5c8a50(arg1, esi_2 - 1).b == 0)
        if (var_18_1 u>= 0x10)
            int32_t var_40_3 = var_2c.d
            sub_6b4d5b()
        
        result.b = 0
    else
        void* esi_6 = (esi_2 - 1) * 0x30 + arg1[1]
        sub_401180(&var_2c, 0xffffffff, esi_6 + 4, 0)
        
        if (*(*(esi_6 + 0x20) + (ebp_1 << 2)) != 0)
            if (var_18_1 u>= 0x10)
                int32_t var_40_4 = var_2c.d
                sub_6b4d5b()
            
            result.b = 1
        else if (var_18_1 u< 0x10)
            result.b = 0
        else
            int32_t var_40_2 = var_2c.d
            sub_6b4d5b()
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
