// 函数: sub_558a80
// 地址: 0x558a80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_50 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t esi = arg1[1]
int32_t result = (esi u>> 2) s/ 3
int32_t* var_34 = ebx

if (result s> 0)
    void* edi_1
    
    if (esi != 0)
        edi_1 = *arg1
    else
        edi_1 = nullptr
    
    if (result s> 0)
        int32_t* ebp_1 = edi_1 + 4
        var_3c = result
        int32_t i
        
        do
            int32_t edi_2 = *ebx
            int32_t esi_1 = *ebp_1
            int32_t ecx_3 = ebx[1] - edi_2
            int32_t edx_1
            edx_1:result = muls.dp.d(0x92492493, ecx_3)
            
            if (esi_1 u< ecx_3 s/ 0x1c)
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                sub_401180(&var_2c, 0xffffffff, edi_2 + esi_1 * 0x1c, 0)
                int32_t var_38
                int32_t* var_54_1 = &var_38
                int32_t var_4 = 0
                ebx.b = sub_537dc0(arg3 + 0x4c, &var_2c, arg3 + 0x4c) == 0
                int32_t var_4_1 = 0xffffffff
                
                if (var_18_1 u>= 0x10)
                    int32_t var_54_2 = var_2c.d
                    sub_6b4d5b()
                
                bool cond:0_1 = ebx.b != 0
                ebx = var_34
                int32_t eax_11
                eax_11.b = cond:0_1
                result = (eax_11 - 1) & var_38
                *ebp_1 = result
            else
                *ebp_1 = 0
            
            ebp_1 = &ebp_1[3]
            i = var_3c
            var_3c -= 1
        while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
