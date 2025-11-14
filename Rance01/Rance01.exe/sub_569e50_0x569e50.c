// 函数: sub_569e50
// 地址: 0x569e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_80
int32_t eax_2 = data_78c474 ^ &var_80
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_5 = zx.d(arg4)

if (eax_5 - 0x9c41 u<= 0x69)
    switch (eax_5)
        case 0x9c41
            sub_565e10(*(arg3 + 0x3b8), arg2)
            sub_563a50(arg3 + 0x1fc)
        case 0x9c42
            sub_56a080(arg3, arg2)
        case 0x9c43
            SendMessageA(arg2, 0x10, 0, 0)
        case 0x9c44
            void var_2c
            char* eax_10 = sub_566db0(&var_2c, *(arg3 + 0x3b8))
            int32_t var_4 = 0
            void var_48
            void* var_94_3 = &var_48
            void var_64
            int32_t* eax_14 = &var_64
            var_4.b = 1
            var_4.b = 2
            sub_4b3c20(eax_14, 
                sub_402c60(eax_14, "\r\n\r\nVersion ", 
                    sub_402be0(&var_48, (*(*(*(arg3 + 0x3b8) + 0x14) + 0xc))(eax_4))), 
                eax_10, &var_80)
            sub_401110(&var_64)
            sub_401110(&var_48)
            sub_401110(&var_2c)
            int32_t* eax_15 = var_80
            int32_t var_6c
            
            if (var_6c u< 0x10)
                eax_15 = &var_80
            
            sub_604e10(eax_15)
            sub_401110(&var_80)
        case 0x9c4a, 0x9c4b, 0x9c4c, 0x9c4d, 0x9c4e, 0x9c4f, 0x9c50, 0x9c51, 0x9c52, 0x9c53
            void* ebx_1 = *(arg3 + 0x3b8)
            
            if (eax_5 - 0x9c4a s>= 0 && eax_5 - 0x9c4a s< *(ebx_1 + 0x684))
                (*(**(*(ebx_1 + 0x674) + ((eax_5 - 0x9c4a) << 3)) + 0xc))(eax_4)
        case 0x9caa
            sub_56b0b0(arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_80)
return 0
