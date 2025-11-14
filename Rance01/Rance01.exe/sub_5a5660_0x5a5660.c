// 函数: sub_5a5660
// 地址: 0x5a5660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = 1 << (8 - arg3)
int32_t var_4 = ebx
int32_t edx
int128_t* eax_4 = sub_5a6290(ebx << 2, edx, arg1)
int32_t esi = 0
*arg2 = eax_4

if (ebx != 0)
    do
        int32_t eax_7
        
        if (arg1 == 0)
            eax_7 = 0
        else
            int32_t eax_6 = *(arg1 + 0x264)
            
            if (eax_6 == 0)
                eax_7 = sub_6b5c43(0x200)
            else
                eax_7 = eax_6(arg1, 0x200)
            
            if (eax_7 == 0 && (*(arg1 + 0x70) & 0x100000) == 0)
                sub_5a5c60(arg1, "Out of Memory")
                noreturn
        
        *(eax_4 + (esi << 2)) = eax_7
        esi += 1
    while (esi u< ebx)

int32_t j = 0
int128_t** i = nullptr
arg2 = nullptr
uint32_t result

do
    uint32_t edi_1 = zx.d(i.w * 0x101)
    int16_t top = top + 1
    int32_t edx_2
    edx_2:result = mulu.dp.d(0x80008001, 
        zx.d(sub_5a5430(edi_1 + 0x80, arg4)) * ((1 << (0x10 - arg3)) - 1) + 0x8000)
    
    if (j u< (edx_2 u>> 0xf) + 1)
        result = 0xff u>> arg3
        
        do
            uint32_t ebp_2 = j u>> (8 - arg3)
            int32_t ecx_11 = *(eax_4 + ((result & j) << 2))
            j += 1
            *(ecx_11 + (ebp_2 << 1)) = edi_1.w
        while (j u< (edx_2 u>> 0xf) + 1)
        
        ebx = var_4
        i = arg2
    
    i += 1
    arg2 = i
while (i u< 0xff)

int32_t ebx_3 = ebx << 8

if (j u< ebx_3)
    result = 0xff s>> arg3
    
    do
        uint32_t edi_3 = j u>> (8 - arg3)
        int32_t edx_7 = *(eax_4 + ((result & j) << 2))
        j += 1
        *(edx_7 + (edi_3 << 1)) = 0xffff
    while (j u< ebx_3)

return result
