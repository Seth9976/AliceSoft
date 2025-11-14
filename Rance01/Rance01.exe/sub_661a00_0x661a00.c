// 函数: sub_661a00
// 地址: 0x661a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg2
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, esi[1] - *esi)
int32_t edx_1 = edx s>> 4
int32_t eax_3 = (edx_1 u>> 0x1f) + edx_1
int32_t edi = 0
int32_t var_4 = eax_3

if (eax_3 s> 0)
    int32_t* ebx_1 = arg1
    int32_t var_c_1 = 0
    
    do
        if (*(var_c_1 + *esi + 0x14) == 4)
            arg1 = nullptr
            int32_t ebp_3 = (ebx_1[1] - *ebx_1) s>> 4
            
            if (ebp_3 s> 0)
                int32_t* esi_1 = nullptr
                void* eax_10
                
                do
                    int32_t eax_4 = *ebx_1
                    void* ecx_3 = esi_1 + eax_4
                    void* eax_5 = *(*(esi_1 + eax_4) + (edi << 2))
                    
                    if (*(eax_5 + 8) != 4 || (*(ecx_3 + 4) - *ecx_3) s>> 2 s< edi)
                        eax_5.b = 0
                        return eax_5
                    
                    sub_6691e0(eax_5 + 0x4c, var_c_1 + *arg2 + 4)
                    int32_t eax_7 = *(*(esi_1 + *ebx_1) + (edi << 2))
                    
                    if (sub_661a00(eax_7 + 0x5c, eax_7 + 0x4c).b == 0)
                        eax_5.b = 0
                        return eax_5
                    
                    eax_10 = arg1 + 1
                    esi_1 = &esi_1[4]
                    arg1 = eax_10
                while (eax_10 s< ebp_3)
                esi = arg2
                eax_3 = var_4
        
        var_c_1 += 0x58
        edi += 1
    while (edi s< eax_3)

eax_3.b = 1
return eax_3
