// 函数: sub_6ec1e0
// 地址: 0x6ec1e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg6[1]
int32_t ebx = arg6[3]
int32_t esi_2 = edi * arg7 + arg5

if (edi s>= ebx)
    return 

int32_t ecx_1 = arg6[2]
int32_t edx_2 = edi << 4
int32_t eax = edi * 8

do
    int32_t ebp_2 = *arg6
    
    if (ebp_2 s< ecx_1)
        int32_t var_18_1 = ebp_2 + eax
        
        do
            int32_t ebx_3 = sx.d(*(arg1 + (var_18_1 << 1)))
            int32_t ecx_4 = sx.d(*(arg3 + (var_18_1 << 1)))
            int32_t esi_4 = sx.d(*(arg2 + (var_18_1 << 1)))
            int32_t edx_5 = sx.d(((ecx_4 * 0x167 - 0xb2f5) s>> 8).w) + ebx_3
            
            if (edx_5 s> 0xff)
                edx_5 = 0xff
            else if (edx_5 s< 0)
                edx_5 = 0
            
            *(esi_2 + (ebp_2 << 2)) = neg.b(edx_5.b) - 1
            int32_t ecx_8 = neg.d(sx.d(((esi_4 * 0x58 + ecx_4 * 0xb7 - 0x87f6) s>> 8).w)) + ebx_3
            
            if (ecx_8 s> 0xff)
                ecx_8 = 0xff
            else if (ecx_8 s< 0)
                ecx_8 = 0
            
            *(esi_2 + (ebp_2 << 2) + 1) = neg.b(ecx_8.b) - 1
            int32_t ebx_4 = ebx_3 + sx.d(((esi_4 * 0x1c6 - 0xe251) s>> 8).w)
            
            if (ebx_4 s> 0xff)
                ebx_4 = 0xff
            else if (ebx_4 s< 0)
                ebx_4 = 0
            
            *(esi_2 + (ebp_2 << 2) + 2) = neg.b(ebx_4.b) - 1
            int32_t edx_6
            edx_6.b = *(arg4 + edx_2 + (ebp_2 << 1))
            *(esi_2 + (ebp_2 << 2) + 3) = edx_6.b
            ebp_2 += 1
            ecx_1 = arg6[2]
            var_18_1 += 1
        while (ebp_2 s< ecx_1)
        
        ebx = arg6[3]
    
    esi_2 += arg7
    edx_2 += 0x10
    eax += 8
    edi += 1
while (edi s< ebx)
