// 函数: sub_5b46a0
// 地址: 0x5b46a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_721dbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_18 = arg1
void* ecx = __chkstk(0x102c)
int32_t eax_2 = data_78c474 ^ &var_18
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
int32_t arg_1018
fsbase->NtTib.ExceptionList = &arg_1018
void** arg_c
void** ecx_1 = arg_c
int32_t eax_6 = *(ecx + 0x54)
void** result = eax_6 - *(ecx + 0x58)

if (eax_6 == *(ecx + 0x58))
    *ecx_1 = nullptr
    result.b = 0
else
    void* result_2 = arg3
    void** result_1 = result_2
    
    if (result_2 u> result)
        result_1 = result
        result_2 = result
    
    if (*(ecx + 0x48) != 0 && sub_5b44e0(ecx + 8) s< result_2)
        while (true)
            int32_t ebx_1 = sub_5c6cd0(*(ecx + 0x48), &arg_c, 0x1000, &var_18)
            int32_t var_14 = ebx_1
            
            if (ebx_1 s> 0)
                var_4 = 0
                __builtin_memset(&__return_addr, 0, 8)
                int32_t arg_1020 = 0
                void* esi_1 = *(ecx + 8)
                int32_t* eax_10 = sub_5b45c0(esi_1, *(esi_1 + 4), &var_4)
                int32_t ecx_4 = *(ecx + 0xc)
                
                if (0xffffffe - ecx_4 u< 1)
                    sub_6b47bf("list<T> too long")
                    noreturn
                
                *(ecx + 0xc) = ecx_4 + 1
                *(esi_1 + 4) = eax_10
                *eax_10[1] = eax_10
                arg_1020 = 0xffffffff
                var_4 = 0
                __builtin_memset(&__return_addr, 0, 8)
                void* esi_2 = *(*(ecx + 8) + 4)
                int128_t* eax_12 = *(esi_2 + 0xc)
                int32_t edx_2 = *(esi_2 + 8)
                void* ecx_8 = eax_12 - edx_2
                
                if (ecx_8 u> ebx_1)
                    int32_t edx_3 = edx_2 + ebx_1
                    
                    if (edx_3 != eax_12)
                        void* ecx_10 = 0
                        var_18 = ecx_10
                        sub_6b49d0(edx_3, eax_12, ecx_10, eax_4)
                        *(esi_2 + 0xc) = var_18 + edx_3
                else if (ecx_8 u< ebx_1)
                    void* ebx_4 = edx_2 - eax_12 + var_14
                    
                    if (0xffffffff - ebx_4 u< ecx_8)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    void* ecx_12 = ecx_8 + ebx_4
                    int32_t eax_15 = *(esi_2 + 0x10) - edx_2
                    
                    if (ecx_12 u> eax_15)
                        uint32_t edx_5 = eax_15 u>> 1
                        uint32_t eax_16
                        
                        if (0xffffffff - edx_5 u>= eax_15)
                            eax_16 = eax_15 + edx_5
                        else
                            eax_16 = 0
                        
                        if (eax_16 u< ecx_12)
                            eax_16 = ecx_12
                        
                        sub_424860(esi_2 + 8, eax_16)
                    
                    int128_t* ecx_13 = *(esi_2 + 0xc)
                    void* eax_18 = *(esi_2 + 8) - ecx_13
                    
                    if (eax_18 != neg.d(var_14))
                        sub_6bc670(ecx_13, 0, eax_18 + var_14)
                    
                    ebx_1 = var_14
                    *(esi_2 + 0xc) = *(esi_2 + 8) + var_14
                
                sub_6c02a0(*(esi_2 + 8), &arg_c, ebx_1, eax_4)
                *(ecx + 0x5c) += ebx_1
                
                if (sub_5b44e0(ecx + 8) s< result_1)
                    continue
            
            result_2 = result_1
            break
    
    var_18 = nullptr
    sub_5b42b0(ecx + 8, arg2, result_2, &var_18)
    *(ecx + 0x58) += result_2
    *ecx_1 = result_2
    result.b = 1

fsbase->NtTib.ExceptionList = arg_1018
sub_6b4885(eax_2 ^ &var_18)
return result
