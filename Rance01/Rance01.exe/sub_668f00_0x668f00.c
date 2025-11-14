// 函数: sub_668f00
// 地址: 0x668f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
int32_t eax = *(ebp + 0x5c)
int32_t ecx = *(ebp + 0x60)

if (eax == ecx)
    return 0xffffffff

int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2e8ba2e9, *(ebp + 0x50) - *(ebp + 0x4c))
int32_t edx_1 = edx s>> 4
int32_t ebx_2 = (edx_1 u>> 0x1f) + edx_1
int32_t result = 0
int32_t edi = 0

if (ebx_2 s> 0)
    int32_t* eax_4 = *(ebp + 0x4c) + 0x14
    int32_t* var_c_1 = eax_4
    
    do
        if (*(eax_4 - 0x13) != 0 && *eax_4 == 1)
            int32_t ecx_5 = (ecx - eax) s>> 4
            
            if (result s< ecx_5)
                int32_t* eax_7 = (result << 4) + *(ebp + 0x5c)
                
                do
                    if ((eax_7[1] - *eax_7) s>> 2 s> edi)
                        if (*(*(*eax_7 + (edi << 2)) + 0x28) == arg2)
                            return result
                        
                        ebp = arg1
                    
                    result += 1
                    eax_7 = &eax_7[4]
                while (result s< ecx_5)
                
                eax_4 = var_c_1
        
        edi += 1
        eax_4 = &eax_4[0x16]
        var_c_1 = eax_4
    while (edi s< ebx_2)

return 0xffffffff
