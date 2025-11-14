// 函数: sub_669840
// 地址: 0x669840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4_1 = arg1
int32_t* edx = arg2
int32_t ebp = edx[4]

if (ebp == 0)
    return 0

int32_t* eax_1 = *arg1
int32_t edi_2 = (arg1[1] - eax_1) s>> 2
int32_t var_4 = 0

if (edi_2 s> 0)
    int32_t* ebx_1 = eax_1
    int32_t eax_6
    
    do
        if (*ebx_1 != 0)
            int32_t* eax_3 = *ebx_1 + 0xc
            int32_t* ecx_1
            
            if (edx[5] u< 0x10)
                ecx_1 = edx
            else
                ecx_1 = *edx
            
            int32_t esi_1 = eax_3[4]
            int32_t edx_1 = esi_1
            
            if (esi_1 u>= ebp)
                edx_1 = ebp
            
            if (eax_3[5] u>= 0x10)
                eax_3 = *eax_3
            
            if (sub_402320(eax_3, eax_3, ecx_1, edx_1) == 0 && esi_1 u>= ebp)
                int32_t eax_4
                eax_4.b = esi_1 != ebp
                
                if (eax_4 == 0)
                    return var_4 + 1
            
            edx = arg2
        
        eax_6 = var_4 + 1
        ebx_1 = &ebx_1[1]
        var_4 = eax_6
    while (eax_6 s< edi_2)

return 0
