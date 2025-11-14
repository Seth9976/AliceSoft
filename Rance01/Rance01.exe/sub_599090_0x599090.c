// 函数: sub_599090
// 地址: 0x599090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t esi
int32_t var_8 = esi

if (arg1 != 0 && (*(*arg1 + 8))(0) == 0x11)
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t* ebx = (*(*arg1 + 0xc))(0)
    int32_t* eax_2
    
    if (ebx != 0)
        int32_t* esi_3 = arg2
        int32_t eax_3
        int32_t edx_3
        edx_3:eax_3 = muls.dp.d(0x4ec4ec4f, esi_3[1] - *esi_3)
        int32_t edx_4 = edx_3 s>> 5
        int32_t __return_addr_1 = (edx_4 u>> 0x1f) + edx_4
        __return_addr = __return_addr_1
        void* eax_6 = *ebx
        
        if (__return_addr_1 s<= 0)
            return (*(eax_6 + 0x20))() != 0
        
        if ((*(eax_6 + 0x18))(&__return_addr, 1).b != 0)
            int32_t edi = 0
            
            if (__return_addr s> 0)
                int32_t ebp_1 = 0
                
                while (true)
                    void* esi_7 = *esi_3 + ebp_1
                    int32_t* eax_9
                    int32_t edx_8
                    eax_9, edx_8 = (*(*ebx + 0x10))(edi)
                    
                    if (sub_599af0(eax_9, edx_8, esi_7).b == 0)
                        eax_2.b = 0
                        return eax_2
                    
                    edi += 1
                    ebp_1 += 0x68
                    
                    if (edi s>= __return_addr)
                        break
                    
                    esi_3 = arg2
            
            eax_2.b = 1
            return eax_2
    
    eax_2.b = 0
    return eax_2

arg1.b = 0
return arg1
