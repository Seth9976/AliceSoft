// 函数: sub_668fd0
// 地址: 0x668fd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x5c)
int32_t ecx = *(arg1 + 0x60)
int32_t* ebp = arg2

if (eax == ecx)
    return 0xffffffff

int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x50) - *(arg1 + 0x4c))
int32_t edx_1 = edx s>> 4
int32_t ecx_5 = (edx_1 u>> 0x1f) + edx_1
int32_t* esi = nullptr
int32_t edi = 0
arg2 = nullptr
int32_t var_18 = 0
int32_t var_4 = ecx_5

if (ecx_5 s> 0)
    int32_t* ebx_2 = *(arg1 + 0x4c) + 0x14
    int32_t* var_14_1 = ebx_2
    
    do
        if (*(ebx_2 - 0x13) != 0 && *ebx_2 == 3)
            int32_t eax_5 = (ecx - eax) s>> 4
            int32_t var_8_1 = eax_5
            
            if (esi s< eax_5)
                int32_t* ebx_5 = (esi << 4) + *(arg1 + 0x5c)
                
                do
                    if ((ebx_5[1] - *ebx_5) s>> 2 s> edi)
                        int32_t edi_1 = ebp[4]
                        int32_t* eax_8 = *(*ebx_5 + (edi << 2)) + 0x30
                        int32_t* ecx_6
                        
                        if (ebp[5] u< 0x10)
                            ecx_6 = ebp
                        else
                            ecx_6 = *ebp
                        
                        int32_t esi_1 = eax_8[4]
                        int32_t edx_6 = esi_1
                        
                        if (esi_1 u>= edi_1)
                            edx_6 = edi_1
                        
                        if (eax_8[5] u>= 0x10)
                            eax_8 = *eax_8
                        
                        if (sub_402320(eax_8, eax_8, ecx_6, edx_6) == 0 && esi_1 u>= edi_1)
                            int32_t eax_9
                            eax_9.b = esi_1 != edi_1
                            
                            if (eax_9 == 0)
                                return arg2
                        
                        esi = arg2
                        eax_5 = var_8_1
                        ecx_5 = var_4
                        edi = var_18
                    
                    esi += 1
                    ebx_5 = &ebx_5[4]
                    arg2 = esi
                while (esi s< eax_5)
                
                ebx_2 = var_14_1
        
        edi += 1
        ebx_2 = &ebx_2[0x16]
        var_18 = edi
        var_14_1 = ebx_2
    while (edi s< ecx_5)

return 0xffffffff
