// 函数: sub_5e8e30
// 地址: 0x5e8e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[1] != 0 && arg1[3] != 0 && *arg1 != 0xffffffff)
    int32_t arg_8
    int32_t arg_c
    int32_t arg_10
    int32_t arg_14
    sub_5e87c0(arg1, &arg_8, &arg_c, &arg_10, &arg_14)
    
    if (sub_5e8700(arg1, arg_8, arg_c, arg_10, arg_14) == 0)
        int32_t __saved_ecx_1 = 0xff
        int32_t __saved_ecx
        int32_t* eax_4 = &__saved_ecx
        int32_t arg_18
        
        if (arg_18 s<= 0xff)
            eax_4 = &arg_18
        
        int32_t ebx = *eax_4
        arg_18 = ebx
        int32_t __saved_ecx_2 = 0xff
        int32_t* eax_5 = &__saved_ecx
        int32_t arg_1c
        
        if (arg_1c s<= 0xff)
            eax_5 = &arg_1c
        
        int32_t esi_1 = *eax_5
        arg_1c = esi_1
        int32_t __saved_ecx_3 = 0xff
        int32_t* eax_6 = &__saved_ecx
        int32_t arg_20
        
        if (arg_20 s<= 0xff)
            eax_6 = &arg_20
        
        int32_t edx_2 = *eax_6
        arg_20 = edx_2
        int32_t __saved_ecx_4 = 0xff
        int32_t* eax_7 = &__saved_ecx
        int32_t arg_24
        
        if (arg_24 s<= 0xff)
            eax_7 = &arg_24
        
        int32_t ecx_3 = *eax_7
        arg_24 = ecx_3
        int32_t* eax_8 = &__saved_ecx
        
        if (ebx s>= 0)
            eax_8 = &arg_18
        
        int32_t ebp = *eax_8
        arg_18 = 0
        int32_t* eax_9 = &arg_18
        
        if (esi_1 s>= 0)
            eax_9 = &arg_1c
        
        int32_t ebx_1 = *eax_9
        arg_18 = 0
        int32_t* eax_10 = &arg_18
        
        if (edx_2 s>= 0)
            eax_10 = &arg_20
        
        int32_t esi_2 = *eax_10
        arg_18 = 0
        int32_t* edi = &arg_18
        
        if (ecx_3 s>= 0)
            edi = &arg_24
        
        int32_t result = sub_5e81e0(arg1)
        void* ecx_4 = arg1[3]
        
        if (*(ecx_4 + 4) != 0)
            (*(**(ecx_4 + 4) + 0x60))(result, arg_8, arg_c, arg_10, arg_14, ebp, ebx_1, esi_2, *edi)
        
        result.b = 1
        return result

return 0
