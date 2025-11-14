// 函数: sub_4d0360
// 地址: 0x4d0360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2

if (arg1 != ebp)
    void* ecx_1 = *ebp
    int32_t edi_1 = ebp[1]
    int32_t esi_3 = (edi_1 - ecx_1) s>> 5
    
    if (esi_3 == 0)
        sub_4cfc90(arg1, &arg2, *arg1, arg1[1])
        return arg1
    
    void* eax_3 = *arg1
    int32_t edx_3 = (arg1[1] - eax_3) s>> 5
    
    if (esi_3 u<= edx_3)
        int32_t* edx_4 = arg2
        int32_t* var_14_2 = edx_4
        int32_t* eax_4 = sub_4d0680(eax_3, edx_4, ecx_1, edi_1)
        int32_t edi_2 = arg1[1]
        int32_t* esi_5 = eax_4
        
        if (eax_4 != edi_2)
            do
                (**esi_5)(0)
                esi_5 = &esi_5[8]
            while (esi_5 != edi_2)
        
        arg1[1] = ((ebp[1] - *ebp) & 0xffffffe0) + *arg1
        return arg1
    
    if (esi_3 u<= (arg1[2] - eax_3) s>> 5)
        void* esi_6 = ecx_1 + (edx_3 << 5)
        int32_t* edx_7 = arg2
        int32_t* var_14_3 = edx_7
        sub_4d0680(eax_3, edx_7, ecx_1, esi_6)
        int32_t* ecx_4 = arg2
        int32_t* var_18_2 = ecx_4
        void* var_1c_1 = esi_6
        arg1[1] = sub_4d06d0(arg1[1], ebp[1], ecx_4)
        return arg1
    
    if (eax_3 != 0)
        sub_4c88f0(eax_3, arg1[1])
        int32_t var_14_4 = *arg1
        sub_6b4d5b()
    
    if (sub_5329f0((ebp[1] - *ebp) s>> 5, arg1) != 0)
        int32_t* ecx_5 = arg2
        int32_t* var_14_5 = ecx_5
        int32_t var_18_3 = *ebp
        arg1[1] = sub_4d06d0(*arg1, ebp[1], ecx_5)

return arg1
