// 函数: sub_57d4f0
// 地址: 0x57d4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax
int32_t __saved_ebx_3
eax, __saved_ebx_3 = sub_5799d0(arg1)

if (eax != 0)
    int32_t __saved_ebx_1 = __saved_ebx_3
    int80_t st0_1
    st0_1, eax = sub_57ce60(arg1, fconvert.s(fconvert.t(arg5)))
    
    if (eax != 0)
        int32_t* ecx_1
        int32_t* ebx
        
        if (*(arg1 + 0x3c) != 0)
            ecx_1 = arg4
            ebx = arg3
        else
            ecx_1 = arg3
            ebx = arg4
        
        char result
        int32_t edx
        result, edx = sub_579610(ecx_1, arg2, arg1)
        
        if (result != 0)
            return sub_578590(arg2, edx, ebx, arg1) != 0
        
        return result

return 0
