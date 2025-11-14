// 函数: sub_6c26ce
// 地址: 0x6c26ce
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1

if (*esi == 0x80000003)
    return 

int32_t edi
int32_t var_18_1 = edi

if (__getptd()[0x20] == 0)
label_6c273f:
    
    if (*(arg5 + 0xc) == 0)
        _inconsistency()
        noreturn
    
    int32_t esi_1 = arg6
    int32_t var_10
    int32_t var_8
    int32_t* eax = sub_6bb594(arg5, arg7, esi_1, &var_8, &var_10)
    
    if (var_8 u< var_10)
        eax = &eax[3]
        int32_t* var_c_1 = eax
        
        do
            if (esi_1 s>= eax[-3] && esi_1 s<= eax[-2])
                void* ecx_4 = (*eax << 4) + eax[1]
                void* edx_1 = *(ecx_4 - 0xc)
                
                if ((edx_1 == 0 || *(edx_1 + 8) == 0) && (*(ecx_4 - 0x10) & 0x40) == 0)
                    sub_6c2660(arg2, &eax[-3], arg1, arg3, arg4, arg5, nullptr, arg7, arg8)
                    esi_1 = arg6
                    eax = var_c_1
            
            var_8 += 1
            eax = &eax[5]
            var_c_1 = eax
        while (var_8 u< var_10)
else
    void* edi_1 = &__getptd()[0x20]
    int32_t eax_3 = sub_6bb7eb()
    
    if (*edi_1 == eax_3)
        goto label_6c273f
    
    int32_t eax_4 = *esi
    
    if (eax_4 == 0xe0434f4d || eax_4 == 0xe0434352)
        goto label_6c273f
    
    int32_t* __saved_ebx_1 = arg8
    
    if (sub_6bb41e(esi, arg2, arg3, arg4, arg5, arg7) == 0)
        goto label_6c273f
