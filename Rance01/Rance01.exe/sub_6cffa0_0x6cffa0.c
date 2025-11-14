// 函数: sub_6cffa0
// 地址: 0x6cffa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg3
int32_t edx = arg1[3]
int32_t ebx
int32_t ebp_5

if (ecx s<= edx)
    ebx = *arg1
    ebp_5 = arg1[1]
else
    ebx = *arg1
    int32_t edi_1 = ecx
    
    while (true)
        arg1[7] += 1
        edi_1 -= edx
        int32_t ebx_1 = ebx | (arg2 s>> edi_1.b & ((1 << edx.b) - 1))
        char* edx_3 = arg1[4]
        
        if (edx_3 u>= arg1[6])
            return 0xffffffe4
        
        arg1[4] = &edx_3[1]
        *edx_3 = ebx_1.b
        
        if (ebx_1 == 0xff)
            char* edx_4 = arg1[4]
            
            if (edx_4 u>= arg1[6])
                return 0xffffffe4
            
            arg1[4] = &edx_4[1]
            *edx_4 = 0
            arg1[7] += 1
        
        ebx = 0
        ebp_5 = 0
        edx = 8
        
        if (edi_1 s<= 8)
            break
        
        arg1[3] = 8
        *arg1 = 0
        arg1[1] = 0
    
    ecx = edi_1

int32_t edx_5 = edx - ecx
arg1[3] = edx_5
int32_t eax_3 = (arg2 & ((1 << ecx.b) - 1)) << edx_5.b
int32_t eax_4
int32_t edx_6
edx_6:eax_4 = sx.q(eax_3)
*arg1 = ebx | eax_3
arg1[1] = ebp_5 | edx_6
return 0
