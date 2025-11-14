// 函数: sub_6f4190
// 地址: 0x6f4190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79badc
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_74
int32_t* var_1c = &var_74
__builtin_memset(&var_74, 0, 0x14)
int32_t* edx = *(arg2 + 8)
int32_t var_8_1 = 0
uint32_t var_5c
int32_t result_1 = sub_6f2b00(arg2, &var_5c)
int32_t result = result_1
int32_t var_70
int32_t var_6c

if (result_1 == 0)
    uint32_t eax_1 = var_5c
    
    if (eax_1 s>= 2)
        *edx = eax_1 + 2
        uint32_t esi_2 = var_5c - 2
        var_5c = esi_2
        int32_t* var_78_2 = &var_74
        int32_t result_2 = sub_6f2920(arg2, esi_2, &var_70, &var_74, &var_6c)
        result = result_2
        
        if (result_2 == 0)
            char* edx_2 = var_74
            var_74 = &edx_2[1]
            *arg4 = zx.d(*edx_2)
            int32_t* var_78_3 = &var_74
            arg4[0xd] = operator new(*arg4 * 0x18)
            int32_t* var_30_1 = arg4
            int32_t* edx_4 = arg4[0xd]
            
            if (edx_4 == 0)
                result = 0xfffffffb
            else
                int32_t* var_64_1 = edx_4
                int32_t var_34_1 = 0
                int32_t var_58_1 = 0
                
                if (*var_30_1 s<= 0)
                label_6f443f:
                    void* eax_25 = var_74
                    var_74 = eax_25 + 1
                    var_30_1[2] = zx.d(*eax_25)
                    var_74 = eax_25 + 2
                    arg4[3] = zx.d(*(eax_25 + 1))
                    arg4[4] = zx.d(*(eax_25 + 2)) s>> 4
                    var_74 = eax_25 + 3
                    arg4[5] = zx.d(*(eax_25 + 2)) & 0xf
                    int32_t var_8_2 = 0xffffffff
                else
                    int32_t* var_54_1 = edx_4
                    
                    while (true)
                        char* edi_4 = var_74
                        var_74 = &edi_4[1]
                        uint32_t i = zx.d(*edi_4)
                        uint32_t i_1 = i
                        int32_t eax_14 = zx.d(edi_4[1]) s>> 4
                        int32_t var_4c_1 = eax_14
                        var_74 = &edi_4[2]
                        int32_t ecx_6 = zx.d(edi_4[1]) & 0xf
                        int32_t var_48_1 = ecx_6
                        
                        if (eax_14 s< 0 || eax_14 s> 4 || ecx_6 s> 4)
                            result = 0xffffffeb
                            void** var_78_5 = &var_74
                            int32_t var_7c_5 = var_30_1[0xd]
                            sub_6b4d5b()
                            arg4[0xd] = 0
                            break
                        
                        int32_t ecx_7 = 0
                        int32_t var_44_1 = 0
                        int32_t eax_17 = *(arg3 + 0x1c)
                        
                        if (eax_17 s> 0)
                            while (i != *((ecx_7 << 4) + *(arg3 + 0x28)))
                                ecx_7 += 1
                                int32_t var_44_2 = ecx_7
                                
                                if (ecx_7 s>= eax_17)
                                    break
                        
                        if (ecx_7 s< eax_17)
                            int32_t eax_19 = ecx_7 << 4
                            int32_t ebx_5 = *(eax_19 + *(arg3 + 0x28) + 0xc)
                            
                            if (ebx_5 s>= 0 && ebx_5 s<= 4)
                                *edx_4 = ecx_7
                                edx_4[1] = *(eax_19 + *(arg3 + 0x28) + 4)
                                edx_4[2] = *(eax_19 + *(arg3 + 0x28) + 8)
                                edx_4[3] = eax_14 * 0x670 + arg1 + 0x1d24
                                edx_4[4] = ecx_6 * 0x670 + arg1 + 0x364
                                edx_4[5] = *(eax_19 + *(arg3 + 0x28) + 0xc) * 0xb4 + arg1 + 0x94
                                *(var_34_1 + arg1 + 0x37a0) = eax_14.b
                                *(arg1 + var_34_1 + 0x379c) = ecx_6.b
                                int32_t ebx_13 = var_34_1 + 1
                                var_34_1 = ebx_13
                                int32_t var_58_2 = ebx_13
                                edx_4 = &edx_4[6]
                                int32_t* var_64_2 = edx_4
                                var_30_1 = arg4
                                
                                if (ebx_13 s>= *arg4)
                                    goto label_6f443f
                                
                                continue
                        
                        result = 0xffffffeb
                        void** var_78_4 = &var_74
                        int32_t var_7c_4 = var_30_1[0xd]
                        sub_6b4d5b()
                        arg4[0xd] = 0
                        break
    else
        result = 0xffffffeb

if (var_6c != 0 && var_70 != 0)
    int32_t* var_78_1 = &var_74
    int32_t var_7c_1 = var_70
    sub_6b4d5b()
    var_70 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
