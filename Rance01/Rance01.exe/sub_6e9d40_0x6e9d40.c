// 函数: sub_6e9d40
// 地址: 0x6e9d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg5
int32_t ebx = edi[1]
int32_t ebp = edi[3]
int32_t ecx_2 = ebx * arg6 + arg4

if (ebx s>= ebp)
    return 

int32_t edx_1 = edi[2]
int32_t eax = ebx * 8

do
    int32_t esi_1 = *edi
    
    if (esi_1 s< edx_1)
        int32_t ebp_1 = esi_1 + eax
        int32_t esi_2 = esi_1
        
        do
            int32_t eax_4 = sx.d(*(arg1 + (ebp_1 << 1)))
            int32_t ebx_1 = sx.d(*(arg3 + (ebp_1 << 1)))
            int32_t edi_1 = sx.d(*(arg2 + (ebp_1 << 1)))
            int32_t ecx_5 = sx.d(((ebx_1 * 0x167 - 0xb2f5) s>> 8).w) + eax_4
            
            if (ecx_5 s> 0xff)
                ecx_5 = 0xff
            else if (ecx_5 s< 0)
                ecx_5 = 0
            
            *(ecx_2 + (esi_2 << 2)) = ecx_5.b
            int32_t edx_11 = neg.d(sx.d(((edi_1 * 0x58 + ebx_1 * 0xb7 - 0x87f6) s>> 8).w)) + eax_4
            
            if (edx_11 s> 0xff)
                edx_11 = 0xff
            else if (edx_11 s< 0)
                edx_11 = 0
            
            *(ecx_2 + (esi_2 << 2) + 1) = edx_11.b
            int32_t eax_5 = eax_4 + sx.d(((edi_1 * 0x1c6 - 0xe251) s>> 8).w)
            
            if (eax_5 s> 0xff)
                eax_5 = 0xff
            else if (eax_5 s< 0)
                eax_5 = 0
            
            ebp_1 += 1
            *(ecx_2 + (esi_2 << 2) + 2) = eax_5.b
            *(ecx_2 + (esi_2 << 2) + 3) = 0xff
            esi_2 += 1
            edx_1 = arg5[2]
        while (esi_2 s< edx_1)
        
        edi = arg5
        ebp = edi[3]
    
    ecx_2 += arg6
    eax += 8
    ebx += 1
while (ebx s< ebp)
