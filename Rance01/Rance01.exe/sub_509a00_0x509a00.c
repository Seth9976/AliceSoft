// 函数: sub_509a00
// 地址: 0x509a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7282b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_48 = edi
int32_t eax_2 = data_78c474 ^ &var_48
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 != 0 && arg1[0x1a4] != 0 && sub_508190(arg1, 0) != 0)
    int32_t eax_4 = *arg1
    int32_t ecx_1 = *(eax_4 + 0x140)
    int32_t eax_5 = *(eax_4 + 0x144)
    int32_t var_38 = ecx_1
    int32_t* var_30 = nullptr
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    char var_24_1 = 0
    int32_t var_20_1 = 0
    char var_1c_1 = 0
    int32_t var_c_1 = 0
    
    if (sub_50a8a0(&var_30, 0, ecx_1, eax_5, 1, 1, arg1[1]) != 0 && (*(*arg1[1] + 0x4c))(eax_2) != 0
            && sub_50a930(&var_30) != 0)
        int32_t* ecx_3 = arg1[1]
        int32_t* var_50_2 = ecx_3
        
        if ((*(*ecx_3 + 0x44))(0, fconvert.s(float.t(1))) != 0 && sub_508580(arg1) != 0
                && sub_50a950(&var_30) != 0)
            char eax_17
            int32_t ecx_5
            eax_17, ecx_5 = (*(*arg1[1] + 0x50))()
            
            if (eax_17 != 0)
                int32_t* edi_1 = sub_50c050(ecx_5, eax_5, arg1[0x1a4], var_38)
                
                if (edi_1 != 0)
                    int32_t* ecx_6 = var_30
                    void* edx_6
                    
                    if (ecx_6 != 0)
                        char eax_23 = (*(*ecx_6 + 0x2c))(edi_1)
                        edx_6 = *edi_1
                        
                        if (eax_23 != 0)
                            char* esi_4 = (*(edx_6 + 8))(0, 0)
                            int32_t entry_j
                            int32_t j_1 = entry_j
                            int32_t eax_28 = (*(*edi_1 + 0x1c))() - (j_1 << 2)
                            int32_t i_2
                            
                            if (i_2 s> 0)
                                int32_t i_1 = i_2
                                int32_t i
                                
                                do
                                    if (j_1 s> 0)
                                        int32_t j
                                        
                                        do
                                            uint32_t ecx_14 = zx.d(*esi_4)
                                            *(arg2 + (ecx_14 << 2)) += 1
                                            uint32_t ecx_15 = zx.d(esi_4[1])
                                            *(arg2 + (ecx_15 << 2)) += 1
                                            uint32_t ecx_16 = zx.d(esi_4[2])
                                            *(arg2 + (ecx_16 << 2)) += 1
                                            esi_4 = &esi_4[4]
                                            j = j_1
                                            j_1 -= 1
                                        while (j != 1)
                                        j_1 = entry_j
                                    
                                    esi_4 = &esi_4[eax_28]
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                            
                            (*(*edi_1 + 4))()
                            ExceptionList = 0xffffffff
                            sub_50a870(&var_38)
                            int32_t result
                            result.b = 1
                            fsbase->NtTib.ExceptionList = var_1c_1.d
                            return result
                    else
                        edx_6 = *edi_1
                    
                    (*(edx_6 + 4))()
    
    int32_t var_c_2 = 0xffffffff
    sub_50a870(&var_30)

fsbase->NtTib.ExceptionList = ExceptionList
return false
