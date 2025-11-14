// 函数: sub_548740
// 地址: 0x548740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = data_78c474 ^ &var_44
int32_t __saved_esi
int32_t var_54 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = *(arg1 + 0x28c)
int32_t ebx = *eax_5
int32_t ecx = *(arg1 + 0x1a4)
*(arg1 + 0x28c) = &eax_5[1]
void* result

if (ecx s< 0)
    result.b = 1
else
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = muls.dp.d(0x6bca1af3, *(arg1 + 0xbc) - *(arg1 + 0xb8))
    int32_t edx_4 = edx_3 s>> 5
    int32_t eax_9 = (edx_4 u>> 0x1f) + edx_4
    int32_t ebp_2
    int32_t* ebp_3
    
    if (ecx u< eax_9)
        ebp_2 = ecx * 0x4c
        ebp_3 = ebp_2 + *(arg1 + 0xb8)
    
    if (ecx u>= eax_9 || ebp_2 == neg.d(*(arg1 + 0xb8)))
        int32_t var_58_1 = ecx
        result = sub_53d1c0(eax_9, edx_4, arg1, 0x750210)
    else
        int32_t var_58_2
        
        if (ebx u>= (*(arg1 + 0x5c) - *(arg1 + 0x58)) s>> 2)
            var_58_2 = ebx
            result = sub_53d1c0(eax_9, edx_4, arg1, 0x750244)
        else
            int32_t ecx_5 = *(arg1 + 0x58)
            
            if (ecx_5 == *(arg1 + 0x5c))
                var_58_2 = ebx
                result = sub_53d1c0(eax_9, edx_4, arg1, 0x750244)
            else
                eax_9 = *(arg1 + 0x68)
                
                if (eax_9 == *(arg1 + 0x6c))
                    var_58_2 = ebx
                    result = sub_53d1c0(eax_9, edx_4, arg1, 0x750244)
                else
                    int32_t edx_5 = *(ecx_5 + (ebx << 2))
                    edx_4 = edx_5 + eax_9
                    
                    if (edx_5 != neg.d(eax_9))
                        char var_38
                        sub_402be0(&var_38, edx_4)
                        int32_t var_4 = 0
                        int32_t var_3c
                        int32_t edx_6
                        result, edx_6 = sub_552d50(arg1 + 0x1dc, &var_38, &var_3c)
                        bool var_3d_1 = result.b == 0
                        int32_t var_4_1 = 0xffffffff
                        int32_t var_24
                        
                        if (var_24 u>= 0x10)
                            int32_t var_58_4 = var_38.d
                            result, edx_6 = sub_6b4d5b()
                        
                        int32_t var_24_1 = 0xf
                        int32_t var_28_1 = 0
                        var_38 = 0
                        
                        if (var_3d_1 != 0)
                            sub_53d1c0(result, edx_6, arg1, 0x75027c)
                            result.b = 0
                        else if (ebp_3[0xa] != 3)
                            result.b = 0
                        else
                            int32_t edx_9 = (*(arg1 + 0x5c) - *(arg1 + 0x58)) s>> 2
                            int32_t var_1c = var_3c
                            int32_t var_18_1 = edx_9
                            int32_t var_14_1 = ebx
                            void* eax_13
                            int32_t edx_10
                            eax_13, edx_10 = sub_552a10(ebp_3, arg1 + 0x1dc, &var_3c)
                            
                            if (eax_13 != 0)
                                if (sub_53ada0(arg1, var_3c).b == 0)
                                    result.b = 0
                                else
                                    int32_t eax_14
                                    int32_t ecx_10
                                    int32_t edx_11
                                    eax_14, ecx_10, edx_11 = sub_5501a0(3, eax_13, &var_1c)
                                    
                                    if (eax_14.b != 0)
                                        sub_53cad0(ecx_10, 1, arg1, 
                                            *(arg1 + 0x28c) - *(arg1 + 0x290), *ebp_3)
                                        result.b = 1
                                    else
                                        sub_53d1c0(eax_14, edx_11, arg1, 0x7502ec)
                                        result.b = 0
                            else
                                sub_53d1c0(eax_13, edx_10, arg1, 0x7502b4)
                                result.b = 0
                    else
                        var_58_2 = ebx
                        result = sub_53d1c0(eax_9, edx_4, arg1, 0x750244)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
return result
