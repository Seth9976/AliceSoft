// 函数: sub_6ca840
// 地址: 0x6ca840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg3 + 0x37dc) != 0)
    return 0xffffffed

int32_t result = sub_6f4190(arg3, arg1, arg3 + 0x37a4, arg2)

if (result == 0)
    *(arg1 + 0x28) = 0
    int32_t edx_1 = 0
    int32_t ecx_1 = *arg2
    
    if (ecx_1 s> 0)
        int32_t edi_1 = arg2[0xd]
        int32_t ebx_1 = 0
        
        while (true)
            if (*(ebx_1 + edi_1 + 0xc) == 0 || *(ebx_1 + edi_1 + 0x10) == 0)
                return 0xffffffef
            
            if (*(ebx_1 + edi_1 + 0x14) == 0)
                return 0xffffffee
            
            ebx_1 += 0x18
            edx_1 += 1
            
            if (edx_1 s>= ecx_1)
                break
            
            continue

return result
