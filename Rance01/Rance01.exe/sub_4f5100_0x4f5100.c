// 函数: sub_4f5100
// 地址: 0x4f5100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
void* i = *(arg1 + 0x18)
void* i_1 = i

while (i != *(arg1 + 0x1c))
    for (void* j = *(i + 0x20); j != *(i + 0x24); j += 0x1c)
        int32_t* k = *(j + 0xc)
        
        if (k != *(j + 0x10))
            do
                int32_t eax
                int32_t edx_1
                edx_1:eax = muls.dp.d(0x78787879, *(arg1 + 0x2c) - *(arg1 + 0x28))
                int32_t edx_2 = edx_1 s>> 5
                int32_t eax_3 = (edx_2 u>> 0x1f) + edx_2
                int32_t esi_1 = 0
                
                if (eax_3 s<= 0)
                label_4f5151:
                    esi_1 = 0xffffffff
                else
                    int32_t* ecx_4 = *(arg1 + 0x28) + 0x1c
                    
                    while (*ecx_4 != *k)
                        esi_1 += 1
                        ecx_4 = &ecx_4[0x11]
                        
                        if (esi_1 s>= eax_3)
                            goto label_4f5151
                
                k[1] = esi_1
                k = &k[3]
            while (k != *(j + 0x10))
            
            i = i_1
    
    i += 0x54
    i_1 = i

return i
