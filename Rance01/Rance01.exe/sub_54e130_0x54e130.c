// 函数: sub_54e130
// 地址: 0x54e130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e528
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_ebx
int32_t var_38 = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg2 u> 0x2f)
    result.b = 0
else
    switch (arg2)
        case 0
            result.b = 1
        case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                0x17, 0x18, 0x19, 0x1a, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
                0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e
            result.b = 0
        case 0xa, 0xb, 0x1b, 0x2f
            **(arg1 + 0x2b0) = 0
            *(arg1 + 0x2b0) += 4
            result.b = 1
        case 0xc
            void var_2c
            sub_402be0(&var_2c, 0x72d98d)
            int32_t var_4 = 0
            int32_t ebx
            ebx.b = sub_552d50(arg1 + 0x1dc, &var_2c, &var_30) == 0
            sub_401110(&var_2c)
            
            if (ebx.b != 0)
                result.b = 0
            else
                **(arg1 + 0x2b0) = var_30
                *(arg1 + 0x2b0) += 4
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
