// 函数: sub_6d0f30
// 地址: 0x6d0f30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg1[0xa]

if (result != 0)
    if (result == 1)
        uint32_t edx_5 = zx.d(*(arg2 + 0x408))
        int32_t ecx_6 = *(arg2 + 8)
        
        if (arg1[0xf] != 0)
            result = sub_6d0080(arg1, edx_5, ecx_6)
        else
            result = sub_6cffa0(arg1, edx_5, ecx_6)
        
        if (result == 0)
            arg1[0xa] = 0
    else
        if (result s<= 0x7fff)
            goto label_6d0fe5
        
        uint32_t edx_1 = zx.d(*(arg2 + 0x5c8))
        int32_t ecx_1 = *(arg2 + 0x388)
        
        if (arg1[0xf] != 0)
            result = sub_6d0080(arg1, edx_1, ecx_1)
        else
            result = sub_6cffa0(arg1, edx_1, ecx_1)
        
        if (result == 0)
            int32_t edx_2 = arg1[0xa]
            
            if (arg1[0xf] != 0)
                result = sub_6d0080(arg1, edx_2, 0xe)
            else
                result = sub_6cffa0(arg1, edx_2, 0xe)
            
            if (result == 0)
                result = arg1[0xa] - 0x7fff
                arg1[0xa] = result
            label_6d0fe5:
                int32_t eax_3 = sub_6d1140(result)
                int32_t ecx_3 = eax_3 << 4
                uint32_t edx_3 = zx.d(*(arg2 + (ecx_3 << 1) + 0x408))
                int32_t ecx_4 = *(arg2 + (ecx_3 << 2) + 8)
                
                if (arg1[0xf] != 0)
                    result = sub_6d0080(arg1, edx_3, ecx_4)
                else
                    result = sub_6cffa0(arg1, edx_3, ecx_4)
                
                if (result == 0)
                    int32_t ecx_5 = arg1[0xa]
                    
                    if (arg1[0xf] != 0)
                        result = sub_6d0080(arg1, ecx_5, eax_3)
                    else
                        result = sub_6cffa0(arg1, ecx_5, eax_3)
                    
                    if (result == 0)
                        arg1[0xa] = 0

return result
