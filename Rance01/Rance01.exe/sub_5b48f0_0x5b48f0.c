// 函数: sub_5b48f0
// 地址: 0x5b48f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1

if (*(arg1 + 0x4c) != 0)
    int32_t* ebx_1 = *(arg1 + 0x48)
    
    if (ebx_1 != 0)
        int32_t ecx_1 = *(arg1 + 0x38) * *(arg1 + 0x28)
        
        if (ecx_1 == 0)
            ecx_1 = 0x20
        
        sub_5c6920(ebx_1, divu.dp.d(0:(arg2 << 3), ecx_1), 0)
        sub_5b4560(arg1 + 8)
        *(arg1 + 0x58) = arg2
        void* eax_3
        eax_3.b = 1
        return eax_3

int32_t eax
eax.b = 0
return eax
