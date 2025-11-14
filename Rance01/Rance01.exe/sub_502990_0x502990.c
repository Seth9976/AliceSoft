// 函数: sub_502990
// 地址: 0x502990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_c = ecx
sub_502ad0(arg1)

if (sub_4cccb0(arg1 + 0x14, arg2, arg4) != 0 && sub_4cdf30(arg1 + 0x24, arg2, arg1 + 0x14, 0) != 0)
    *(arg1 + 0x161) = sub_4ceea0(arg1 + 0x24)
    *(arg1 + 0x162) = sub_4ccef0(arg1 + 0x14)
    int32_t* eax_6 = *(arg1 + 0x24)
    int32_t ecx_2 = *(arg1 + 0x28)
    
    if (eax_6 == ecx_2)
    label_502a0f:
        eax_6.b = 0
    else
        while (*(*eax_6 + 0x26) == 0)
            eax_6 = &eax_6[1]
            
            if (eax_6 == ecx_2)
                goto label_502a0f
        
        eax_6.b = 1
    
    *(arg1 + 0x163) = eax_6.b
    
    if (arg3 == 0)
    label_502a2b:
        sub_4ce390(arg1 + 0x24, arg2)
        sub_4ce430(arg1 + 0x24, arg1 + 0x34)
        sub_51d0c0(*(*(arg1 + 0x48) + 4))
        void* eax_9 = *(arg1 + 0x48)
        *(eax_9 + 4) = eax_9
        int32_t* eax_10 = *(arg1 + 0x48)
        *eax_10 = eax_10
        void* eax_11 = *(arg1 + 0x48)
        *(eax_11 + 8) = eax_11
        *(arg1 + 0x4c) = 0
        *(arg1 + 0x10) = arg2
        EnterCriticalSection(arg2[1])
        *arg2 += 1
        LeaveCriticalSection(arg2[1])
        int32_t result
        result.b = 1
        return result
    
    if (sub_4ce320(arg1 + 0x24, arg2) != 0)
        goto label_502a2b

return 0
