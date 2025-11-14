// 函数: sub_6ef0e0
// 地址: 0x6ef0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg6
int32_t ebx = ebp[1]
int32_t esi = ebp[3]
int32_t ecx_2 = ebx * arg7 + arg5

if (ebx s>= esi)
    return 

int32_t edx_1 = ebp[2]
int32_t eax = ebx * 8

do
    int32_t edi_1 = *ebp
    
    if (edi_1 s< edx_1)
        int32_t var_20_1 = ebx
        int32_t esi_2 = edi_1 + eax
        int32_t edi_2 = edi_1
        
        do
            edx_1.b = *(arg1 + (esi_2 << 1))
            *(ecx_2 + (edi_2 << 2)) = edx_1.b
            ebx.b = *(arg2 + (esi_2 << 1))
            *(ecx_2 + (edi_2 << 2) + 1) = ebx.b
            int32_t eax_4
            eax_4.b = *(arg3 + (esi_2 << 1))
            *(ecx_2 + (edi_2 << 2) + 2) = eax_4.b
            int32_t eax_5
            eax_5.b = *(arg4 + (esi_2 << 1))
            *(ecx_2 + (edi_2 << 2) + 3) = eax_5.b
            esi_2 += 1
            edi_2 += 1
            edx_1 = arg6[2]
        while (edi_2 s< edx_1)
        
        ebx = var_20_1
        ebp = arg6
        esi = ebp[3]
    
    ecx_2 += arg7
    eax += 8
    ebx += 1
while (ebx s< esi)
