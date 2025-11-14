// 函数: sub_6aab30
// 地址: 0x6aab30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720aa1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_58 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
int32_t var_4 = 0
int32_t var_38_1 = 1
int32_t eax_6 = GetScrollPos(*(arg1 + 0x2b0), *(arg1 + 0x2bc))
int32_t eax_7
int32_t edx
edx:eax_7 = muls.dp.d(0x66666667, arg2[1] - *arg2)
int32_t edx_1 = edx s>> 4
int32_t i = (edx_1 u>> 0x1f) + edx_1
int32_t i_1 = i
int32_t edi_1 = divs.dp.d(sx.q(arg4), *(arg1 + 0x64)) + 1

if (edi_1 + eax_6 u> i)
    edi_1 = i - eax_6

int32_t var_44 = 0
int32_t* result

if (edi_1 == 0)
    result = arg3
else
    var_48 = eax_6
    int32_t ebp_4 = eax_6 * 0x28
    
    for (; i u> var_48; i = i_1)
        void* edx_4 = *arg2
        void* eax_11 = edx_4 + ebp_4
        
        if (sub_6aacf0(eax_11, edx_4, arg1) != 0)
            int32_t var_4_1 = 1
            int32_t var_2c
            sub_405150(sub_6a8080(eax_11, &var_2c), arg3)
            var_4_1.b = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_5c_4 = var_2c
                sub_6b4d5b()
        else
            int32_t* ecx_6 = edx_4 + ebp_4
            void* var_5c_1 = eax_11
            sub_6a8f00(&ecx_6[0xa], eax_11, ecx_6, arg2[1])
            void* ecx_7 = arg2[1]
            void* var_64_1 = eax_11
            void* var_68_1 = ecx_7
            sub_6a8f60(ecx_7 - 0x28, eax_11)
            arg2[1] -= 0x28
            int32_t eax_16
            int32_t edx_7
            edx_7:eax_16 = muls.dp.d(0x66666667, arg2[1] - *arg2)
            int32_t edx_8 = edx_7 s>> 4
            var_44 -= 1
            var_48 -= 1
            edi_1 = (edx_8 u>> 0x1f) + edx_8 - eax_6
            ebp_4 -= 0x28
        
        var_48 += 1
        int32_t eax_19 = var_44 + 1
        ebp_4 += 0x28
        var_44 = eax_19
        
        if (eax_19 u>= edi_1)
            break
    
    result = arg3

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
