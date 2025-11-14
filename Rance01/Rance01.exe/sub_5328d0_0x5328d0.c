// 函数: sub_5328d0
// 地址: 0x5328d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != arg2)
    int32_t* ecx_1 = *arg2
    int32_t* eax_1 = *arg1
    int32_t edi_1 = arg2[1]
    int32_t ebp_3 = (edi_1 - ecx_1) s>> 5
    
    if (ebp_3 != 0)
        int32_t edx_3 = (arg1[1] - eax_1) s>> 5
        
        if (ebp_3 u<= edx_3)
            int32_t* var_14_2 = arg2
            sub_5327d0(sub_532d60(eax_1, edx_3, ecx_1, edi_1), arg1[1])
            arg1[1] = ((arg2[1] - *arg2) & 0xffffffe0) + *arg1
            return arg1
        
        if (ebp_3 u<= (arg1[2] - eax_1) s>> 5)
            void* edi_7 = &ecx_1[edx_3 * 8]
            int32_t edx_9 = sub_532d60(eax_1, edx_3 << 5, ecx_1, edi_7)
            int32_t* eax_8 = arg1[1]
            int32_t* var_14_3 = arg2
            arg1[1] = sub_532a30(eax_8, edx_9, edi_7, arg2[1], eax_8)
            return arg1
        
        if (eax_1 != 0)
            int32_t* var_10_4 = arg2
            sub_5327d0(eax_1, arg1[1])
            int32_t var_14_4 = *arg1
            sub_6b4d5b()
        
        if (sub_5329f0((arg2[1] - *arg2) s>> 5, arg1) != 0)
            int32_t* eax_16 = *arg1
            int32_t edx_11 = arg2[1]
            int32_t* var_10_5 = arg2
            arg1[1] = sub_532a30(eax_16, edx_11, *arg2, edx_11, eax_16)
    else
        int32_t* ecx_2 = arg1[1]
        
        if (eax_1 != ecx_2)
            int32_t edx
            void* eax_2 = sub_532d60(eax_1, edx, ecx_2, ecx_2)
            int32_t* var_14_1 = arg2
            sub_5327d0(eax_2, arg1[1])
            arg1[1] = eax_2

return arg1
