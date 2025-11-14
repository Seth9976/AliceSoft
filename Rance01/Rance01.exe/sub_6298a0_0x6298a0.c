// 函数: sub_6298a0
// 地址: 0x6298a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_725a30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[0x3b]
var_6c = arg3
int32_t eax_6 = arg2[0x3c]
int32_t result

if (ecx != eax_6)
    result = (eax_6 - ecx) s/ 0x28

if (ecx == eax_6 || *(arg2[0x3b] + result * 0x28 - 0x28) != arg1)
    void* eax_11 = arg2[0x37]
    arg2[0x4d] = 0xffffffff
    result = (*(**(eax_11 + 4) + 0x14))(arg1)
    
    if (result == 1)
    label_629955:
        
        if (arg4 != 0)
            void* eax_13 = arg2[0x3c]
            int32_t* ecx_4 = arg2[0x3b]
            
            if (ecx_4 != eax_13)
                int32_t* edx_5 = var_6c
                int32_t* var_80_2 = edx_5
                int32_t* eax_14 = sub_62a560(eax_13, edx_5, ecx_4, eax_13)
                int32_t* var_88_1 = var_6c
                sub_62a5b0(eax_14, arg2[0x3c])
                arg2[0x3c] = eax_14
        
        int32_t* ecx_6 = var_6c
        int32_t var_60 = arg1
        int32_t var_5c_1 = 0xffffffff
        int32_t var_58_1 = 0
        int32_t var_40_1 = 0xf
        int32_t var_44_1 = 0
        char var_54 = 0
        sub_401180(&var_54, 0xffffffff, ecx_6, 0)
        int32_t var_c_1 = 0
        sub_62a2d0(&var_60, &arg2[0x3b])
        int32_t var_c_2 = 0xffffffff
        
        if (var_40_1 u>= 0x10)
            int32_t var_80_3 = var_54.d
            sub_6b4d5b()
        
        sub_629380(arg2)
        sub_629b60(arg2)
        char var_38
        int32_t* eax_16 = sub_62a230(arg2, &var_38)
        int32_t var_c_3 = 1
        sub_401180(arg2[0x39] + 0x48, 0xffffffff, eax_16, 0)
        int32_t var_c_4 = 0xffffffff
        int32_t var_24
        
        if (var_24 u>= 0x10)
            int32_t var_80_6 = var_38.d
            sub_6b4d5b()
        
        void* edx_8 = arg2[0x39]
        int32_t var_24_1 = 0xf
        int32_t var_28_1 = 0
        var_38 = 0
        result = sub_61fb20(edx_8)
    else if (result s> 2 && result s<= 5)
        goto label_629955

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return result
