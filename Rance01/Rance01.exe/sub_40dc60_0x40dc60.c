// 函数: sub_40dc60
// 地址: 0x40dc60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg2

if (esi != 0)
    int32_t* eax_1 = (*(*arg1 + 0x10))()
    int32_t* eax_3 = (*(*arg1 + 0x14))()
    int32_t eax_5 = (*(*esi + 0x10))()
    arg2 = (*(*esi + 0x14))()
    int32_t edx_5 = *arg3
    
    if (edx_5 s< 0)
        *arg5 -= edx_5
        *arg7 += *arg3
        *arg3 = 0
    
    int32_t edx_7 = *arg5
    
    if (edx_7 s< 0)
        *arg3 -= edx_7
        *arg7 += *arg5
        *arg5 = 0
    
    int32_t ebx_1 = *arg3
    
    if (*arg7 + ebx_1 s> eax_1)
        *arg7 = eax_1 - ebx_1
    
    int32_t ecx_4 = *arg5
    
    if (*arg7 + ecx_4 s> eax_5)
        *arg7 = eax_5 - ecx_4
    
    if (*arg7 s> 0)
        int32_t ecx_5 = *arg4
        void** ecx_6
        
        if (ecx_5 s>= 0)
            ecx_6 = arg8
        else
            *arg6 -= ecx_5
            ecx_6 = arg8
            *ecx_6 += *arg4
            *arg4 = 0
        
        int32_t edi_4 = *arg6
        
        if (edi_4 s< 0)
            *arg4 -= edi_4
            *ecx_6 += *arg6
            *arg6 = 0
        
        int32_t edx_14 = *arg4
        
        if (*ecx_6 + edx_14 s> eax_3)
            *ecx_6 = eax_3 - edx_14
        
        int32_t esi_4 = *arg6
        
        if (*ecx_6 + esi_4 s> arg2)
            *ecx_6 = arg2 - esi_4
        
        arg2.b = *ecx_6 s> 0
        return arg2

arg2.b = 0
return arg2
