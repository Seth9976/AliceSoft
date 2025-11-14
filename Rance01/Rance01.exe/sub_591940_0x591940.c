// 函数: sub_591940
// 地址: 0x591940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7128d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0xb] s> 0)
    int32_t var_1c
    sub_6b05e0(&var_1c, &arg1[5])
    int32_t var_4 = 0
    int32_t edi_1 = var_1c
    int32_t var_18
    
    if ((*(*arg1 + 8))(arg1[0xb], edi_1, (var_18 - edi_1) s>> 2, zx.d(arg1[0xf].b)) == 0)
        if (edi_1 != 0)
            int32_t var_28_3 = edi_1
            sub_6b4d5b()
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (edi_1 != 0)
        int32_t var_28_4 = edi_1
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return 1
