// 函数: sub_6f0840
// 地址: 0x6f0840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg3[1]
int32_t ecx = arg3[3]
int32_t ebp_2 = edi * arg4 + arg2

if (edi s>= ecx)
    return 

int32_t eax = arg3[2]
int32_t edx_2 = edi << 4

do
    char* ebx_1 = *arg3
    
    if (ebx_1 s< eax)
        do
            int32_t eax_2 = sx.d(*(arg1 + edx_2 + (ebx_1 << 1)))
            
            if (eax_2 s> 0xff)
                eax_2 = 0xff
            else if (eax_2 s< 0)
                eax_2 = 0
            
            ebx_1[ebp_2] = eax_2.b
            ebx_1 = &ebx_1[1]
            eax = arg3[2]
        while (ebx_1 s< eax)
        
        ecx = arg3[3]
    
    ebp_2 += arg4
    edx_2 += 0x10
    edi += 1
while (edi s< ecx)
