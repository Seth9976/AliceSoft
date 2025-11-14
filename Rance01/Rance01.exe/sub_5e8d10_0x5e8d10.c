// 函数: sub_5e8d10
// 地址: 0x5e8d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1

if (ebx[1] != 0 && ebx[3] != 0 && *ebx != 0xffffffff)
    int32_t arg_8
    int32_t arg_c
    int32_t arg_10
    int32_t arg_14
    sub_5e87c0(ebx, &arg_8, &arg_c, &arg_10, &arg_14)
    
    if (sub_5e8700(ebx, arg_8, arg_c, arg_10, arg_14) == 0)
        arg1 = 0xff
        int32_t** eax_4 = &arg1
        int32_t* arg_18
        
        if (arg_18 s<= 0xff)
            eax_4 = &arg_18
        
        int32_t* esi = *eax_4
        arg_18 = esi
        arg1 = 0xff
        int32_t** eax_5 = &arg1
        int32_t* arg_1c
        
        if (arg_1c s<= 0xff)
            eax_5 = &arg_1c
        
        int32_t* edx_2 = *eax_5
        arg_1c = edx_2
        arg1 = 0xff
        int32_t** eax_6 = &arg1
        int32_t* arg_20
        
        if (arg_20 s<= 0xff)
            eax_6 = &arg_20
        
        int32_t* ecx_3 = *eax_6
        arg_20 = ecx_3
        arg1 = nullptr
        int32_t** eax_7 = &arg1
        
        if (esi s>= 0)
            eax_7 = &arg_18
        
        int32_t* ebp = *eax_7
        arg_18 = nullptr
        int32_t** eax_8 = &arg_18
        
        if (edx_2 s>= 0)
            eax_8 = &arg_1c
        
        int32_t* esi_1 = *eax_8
        arg_18 = nullptr
        int32_t** edi = &arg_18
        
        if (ecx_3 s>= 0)
            edi = &arg_20
        
        int32_t result = sub_5e81e0(ebx)
        void* ecx_4 = ebx[3]
        
        if (*(ecx_4 + 4) != 0)
            (*(**(ecx_4 + 4) + 0x34))(result, arg_8, arg_c, arg_10, arg_14, ebp, esi_1, *edi, arg2)
        
        result.b = 1
        return result

return 0
