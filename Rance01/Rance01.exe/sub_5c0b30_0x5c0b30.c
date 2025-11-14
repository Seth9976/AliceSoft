// 函数: sub_5c0b30
// 地址: 0x5c0b30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_2 = arg6
void* esi = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(esi + 0x24))
int32_t edi_1 = (eax_1 - edx) s>> 1
arg2 = nullptr
int32_t eax_7 = sub_5b4eb0(edi_1 * i_2 * 4, esi)
int32_t var_4 = eax_7

if (i_2 s> 0)
    int32_t esi_1 = arg5
    int32_t* edx_2 = arg4 - esi_1
    void* ecx_2 = eax_7 - esi_1
    int32_t* var_c_1 = edx_2
    void* var_8_1 = ecx_2
    int32_t i_1 = i_2
    int32_t i
    
    do
        int32_t ebx_1 = *(edx_2 + esi_1)
        
        if (*esi_1 != 0)
            arg2 += 1
        
        int32_t eax_8 = 0
        
        if (edi_1 s> 0)
            int32_t* ecx_3 = ecx_2 + esi_1
            
            do
                *ecx_3 = *(ebx_1 + (eax_8 << 2))
                eax_8 += 1
                ecx_3 = &ecx_3[i_2]
            while (eax_8 s< edi_1)
            
            i_2 = arg6
            edx_2 = var_c_1
            ecx_2 = var_8_1
        
        esi_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (arg2 != 0)
        sub_5c0070(arg3, arg7, &var_4, arg1, arg3, 1)

return 0
