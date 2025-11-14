// 函数: sub_6e7e90
// 地址: 0x6e7e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg5
int32_t esi = edi[1]
int32_t ebx = edi[3]
int32_t ebp_2 = esi * arg6 + arg4

if (esi s>= ebx)
    return 

int32_t eax = edi[2]
int32_t edx_3 = esi * 8

do
    int32_t ecx_1 = *edi
    
    if (ecx_1 s< eax)
        int32_t ebx_1 = ecx_1 + edx_3
        int32_t var_20_1 = ecx_1
        char* ebp_3 = ecx_1 * 3
        int32_t edi_4
        
        do
            int32_t eax_2 = sx.d(*(arg3 + (ebx_1 << 1)))
            int32_t edx_4 = sx.d(*(arg2 + (ebx_1 << 1)))
            int32_t esi_8 = sx.d(*(arg1 + (ebx_1 << 1)))
            int32_t ecx_4 = sx.d(((eax_2 * 0x167 - 0xb2f5) s>> 8).w) + esi_8
            
            if (ecx_4 s> 0xff)
                ecx_4 = 0xff
            else if (ecx_4 s< 0)
                ecx_4 = 0
            
            ebp_3[ebp_2] = ecx_4.b
            int32_t eax_5 = neg.d(sx.d(((edx_4 * 0x58 + eax_2 * 0xb7 - 0x87f6) s>> 8).w)) + esi_8
            
            if (eax_5 s> 0xff)
                eax_5 = 0xff
            else if (eax_5 s< 0)
                eax_5 = 0
            
            ebp_3[ebp_2 + 1] = eax_5.b
            int32_t edx_9 = sx.d(((edx_4 * 0x1c6 - 0xe251) s>> 8).w) + esi_8
            
            if (edx_9 s> 0xff)
                edx_9 = 0xff
            else if (edx_9 s< 0)
                edx_9 = 0
            
            ebx_1 += 1
            ebp_3[ebp_2 + 2] = edx_9.b
            ebp_3 = &ebp_3[3]
            edi_4 = var_20_1 + 1
            eax = arg5[2]
            var_20_1 = edi_4
        while (edi_4 s< eax)
        edi = arg5
        ebx = edi[3]
    
    ebp_2 += arg6
    edx_3 += 8
    esi += 1
while (esi s< ebx)
