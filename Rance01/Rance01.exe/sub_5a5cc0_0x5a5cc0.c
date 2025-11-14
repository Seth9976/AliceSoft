// 函数: sub_5a5cc0
// 地址: 0x5a5cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = arg3
int32_t edx = 0
char* result = arg3 - 1
int32_t edi = 0
uint32_t esi = arg1
int32_t eax = arg5
int32_t var_4 = 0
int32_t ebp = 1
*result = 0

if (result u> arg4)
    while (esi != 0 || edx s< ebp)
        if (eax - 1 u> 4)
            esi = 0
        else
            switch (eax)
                case 1
                    goto label_5a5d4d
                case 2
                    ebp = 2
                label_5a5d4d:
                    uint32_t edx_5 = esi u/ 0xa
                    result -= 1
                    uint32_t eax_10
                    eax_10.b = *("0123456789ABCDEF" - edx_5 * 0xa + esi)
                    *result = eax_10.b
                    esi = edx_5
                case 3
                    goto label_5a5d72
                case 4
                    ebp = 2
                label_5a5d72:
                    int32_t eax_1
                    eax_1.b = (*"0123456789ABCDEF")[esi & 0xf]
                    result -= 1
                    *result = eax_1.b
                    esi u>>= 4
                case 5
                    ebp = 5
                    uint32_t eax_3
                    uint32_t edx_2
                    
                    if (edi == 0)
                        edx_2 = esi u/ 0xa
                        eax_3 = edx_2 * 5
                    
                    if (edi != 0 || esi != eax_3 * 2)
                        edx_2 = esi u/ 0xa
                        result -= 1
                        uint32_t eax_7
                        eax_7.b = *("0123456789ABCDEF" - edx_2 * 0xa + esi)
                        *result = eax_7.b
                        edi = 1
                    
                    esi = edx_2
        
        eax = arg5
        edx = var_4 + 1
        var_4 = edx
        
        if (eax == 5 && edx == eax)
            if (result u<= arg4)
                break
            
            if (edi != 0)
                result -= 1
                *result = 0x2e
            else if (esi == 0)
                result -= 1
                *result = 0x30
        
        if (result u<= arg4)
            break

return result
