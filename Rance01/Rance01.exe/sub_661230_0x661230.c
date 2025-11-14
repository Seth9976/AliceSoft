// 函数: sub_661230
// 地址: 0x661230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_1 = arg1[1] - *arg1
int32_t edi = 0

if (ebx_1 s<= 0)
    return 

do
    char* esi_1 = *arg1
    uint8_t edx = esi_1[edi]
    uint32_t ecx_1 = zx.d(edx)
    int32_t eax_4 = (ecx_1 s>> 1 & 0x55555555) + (ecx_1 & 0x55555555)
    int32_t ecx_6 = (eax_4 s>> 2 & 0x33333333) + (eax_4 & 0x33333333)
    int32_t eax_9 = (ecx_6 s>> 4 & 0xf0f0f0f) + (ecx_6 & 0xf0f0f0f)
    int32_t ecx_11 = (eax_9 s>> 8 & 0xff00ff) + (eax_9 & 0xff00ff)
    int32_t eax = zx.d((ecx_11 s>> 0x10).w) + (ecx_11 & 0xffff)
    int32_t ecx_14 = eax & 0x80000001
    
    if (ecx_14 s< 0)
        ecx_14 = ((ecx_14 - 1) | 0xfffffffe) + 1
    
    if (ecx_14 != 1)
        if (eax s< 8)
            int32_t i_3 = 8 - eax
            int32_t i
            
            do
                eax.b = 0
                
                if (edx s< 0)
                    eax.b = 1
                
                edx = (edx * 2) | eax.b
                i = i_3
                i_3 -= 1
            while (i != 1)
    else if (eax s< 8)
        int32_t i_2 = 8 - eax
        int32_t i_1
        
        do
            eax.b = 0
            
            if ((edx & 1) != 0)
                eax.b = 0x80
            
            edx = edx u>> 1 | eax.b
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    esi_1[edi] = edx
    edi += 1
while (edi s< ebx_1)
