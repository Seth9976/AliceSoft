// 函数: sub_52d8c0
// 地址: 0x52d8c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2

if (arg1 != ebp)
    int32_t ecx_1 = *ebp
    int32_t edi_1 = ebp[1]
    int32_t esi_3 = (edi_1 - ecx_1) s>> 4
    
    if (esi_3 == 0)
        sub_52bf50(arg1, &arg2, *arg1, arg1[1])
        return arg1
    
    void* eax_3 = *arg1
    int32_t edx_3 = (arg1[1] - eax_3) s>> 4
    
    if (esi_3 u<= edx_3)
        int32_t* eax_4 = sub_52df90(eax_3, edx_3, ecx_1, edi_1)
        int32_t edi_2 = arg1[1]
        int32_t* esi_5 = eax_4
        
        if (eax_4 != edi_2)
            do
                (**esi_5)(0)
                esi_5 = &esi_5[4]
            while (esi_5 != edi_2)
        
        arg1[1] = ((ebp[1] - *ebp) & 0xfffffff0) + *arg1
        return arg1
    
    if (esi_3 u<= (arg1[2] - eax_3) s>> 4)
        int32_t edx_5 = edx_3 * 2
        int32_t esi_6 = ecx_1 + (edx_5 << 3)
        sub_52df90(eax_3, edx_5, ecx_1, esi_6)
        void* ecx_8 = arg2
        void* var_14_2 = ecx_8
        int32_t var_18_2 = esi_6
        arg1[1] = sub_52c190(arg1[1], ebp[1], ecx_8)
        return arg1
    
    if (eax_3 != 0)
        sub_52c150(eax_3, arg1[1])
        int32_t var_14_3 = *arg1
        sub_6b4d5b()
    
    if (sub_5c9f50((ebp[1] - *ebp) s>> 4, arg1) != 0)
        void* ecx_9 = arg2
        void* var_14_4 = ecx_9
        int32_t var_18_3 = *ebp
        arg1[1] = sub_52c190(*arg1, ebp[1], ecx_9)

return arg1
